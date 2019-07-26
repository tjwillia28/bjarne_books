//
// Created by Tyler Williams on 2019-07-16.
//



#include <iostream>
using namespace std;

// Declarations
void print();
void increment();
float product(const float& f1, const float& f2);

// Definitions
void print() {
    int v[] = {1, 2, 3, 4, 5};

    for (auto x:v)
    // read for every element of v, from the first to the last, place a copy in x and print i
    {
        cout << x << " ";
    }
    cout << endl;
}

void increment()
{
    int v[] = {1, 2, 3, 4, 5};

    for (auto& x: v)
    /* When we use a reference, &, in a declaration, we ensure that we are incrementing
    * the original value of each element in v and not a copy */
    {
        ++x;
        cout << x << " ";
    }
    cout << endl;
}

float product(const float& f1, const float& f2)
/* We use const references for arguments when we do not want to modify
 an argument or endure the cost of copying                          */
{
    return f1*f2;
}