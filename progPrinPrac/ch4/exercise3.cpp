//
// Created by Tyler Williams on 2019-07-25.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

double calculate_mean(const vector<double>& vec);
double calculate_sum(const vector<double>& vec);
double calculate_min(vector<double> vec);
double calculate_max(vector<double> vec);

int main(){

  double mean{0};
  double min{};
  double max{};
  vector<double> distances;

  for(double temp; cin >>temp;)
  {
    distances.push_back(temp);
    mean = calculate_mean(distances);
    cout << "Mean == " << mean << endl;

    min = calculate_min(distances);
    cout << "Min == " << min <<endl;

    max = calculate_max(distances);
    cout << "Max= " << max << endl;
  }

  return 0;
}
double calculate_mean(const vector<double>& vec)
{
    int n_elements = vec.size();

    double sum = calculate_sum(vec);
    double mean = sum/n_elements;
    return mean;
}

double calculate_sum(const vector<double>& vec)
{
  double sum{0};

  for(double i: vec){
    sum += i;
  }
  return sum;
}

double calculate_min(vector<double> vec)
{
  sort(vec.begin(), vec.end());

  return vec[0];
}

double calculate_max(vector<double> vec)
{
  sort(vec.begin(), vec.end());

  return vec[vec.size() - 1];
}