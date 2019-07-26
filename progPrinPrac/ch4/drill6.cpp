//
// Created by Tyler Williams on 2019-07-24.
//

#include <iostream>

using namespace std;

int main(){
    double min{100};
    double max{-100};
    double val{};

    cout << "Enter a real number: \n";
    while(cin >> val){
        cout << "\nYou entered the value: " << val;
        if(val < min) {
            min = val;
        cout << "\nThat's the smallest value so far";
        }else if (val > max){
            max = val;
            cout << "\nThat's the largest value so far!";

    }
        cout << "\nEnter another number...\n ";
    }

    return 0;
}