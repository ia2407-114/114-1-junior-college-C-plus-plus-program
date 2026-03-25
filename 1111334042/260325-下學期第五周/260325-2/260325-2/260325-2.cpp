#include <iostream>
#include <string>
using namespace std;


class PetDog {
public:

    void setPetName(string name) {
        if (name.length() > 2 && name.length() < 5) {
            petName = name;
        }
        else {
            petName = "未知";
            cout << "錯誤：姓名長度必須為 3 或 4 個字元。" << endl;
        }
    }


    void setPetAge(int age) {
        if (age > 20) {
            petAge = age;
        }
        else {
            petAge = 0;
            cout << "錯誤：年齡必須大於 20 歲。" << endl;
        }
    }

    string getPetName() const {
        return petName;
    }

    int getPetAge() const {
        return petAge;
    }

    void getAndPrintPetInfo() const {
        char isOwner;
        cout << "\n請問你是主人嗎？(Y/N): ";
        cin >> isOwner;

        if (isOwner == 'Y' || isOwner == 'y') {
            cout << "寵物姓名: " << getPetName() << endl;
            cout << "寵物年齡: " << getPetAge() << " 歲" << endl;
        }
        else {
            cout << "你不是主人。" << endl;
        }
    }

private:
    string petName; 
    int petAge;     
};

int main() {
    PetDog myDog;
    string name;
    int age;


    cout << "請輸入寵物姓名" << endl;
    getline(cin, name);
    myDog.setPetName(name);


    cout << "請輸入寵物年齡" << endl;
    cin >> age;
    myDog.setPetAge(age);


    myDog.getAndPrintPetInfo();

    return 0;
}