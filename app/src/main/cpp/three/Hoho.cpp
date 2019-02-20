//
// Created by 丶游憩 on 18/2/8.
//

#include "com_vv_ndk_Hoho.h"
#include "feet.h"
#include <string>
using namespace std;


JNIEXPORT jstring JNICALL Java_com_vv_ndk_Hoho_sayHoho(JNIEnv *env, jclass jclass1){
    feet *feet = new class feet(20);

    int xx = feet->getAppleColor();
    std::string s = std::to_string(xx);

    return env->NewStringUTF(s.c_str());
}