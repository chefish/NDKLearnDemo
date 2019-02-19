//
// Created by 余晓敏 on 2019/2/19.
//

#include "fruit.h"
#include "../one/apple.h"

int fruit::getAppleColor() {
    apple *apple = new apple();
    return apple->getColor();
}