//
// Created by Tyler Williams on 2019-07-25.
//

#include <iostream>

using namespace std;

int main(){
  double val1{};
  double val2{};
  char operation{};

  cout << "Let's do some calculations!\n"
          " Enter two real numbers and an operation( '-', '+', '/' or '*' ):\n";

  cin >> val1 >> val2 >> operation;
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