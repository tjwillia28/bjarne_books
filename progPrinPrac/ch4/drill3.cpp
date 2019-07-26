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
        if(temp1 < temp2)
            cout << "The smaller value is: " << temp1 << " and the larger value is: " << temp2 << "\nEnter 2 more...\n";
        else if (temp2 < temp1)
            cout << "The smaller value is: " << temp2 << " and the larger value is: " << temp1 << "\nEnter 2 more...\n";
        else
            cout << "Both numbers are equal: " << temp2 << " == " << temp1 << "\nEnter 2 more...\n";
    }

    cout << "You did not enter two integers! program ending... " << "\n";
    return 0;
}