//
// Created by Tyler Williams on 2019-07-18.
//

#include <iostream>

using namespace std;

//int main()
//{
//    cout << "Enter first and age\n";
//    string first = "";
//    int age = 0;
//    cin >> first >> age;
//    cout << "Hello, "<<first<< "! You're  " << age << " years old.\n";
//    return 0;
//}

int main()
{
    cout << "Enter first and age\n";
    string first = "";
    double age = 0;
    cin >> first >> age;
    age *= 12;
    cout << "Hello, "<<first<< "! You're  " << age << " months old.\n";
    return 0;
}