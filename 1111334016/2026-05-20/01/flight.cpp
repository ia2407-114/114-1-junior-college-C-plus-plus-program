#include <iostream>
#include <string>
using namespace std;
#include "flight.h"  
void shape:: area()
    {
    cout << "長方形的體積:" << shape_area2;
    
    }

   
    
    void rectangle::data_input1()
    {
        cout << "輸入長方形的長:";
        cin >> length;
        cout << "輸入長方形的寬:";
        cin >> width;
        shape_area1 = length * width;
        
    }

    
    void rectangle::display2()
    {
        
        cout << "長方形的長:" << length << endl;
        cout << "長方形的寬:" << width << endl;
    }




void cube::data_input2()
    {
        cout << "輸入長方形的高:";
        cin >> height;
        shape_area2 = shape_area1 * height;
    }

    
    void cube:: display3()
    {
        cout << "長方形的高:" << height << endl;
    }

