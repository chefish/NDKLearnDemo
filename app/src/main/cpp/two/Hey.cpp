//
// Created by 丶游憩 on 18/2/8.
//

#include "com_vv_ndk_Hey.h"
JNIEXPORT jstring JNICALL Java_com_vv_ndk_Hey_sayHey(JNIEnv *env, jclass jclass1){
    return env->NewStringUTF("say hey");
}