//
// Created by Tyler Williams on 2019-07-24.
//
#include <iostream>
#include <cmath>

using namespace std;



int main(){
    double temp1 = 0;
    double temp2 = 0;
    double diff = 0;

    cout << "Enter 2 real numbers\n";
    while(cin >>  temp1 >> temp2){
        diff = abs(temp1 - temp2);
        if (diff > 1.0/100) {

            if (temp1 < temp2) {
                cout << "The larger value is: " << temp2 << " and the smaller value is: " << temp1
                     << "\nEnter 2 more...\n";
            } else {
                cout << "The larger value is: " << temp1 << " and the smaller value is: " << temp2
                     << "\nEnter 2 more...\n";
            }
        }else {
            if (temp1 < temp2) {
                cout << "The numbers are almost equal!"
                     << "\nThe larger value is: " << temp2 << " and the smaller value is: " << temp1
                     << "\nThey differ by only: " << diff
                     << "\nEnter 2 more...\n";
            }else if (temp2 < temp1) {
                cout << "The numbers are almost equal!"
                     << "\nThe larger value is: " << temp1 << " and the smaller value is: " << temp2
                     << "\nThey differ by only: " << diff
                     << "\nEnter 2 more...\n";
            } else
                cout << "Both numbers are equal: " << temp2 << " == " << temp1 << "\nEnter 2 more...\n";
        }

    }

    cout << "You did not enter two real numbers! program ending... " << "\n";
    return 0;
}

