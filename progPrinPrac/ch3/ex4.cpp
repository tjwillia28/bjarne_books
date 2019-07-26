//
// Created by Tyler Williams on 2019-07-19.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Enter two integers and then hit 'enter'\n";
    int val1;
    int val2;
    cin >> val1 >> val2;
    cout << "Int 1 == " << val1 << "\tInt 2 == " << val2 << "\n";

    if (val1 < val2) {
        cout << val1 << " < " << val2;
    } else if (val1 > val2) {
        cout << val1 << " > " << val2;
    } else {
        cout << val1 << " == " << val2;
    }
    cout << "\nProduct == " << (val1*val2)
         << "\nSum == " << (val1+val2)
         << "\nDifference == " << abs((val1-val2))
         << "\nRatio == " << (float(val1)/float(val2));


    return 0;
}