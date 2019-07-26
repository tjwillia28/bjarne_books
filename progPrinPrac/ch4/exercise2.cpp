//
// Created by Tyler Williams on 2019-07-25.
//

// read some temperatures into a vector
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

double calculateMedian(vector<double> vec);

int main(){

  double median{0.0};
  vector<double> temps;


  for(double temp; cin >>temp;) {
    temps.push_back(temp);
    median = calculateMedian(temps);
    cout << "Median == " << median;

  }


  return 0;
}


double calculateMedian(vector<double> vec)
/* - Should be able to just pass in the vector and no other data
 *
 * - 2 cases:
 *   even - temps.size() => median == avg of two elements in middle of sorted set
 *   odd - temps.size() => median == middle element in sorted set
 */
{

  double median1{};
  double median2{};
  const int n_elements  = vec.size();

  sort(vec.begin(), vec.end());

  if (n_elements % 2 == 0){

    median1 = vec[floor(n_elements/2)-1];
    median2 = vec[floor(n_elements/2)];

    return (median1 + median2)/2.0;

  } else {

    median1 = vec[floor(n_elements/2)];

    return median1;
  }



}