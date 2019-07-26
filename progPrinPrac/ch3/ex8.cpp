//
// Created by Tyler Williams on 2019-07-19.
//
#include <iostream>

using namespace std;

int main()
{
    cout << "Enter an integer then hit 'enter' \n";
    int n;
    cin >> n;
    if (n%2 == 1){
        cout << n << " is an odd number.";
    } else {
        cout << n<< " is an even number.";
    }
    return 0;
}
