//
// Created by 焦亚森 on 2023/6/2.
//

#include "Message.h"
#include <iostream>
#include <string>
std::ostream &Message::printObject(std::ostream &os) {
    os << "This is my very nice message: " << std::endl;
    os << message_;
    return os;
}