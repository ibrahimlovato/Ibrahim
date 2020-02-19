// 2.19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
   //variable dec;aration
    double x1, y1, x2, y2, x3, y3;
    double s, s1, s2, s3, s4, s5, s6;
    double side1, side2, side3, area;
    std::cout << "enter three pointes for a tringle:" << std::endl;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    //calculate the values od s1,s2,s3,s4,s5,and s6
    s1 = x2 - x1;
    s2 = y2 - y1;
    s3 = x3 - x2;
    s4 = y3 - y2;
    s5 = x3 - x1;
    s6 = y3 - y1;
    //Compute the values of side1, side2, & side3
    side1 = sqrt((pow(s1, 2)) + (pow(s2, 2)));
    side2 = sqrt((pow(s3, 2)) + (pow(s4, 2)));
    side3 = sqrt((pow(s5, 2)) + (pow(s6, 2)));
    //Compute the value of s
    s = (side1 + side2 + side3) / 2;
    //Calsulate the area of the tringle
    double calc = (s * (s - side1) * (s - side2) * (s - side3));
    area = pow(calc, 0.5);
    std::cout << "the area of the tringle is:" << area << std::endl;
    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
