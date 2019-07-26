//
// Created by Tyler Williams on 2019-07-19.
//

#include <iostream>

using namespace std;

int main()
{
    cout << "Enter some number of miles and then hit 'enter'\n";
    double miles;
    cin >> miles;
    cout << miles
         << " miles == "
         << (1.609*miles)
         << " kilometers";

    return 0;
}
