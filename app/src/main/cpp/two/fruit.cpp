//
// Created by 余晓敏 on 2019/2/19.
//

#include "fruit.h"
#include "../one/apple.h"
//#include "../one/apple.h"

int fruit::getAppleColor() {
    apple *apple = new class apple();
    return apple->getColor();
}

fruit::fruit(int pp) {}

//fruit::fruit() {
//
//}