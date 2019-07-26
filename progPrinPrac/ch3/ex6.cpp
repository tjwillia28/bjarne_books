//
// Created by Tyler Williams on 2019-07-19.
//

#include <iostream>

using namespace std;

int main()
{
    cout << "Enter 3 integers then hit 'enter'\n";
    int val1;
    int val2;
    int val3;
    cin >> val1 >> val2 >> val3;
//    cout << "\n" << val1 <<"\t"<< val2 <<"\t"<< val3;

    /*sort s.t. output is min, mid, max
     and equal values are listed next to eachother */
    if (val1 < val2){
        if (val2 < val3){
            cout << val1 << ", " << val2<< ", "<< val3<< "\n";
        } else if (val2 == val3){
            cout << val1<< ", "<< val2<< ", "<< val3<< "\n";
        } else {
            cout << val1<< ", "<< val3<< ", "<< val2<< "\n";
        }
    } else if (val1 > val2){
        if (val1 < val3){
            cout << val2<< ", "<< val1<< ", "<< val3<< "\n";
        } else if (val1 == val3){
            cout << val2<< ", "<< val3<< ", "<< val1<< "\n";
        } else{
            cout << val2<< ", "<< val3<< ", "<< val1<< "\n";
        }
    } else if(val3 < val2){
        if (val2 < val1 ){
            cout << val3<< ", "<< val2<< ", "<< val1<< "\n";
       } else {
            cout << val3<< ", "<< val1<< ", "<< val2<< "\n";
        }
    } else if (val1 == val2) {
        if (val1 < val3) {
            cout << val1 << ", " << val2 << ", " << val3 << "\n";

        }else{
            cout << val3<< ", "<< val1<< ", "<< val2<< "\n";
        }
    }

    return 0;
}
