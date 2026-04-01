
#include <iostream>
#include "pet.h"
using namespace std;


Pet::Pet(string n, int a) {
    setName(n);
    setAge(a);
    cout << "建立寵物：" << name << endl;
}


Pet::~Pet() {
    cout << "與寵物 " << name << " 再見！" << endl;
}

// setName
void Pet::setName(string n) {
    if (n.length() > 2 && n.length() < 5) {
        name = n;
    }
    else {
        cout << "姓名長度錯誤！設定為預設值 Dog" << endl;
        name = "Dog";
    }
}

// setAge
void Pet::setAge(int a) {
    if (a <= 20) {
        age = a;
    }
    else {
        cout << "年齡錯誤！設定為預設值 1" << endl;
        age = 1;
    }
}

// getInfo
void Pet::getInfo() {
    cout << "姓名：" << name << "，年齡：" << age << endl;
}
