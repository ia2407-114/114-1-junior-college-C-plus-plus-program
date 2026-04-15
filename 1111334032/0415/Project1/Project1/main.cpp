#include <iostream>
#include "pet.h"
using namespace std;

int main() {
    pet p1("Lucky", "Dog");
    pet p2("Mimi", "Cat");
    pet p3("Coco", "Rabbit");

    // 輸入資料
    p1.check_birth();
    p1.check_adopt();

    p2.check_birth();
    p2.check_adopt();

    p3.check_birth();
    p3.check_adopt();

    cout << "\n=== Pet Data ===\n";

    // 印出資料
    p1.print_all_data();
    p2.print_all_data();
    p3.print_all_data();

    return 0;
}