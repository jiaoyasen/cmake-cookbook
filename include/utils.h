//
// Created by 焦亚森 on 2023/6/3.
//

#ifndef CMAKE_COOKBOOK_UTILS_H
#define CMAKE_COOKBOOK_UTILS_H

#include<iostream>

using namespace std;

struct Mem {
    Mem() {
        cout << "Mem default, num:" << num << endl;
    }

    Mem(int i): num(i) {
        cout << "Mem default, num:" << num << endl;
    }

    int num = 2;
};

class Group {
public:
    Group() {
        cout << "Group default. val: " << val << endl;
    }
    Group(int i): val('G'), a(i) {
        cout << "Group default. val: " << val << endl;
    }
    void NumOfA() {
        cout << "number of A: " << a.num << endl;
    }
    void NumOfB() {
        cout << "number of B: " << b.num << endl;
    }

private:
    char val{'g'};
    Mem a;
    Mem b{19};
};


#endif //CMAKE_COOKBOOK_UTILS_H
