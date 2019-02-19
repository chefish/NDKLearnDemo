//
// Created by 丶游憩 on 18/2/8.
//

#include "com_vv_ndk_Hey.h"
#include "fruit.h"
#include <string>
using namespace std;


JNIEXPORT jstring JNICALL Java_com_vv_ndk_Hey_sayHey(JNIEnv *env, jclass jclass1){
    fruit *fruit = new class fruit(20);

    int xx = fruit->getAppleColor();
    std::string s = std::to_string(xx);

    return env->NewStringUTF(s.c_str());
}