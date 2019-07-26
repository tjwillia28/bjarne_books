//
// Created by Tyler Williams on 2019-07-22.
//

#include <iostream>

using namespace std;

int main(){

    // part 1
    cout << "\nLower Case Table:\n\n";
    for (int i = 97; i < 123; ++i ){
        cout << char(i) << "\t" << i << "\n";
    }

    // part 2
    cout << "\n\nUpper Case Table:\n\n";

    for (int i = 65; i < 91; ++i ){
        cout << char(i) << "\t" << i << "\n";
    }
}