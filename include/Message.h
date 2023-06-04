//
// Created by 焦亚森 on 2023/6/2.
//

#ifndef CMAKE_COOKBOOK_MESSAGE_H
#define CMAKE_COOKBOOK_MESSAGE_H

#include <iosfwd>
#include <string>
class Message {
public:
    Message(const std::string &m) : message_(m) {}
    friend std::ostream &operator<<(std::ostream &os, Message &obj) {
        return obj.printObject(os);
    }
private:
    std::string message_;
    std::ostream &printObject(std::ostream &os);
};

#endif //CMAKE_COOKBOOK_MESSAGE_H
