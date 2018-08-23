/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class jaci_pathfinder_PathfinderJNI */

#ifndef _Included_jaci_pathfinder_PathfinderJNI
#define _Included_jaci_pathfinder_PathfinderJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     jaci_pathfinder_PathfinderJNI
 * Method:    generateTrajectory
 * Signature: ([Ljaci/pathfinder/Waypoint;Ljaci/pathfinder/Trajectory/FitMethod;IDDDDZ)[Ljaci/pathfinder/Trajectory/Segment;
 */
JNIEXPORT jobjectArray JNICALL Java_jaci_pathfinder_PathfinderJNI_generateTrajectory
  (JNIEnv *, jclass, jobjectArray, jobject, jint, jdouble, jdouble, jdouble, jdouble, jboolean);

/*
 * Class:     jaci_pathfinder_PathfinderJNI
 * Method:    modifyTrajectoryTank
 * Signature: ([Ljaci/pathfinder/Trajectory/Segment;DLjaci/pathfinder/Trajectory/Config;)[[Ljaci/pathfinder/Trajectory/Segment;
 */
JNIEXPORT jobjectArray JNICALL Java_jaci_pathfinder_PathfinderJNI_modifyTrajectoryTank
  (JNIEnv *, jclass, jobjectArray, jdouble, jobject);

/*
 * Class:     jaci_pathfinder_PathfinderJNI
 * Method:    modifyTrajectorySwerve
 * Signature: ([Ljaci/pathfinder/Trajectory/Segment;DDLjaci/pathfinder/modifiers/SwerveModifier/Mode;)[[Ljaci/pathfinder/Trajectory/Segment;
 */
JNIEXPORT jobjectArray JNICALL Java_jaci_pathfinder_PathfinderJNI_modifyTrajectorySwerve
  (JNIEnv *, jclass, jobjectArray, jdouble, jdouble, jobject);

/*
 * Class:     jaci_pathfinder_PathfinderJNI
 * Method:    trajectorySerialize
 * Signature: ([Ljaci/pathfinder/Trajectory/Segment;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_jaci_pathfinder_PathfinderJNI_trajectorySerialize
  (JNIEnv *, jclass, jobjectArray, jstring);

/*
 * Class:     jaci_pathfinder_PathfinderJNI
 * Method:    trajectoryDeserialize
 * Signature: (Ljava/lang/String;)[Ljaci/pathfinder/Trajectory/Segment;
 */
JNIEXPORT jobjectArray JNICALL Java_jaci_pathfinder_PathfinderJNI_trajectoryDeserialize
  (JNIEnv *, jclass, jstring);

/*
 * Class:     jaci_pathfinder_PathfinderJNI
 * Method:    trajectorySerializeCSV
 * Signature: ([Ljaci/pathfinder/Trajectory/Segment;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_jaci_pathfinder_PathfinderJNI_trajectorySerializeCSV
  (JNIEnv *, jclass, jobjectArray, jstring);

/*
 * Class:     jaci_pathfinder_PathfinderJNI
 * Method:    trajectoryDeserializeCSV
 * Signature: (Ljava/lang/String;)[Ljaci/pathfinder/Trajectory/Segment;
 */
JNIEXPORT jobjectArray JNICALL Java_jaci_pathfinder_PathfinderJNI_trajectoryDeserializeCSV
  (JNIEnv *, jclass, jstring);

#ifdef __cplusplus
}
#endif
#endif
