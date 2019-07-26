//
// Created by Tyler Williams on 2019-07-26.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int str_to_int(string sval);

int main(){
  string sval1{};
  string sval2{};
  char operation{};

  cout << "Let's do some calculations!\n"
          " Enter two real numbers and an operation( '-', '+', '/' or '*' ):\n";

  cin >> sval1 >> sval2 >> operation;
  int val1 = str_to_int(sval1);
  int val2 = str_to_int(sval2);

  double evaluated{};
  switch(operation)
  {
    case '-': evaluated = val1 - val2; break;
    case '+': evaluated = val1+val2; break;
    case '*': evaluated = val1*val2; break;
    case '/': evaluated = val1/val2; break;
    default: cout << "Try input again...\n";
  }
  cout << val1 << " " << val2 << " " << operation
       << "\t== " << evaluated;

  return 0;
}

int str_to_int(string sval)
{
  int ival{};
  vector<string> strings_vec = {"zero", "one", "two",
                                "three", "four", "five",
                                "six","seven", "eight", "nine"};

  vector<int> ints_vec = {0,1,2,3,4,5,6,7,8,9};

  for (int j = 0; j < strings_vec.size(); j++){
    if (strings_vec[j] == sval) {
      cout << strings_vec[j] << " == " << ints_vec[j] << "\n";
      ival = ints_vec[j];
      return ival;
    } else {
      continue;
    }

  }
}
