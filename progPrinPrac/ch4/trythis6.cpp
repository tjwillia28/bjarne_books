//
// Created by Tyler Williams on 2019-07-24.
//
#include <iostream>
#include <vector>

using namespace std;


int main()
{
    string disliked1 = "Broccoli";
    string disliked2 = "Lettuce";
    string disliked3 = "Cabbage";
    vector<string> words;

    for(string temp; cin>> temp;) {
        if(temp == disliked1 || temp == disliked2 || temp == disliked3)
            words.emplace_back("BLEEP");
        else
            words.push_back(temp);

        //View vector
        cout << "Words == ";
        for(string i: words){
            cout << i << " ";
        }
        cout << "\n";

        cout << "Number of words == " << words.size() << "\n";
    }
    return 0;
}

