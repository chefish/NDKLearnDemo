//
// Created by 丶游憩 on 18/2/8.
//

#include "com_vv_ndk_Hello.h"
#include "apple.h"

JNIEXPORT jstring JNICALL Java_com_vv_ndk_Hello_sayHello(JNIEnv *env, jclass jclass1){
    apple *apple = new class apple();
    int tt= apple->getColor();
    return env->NewStringUTF("say Hello");
}