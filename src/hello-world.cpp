//
// Created by 焦亚森 on 2023/6/2.
//

#include "../include/Message.h"
#include "../include/utils.h"
#include <cstdlib>
#include <iostream>
int main() {
    Mem member;
    Group group;
    group.NumOfA();
    group.NumOfB();
    Group group2(7);

    group2.NumOfA();
    group2.NumOfB();
    return EXIT_SUCCESS;
}