#include "pathfinder.h"

void pathfinder_modify_tank(Segment *original, int length, Segment *left_traj, Segment *right_traj, double wheelbase_width, double max_v) {
    double w = wheelbase_width / 2;

    int i;
    for (i = 0; i < length; i++) {
        Segment seg = original[i];
        Segment left = seg;
        Segment right = seg;

        double cos_angle = cos(seg.heading);
        double sin_angle = sin(seg.heading);

        left.x = seg.x - (w * sin_angle);
        left.y = seg.y + (w * cos_angle);

        right.x = seg.x + (w * sin_angle);
        right.y = seg.y - (w * cos_angle);

        if (i > 0) {
            Segment last_left = left_traj[i - 1];
            Segment last_right = right_traj[i - 1];

            double distance_left = sqrt(
                (left.x - last_left.x) * (left.x - last_left.x)
                + (left.y - last_left.y) * (left.y - last_left.y)
            );
            double distance_right = sqrt(
                (right.x - last_right.x) * (right.x - last_right.x)
                + (right.y - last_right.y) * (right.y - last_right.y)
            );

            left.dt = seg.dt;
            right.dt = seg.dt;

            left.position = last_left.position + distance_left;
            right.position = last_right.position + distance_right;
            
			// Original velocities that may be overwritten later
			left.velocity = distance_left / seg.dt;
            right.velocity = distance_right / seg.dt;

            // Check if velocity is over max
            if (left.velocity > max_v ) {
                left.dt = distance_left / max_v;
            }
            if (right.velocity > max_v ) {
                right.dt = distance_right / max_v;
            }

            // Apply any dt shifts to both sides
            double dt_shift = MAX(left.dt, right.dt);

            left.dt = dt_shift;
            right.dt = dt_shift;

            // Recalculate velocities and other parameters according to new dt
            left.velocity = distance_left / left.dt;
            right.velocity = distance_right / right.dt;

            left.acceleration = (left.velocity - last_left.velocity) / seg.dt;
            left.jerk = (left.acceleration - last_left.acceleration) / seg.dt;

            right.acceleration = (right.velocity - last_right.velocity) / seg.dt;
            right.jerk = (right.acceleration - last_right.acceleration) / seg.dt;
        }

        left_traj[i] = left;
        right_traj[i] = right;
    }
}
