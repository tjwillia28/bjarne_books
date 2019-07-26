  //
// Created by Tyler Williams on 2019-07-23.
//

#include <iostream>

using namespace std;

int swa(int n);

int main(){
    constexpr int n = 10;

    cout << "n == " << n << "\t=>\tn^2 == " << swa(n) << "\n";

    return 0;
}

int swa(int n) {
    int sum=0;
    for (int i = 0; i < n; ++i) {
        sum += n;
//        cout << i << "\t" << sum << "\n";
    }
    return sum;
}