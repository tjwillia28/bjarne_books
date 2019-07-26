//
// Created by Tyler Williams on 2019-07-18.
//
// Drill is to produce a form letter based on user input

#include <iostream>

using namespace std;

inline void simple_error(string s);

int main()
{
    // Part 1
    cout << "Enter the first name of the person you want to write to (followed by 'enter'):\n";
    string first_name;
    cin >> first_name;

    // Part 2
    cout << "Dear "
         << first_name
         << "\n\t How are you? I am fine. I miss you.  I'm praying your surgery goes well.";

    // Part 3
    cout << "\nEnter the first name of a friend (followed by 'enter'): \n";
    string friend_name;
    cin >> friend_name;
    cout << "Have you seen "
         << friend_name
         << " recently?";

    //Part 4
    char friend_sex = 0;
    cout << "\nEnter an m if your friend is male and an f if the friend is female (followed by 'enter'): \n";
    cin >> friend_sex;
    if (friend_sex=='m'){
        cout << "\nIf you see "
             << friend_name
             << " please ask him to call me.";
    } else if (friend_sex=='f'){
        cout << "\nIf you see "
             << friend_name
             << " please ask her to call me.";
    } else {
        cout << "Did not enter m or f...";
    }

    // Part 5
    cout << "\nHow old is the recipient of this letter? (followed by 'enter') \n";
    int age;
    cin >> age;
    cout << "I hear you just had a birthday and you are "
         << age
         << " years old.";
    if (age <= 0 || age >= 100)
        simple_error("\nyou're kidding!");

    // Part 6
    if (age <12) {
        cout << "\nNext year you will be "
             << (age + 1);
    } else if (age ==17) {
        cout << "\nNext year you will be able to vote.";
    } else if(age > 70) {
        cout << "\nI hope you are enjoying retirement.";
    }
    // Part 7
    cout << "\n\nYours sincerely,\n\nTy";

    return 0;
}

// error function to be used (only) until error() is introduced in Chapter 5:
inline void simple_error(string s)	// write ``error: s�� and exit program
{
    cerr << "\nerror: " << s << '\n';
    exit(1);
}