//
// Created by 焦亚森 on 2023/6/1.
//

#include "../include/swap.h"

void swap::run() {
    int temp;
    temp = _a;
    _a = _b;
    _b = temp;
}

void swap::printInfo() {
    std::cout << "_a = " << _a << std::endl;
    std::cout << "_b = " << _b << std::endl;
}