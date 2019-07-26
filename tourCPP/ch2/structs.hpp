//
// Created by Tyler Williams on 2019-07-17.
//

/* There is no fundamental difference between a struct and a class; a struct is simply a class
 * with members public by default.  For ex., you can define constructors and other member
 * functions for a struct */

#include <iostream>

using namespace std;

struct Vector{
    int sz;
    double* elem;
};

void vector_init(Vector& v, int s);
double read_and_sum(int s);
void f(Vector v, Vector& rv, Vector* pv);

void vector_init(Vector& v, int s)
/* By passing our data structure in by non-const reference we allow the function
 * to modify the data structure passed to it. */
{
    v.elem = new double[s];
    /* new operator allocates memory from the free store (aka heap) and
    will live there until it is destroyed via the delete operator */

    v.sz = s;
}

double read_and_sum(int s)
{
    Vector v;
    vector_init(v, s);

    for(int i=0; i!=s; ++i)
        cin>>v.elem[i];

    double sum = 0;
    for(int i=0; i!=s; ++i)
        sum += v.elem[i];
    return sum;
}

void f(Vector v, Vector& rv, Vector* pv)
/* We access struct members through name and through reference using dot-notation.
 * We use -> to access struct members through a pointer */
{
    int i1 = v.sz;
    int i2 = rv.sz;
    int i3 = pv -> sz;
}