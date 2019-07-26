//
// Created by Tyler Williams on 2019-07-16.
//
#include "main.hpp"

int main()
{
/*    char v[6]{}; //array of 6 characters
    char* q; // pointer to character
    char* p = &v[3]; // points to v's fourth element
    char x = *p; // *p is the object that p points to

    cout <<"V = "<<v<<", q = "<<q<<", p = "<<p<<", x =  "<<x<<endl; */
    print();
    increment();

    float x{};
    x = product(0.5, 10.01);
    std::cout<<"X = "<<x;
    return 0;
}

