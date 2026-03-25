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
            petName = "未知姓名"; 
            cout << "姓名長度必須大於 2 且小於 5 個字元。" << endl;
        }
    }

    
    void setPetAge(int age) {
       
        if (age > 20) {
            petAge = age;
        }
        else {
            petAge = 0; 
            cout << "年齡必須大於 20 歲。" << endl;
        }
    }

    
    string getPetName() const {
        return petName;
    }

    
    int getPetAge() const {
        return petAge;
    }

    
    void displayPetInfo() const {
        cout << "寵物姓名: " << getPetName() << endl;
        cout << "寵物年齡: " << getPetAge() << " 歲" << endl;
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

    cout << "請輸入寵物年齡:" << endl;
    cin >> age;
    myDog.setPetAge(age);

    myDog.displayPetInfo();

    return 0;
}