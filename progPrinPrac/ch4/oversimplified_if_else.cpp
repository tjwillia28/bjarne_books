//
// Created by Tyler Williams on 2019-07-21.
//

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    constexpr double cm_per_inch = 2.54;
//    double length = 1; // length can be in inches or cms
//    char unit = 0;
//
//    cout << "Please enter the legth followed by a unit (c or i)\n";
//    cin >> length >> unit;
//
//    if (unit == 'i')
//        cout << length << "in == " << cm_per_inch*length << "cm\n";
//    else
//        cout << length << "cm == " << length/cm_per_inch << "in\n";
//
//    // Issue with program is that we don't test for bad input
//
//    return 0;
// }

// Improved version

#include <iostream>

using namespace std;

int main()
{
    constexpr double cm_per_inch = 2.54;
    double length = 1; // length can be in inches or cms
    char unit = 0;

    cout << "Please enter the legth followed by a unit (c or i)\n";
    cin >> length >> unit;

    if (unit == 'i')
        cout << length << "in == " << cm_per_inch*length << "cm\n";
    else if (unit == 'c')
        cout << length << "cm == " << length/cm_per_inch << "in\n";
    else
        cout << "Sorry, I don'tknow a unit called " << unit << "\n";



    return 0;
}