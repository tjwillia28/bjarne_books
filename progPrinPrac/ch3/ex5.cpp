//
// Created by Tyler Williams on 2019-07-19.
//


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Enter two doubles and then hit 'enter'\n";
    double val1;
    double val2;
    cin >> val1 >> val2;
    cout << "Double 1 == " << val1 << "\tDouble 2 == " << val2 << "\n";

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
         << "\nRatio == " << (val1/val2);


    return 0;
}

/* In the integer program i cast val1, val2 to floats for
* division so the results are the same o.w. division would
* cause information loss
*/
