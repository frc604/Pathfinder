#include "pathfinder.h"

void pathfinder_modify_reverse(Segment *original, int length, Segment *dest) {
    int i;
    for( i = 0; i < length; ++i ) {
        // printf("%d POS: %f X: %f Y: %f\n", i, original[i].position, original[i].x, original[i].y);
        dest[i].position = original[i].position * -1;
        dest[i].velocity = original[i].velocity * -1;
        dest[i].acceleration = original[i].acceleration * -1;
        dest[i].jerk = original[i].jerk * -1;
        dest[i].heading = original[i].heading;
        dest[i].x = original[i].x;
        dest[i].y = original[i].y;
        // printf("%d POS: %f X: %f Y: %f\n", i, dest[i].position, dest[i].x, dest[i].y);

    }
    // printf("\n");
}

void pathfinder_modify_reverse_inplace(Segment *original, int length) {
    int i;
    for( i = 0; i < length; ++i ) {
        original[i].position *= -1;
        original[i].velocity *= -1;
        original[i].acceleration *= -1;
        original[i].jerk *= -1;
        // dest[i].heading = original[i].heading;
        // dest[i].x = original[i].x;
        // dest[i].y = original[i].y;;
    }
}
