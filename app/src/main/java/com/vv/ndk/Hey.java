package com.vv.ndk;

/**
 * Created by ShenZhenWei on 18/2/9.
 */

public class Hey {
    static {
        System.loadLibrary("two");
    }
    public static native String sayHey();
}
