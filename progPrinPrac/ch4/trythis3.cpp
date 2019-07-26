//
// Created by Tyler Williams on 2019-07-22.
//
#include <iostream>

using namespace std;

int main(){

    int i = 0;
    char letter = 'a';
    while (i< 26)
    {
        cout << letter << "\t" << int(letter) << "\n";
        ++i;
        letter+= 1;
    }

    return 0;
}