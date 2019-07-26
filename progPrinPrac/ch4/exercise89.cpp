//
// Created by Tyler Williams on 2019-07-26.
//
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int sum(unsigned long long int threshold, vector<unsigned long long int> vec);

int main(){
  constexpr int n = 64;


  vector<unsigned long long int> payments{};
  payments.reserve(n);

  // Figure out how much each square is worth
  for(int i = 0; i<n+1; ++i){
    unsigned long long int temp = pow(2, i);
    payments.push_back(temp);

  }

// Check
  for(unsigned long long int j: payments){
    cout << j << " ";
  }
  unsigned long long int threshold1 = 1000;


  int num_squares1 = sum(threshold1, payments);
  cout << "Number of squares for 1000 grains == " << num_squares1 << "\n";
  unsigned long long int threshold2 = 1000000;

  int num_squares2 = sum(threshold2, payments);
  cout << "Number of squares for 1,000,000 grains == " << num_squares2 << "\n";
  unsigned long long int threshold3 = 1000000000;

  int num_squares3 = sum(threshold3, payments);
  cout << "Number of squares for 1,000,000,000 grains == " << num_squares3 << "\n";


  return 0;
}

int sum(unsigned long long int threshold, vector<unsigned long long int> vec)
{
    unsigned long long int sum{0};
    int square_number{1};
  for(unsigned long long int j: vec){
    sum += j;
    square_number +=1;
    if (sum > threshold)
      return square_number;
    else
      continue;
  }
}