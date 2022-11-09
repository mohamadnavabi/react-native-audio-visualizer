#include <jni.h>
#include "react-native-audio-visualizer.h"

extern "C"
JNIEXPORT jint JNICALL
Java_com_audiovisualizer_AudioVisualizerModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return audiovisualizer::multiply(a, b);
}
