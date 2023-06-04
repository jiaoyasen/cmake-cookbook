//
// Created by 焦亚森 on 2023/6/1.
//

#ifndef CMAKE_COOKBOOK_SWAP_H
#define CMAKE_COOKBOOK_SWAP_H

#include <iostream>

class swap {
public:
    swap(int a,int b) {
        this->_a = a;
        this->_b = b;
    }
    void run();
    void printInfo();

private:
    int _a;
    int _b;
};

#endif //CMAKE_COOKBOOK_SWAP_H
