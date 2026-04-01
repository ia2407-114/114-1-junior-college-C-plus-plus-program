#ifndef PET_H
#define PET_H

#include <string>

class Pet {
public:
    // 建構元：初始化姓名與年齡
    Pet(std::string name, int age);

    // 解構元：印出再見訊息
    ~Pet();

    // 成員函數宣告
    void setPetName(std::string name);
    std::string getPetName() const;
    void setPetAge(int age);
    int getPetAge() const;
    void displayMessage() const;

private:
    std::string petName;
    int petAge;
};

#endif