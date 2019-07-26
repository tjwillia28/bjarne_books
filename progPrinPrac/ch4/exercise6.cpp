//
// Created by Tyler Williams on 2019-07-25.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  vector<string> strings_vec = {"zero", "one", "two",
                                "three", "four", "five",
                                "six","seven", "eight", "nine"};

  vector<int> ints_vec = {0,1,2,3,4,5,6,7,8,9};

  // int -> str
  for (int i : ints_vec)
     cout << i << " == " << strings_vec[i] << "\n";

  // str -> int
  for (int j = 0; j < strings_vec.size(); j++){
    cout <<strings_vec[j] << " == " << ints_vec[j] << "\n";
  }
  return 0;
}