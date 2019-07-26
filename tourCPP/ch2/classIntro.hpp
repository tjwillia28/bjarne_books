//
// Created by Tyler Williams on 2019-07-17.
//
/* The basic technique for handling varying amounts of information in C++ is to have
 * the class member be a fixed-size handle referring to a variable amount of
 * data 'elsewhere' (i.e. on the the free store allocated by new */

class Vector{
public:
    Vector(int s):elem{new double[s]}, sz{s}{}  //constructor method using member initializer list
    double& operator[](int i) {return elem[i];} // element access: subscripting
    int size() {return sz;}

private:
    double* elem; //pointer to the elements
    int sz;     //number of elements
};