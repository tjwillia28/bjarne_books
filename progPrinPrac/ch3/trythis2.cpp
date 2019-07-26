//
// Created by Tyler Williams on 2019-07-18.
//

#include <iostream>
#include <cmath>

using namespace std;

//int main()
//{
//    cout << "Please enter a floating-point value: ";
//    double n;
//    cin >> n;
//    cout << "n == " << n
//         << "\nn+1 == " << n+1
//         << "\nthree times n == " << 3*n
//         << "\ntwice n == " << n+n
//         << "\nn squared == "<< n*n
//         << "\nhalf of n == " << n/2
//         << "\nsquare root of n == " << sqrt(n)
//         << "\nn^(1/2) == " << pow(n,.5);
//
//    return 0;
//}

int main()
{
    cout << "Please enter an integer: ";
    int n;
    cin >> n;
    cout << "n == " << n
         << "\nn+1 == " << n+1
         << "\nthree times n == " << 3*n
         << "\ntwice n == " << n+n
         << "\nn squared == "<< n*n
         << "\nhalf of n == " << double(n)/2
         << "\nsquare root of n == " << sqrt(n)
         << "\nn^(1/2) == " << pow(n,.5)
         << "\n"<< n << "modulo 2 == "<< n%3 ;

    return 0;
}
