package com.vv.ndk;

/**
 * Created by fish on 2019/2/20.
 * yuxm_zju@aliyun.com
 */
public class Hoho {
    static {
        System.loadLibrary("three");
    }
    public static native String sayHoho();
}
