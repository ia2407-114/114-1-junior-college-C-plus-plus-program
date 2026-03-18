#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "volume.h"

using namespace std;

int main() {
    
    int int1, int2, int3;
    cout << "輸入3個整數: ";
    cin >> int1 >> int2 >> int3;
    cout << "正方體體積 (整數) 為: " << volume(int1, int2, int3) << "\n\n";

    
    float float1, float2, float3;
    cout << "輸入3個浮點數 (float): ";
    cin >> float1 >> float2 >> float3;
    cout << "正方體體積 (float) 為: " << volume(float1, float2, float3) << "\n\n";

    
    double double1, double2, double3;
    cout << "輸入3個雙精度浮點數 (double): ";
    cin >> double1 >> double2 >> double3;
    cout << "正方體體積 (double) 為: " << volume(double1, double2, double3) << "\n";

    return 0;
}