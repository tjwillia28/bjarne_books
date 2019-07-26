//
// Created by Tyler Williams on 2019-07-18.
//

#include <iostream>

using namespace std;

int main()
{
    int number_of_words = 0;
    string previous;
    string current;

    while(cin >> current){
        ++number_of_words; // ++counter is counter =counter +1
//        number_of_words++; this also increments but it does it early so the word number is off by one
        if (previous == current)
            cout << "word number " << number_of_words
                 << ", Repeated word: " <<current<<"\n";
        previous = current;
    }
    return 0;
}