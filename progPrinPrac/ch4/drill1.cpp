//
// Created by Tyler Williams on 2019-07-24.
//

#include <iostream>

using namespace std;

int main(){
    int temp1 = 0;
    int temp2 = 0;

    cout << "Enter 2 integers\n";
    while(cin >>  temp1 >> temp2){

        cout << "You entered integers: " << temp1 << "\t" << temp2 << "\n" << "Enter 2 more...\n";
    }
    cout << "You did not enter two integers! program ending... " << "\n";
    return 0;
}

