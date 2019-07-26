//
// Created by Tyler Williams on 2019-07-25.
//

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

void ask_user(int divider);
bool user_response(int guess, int divider);
bool game_over(const int& guess, const int& divider, bool over);
int update_guess(bool last_guess_lower, int last_guess, int min, int max);
int setExtreme(int val);

int main()
{
  int max = 100;
  int min = 1;
  int partition = (min + max)/2;
  bool done = false;
  bool lower{};

  int user_guess{};

  cout << "Guess a number between 1 and 100 " << endl;
  cin >> user_guess;


  int n_guesses = 0;
  while(!done)
  {
    ask_user(partition);
    lower = user_response(user_guess, partition);
    if (lower)
      max = setExtreme(partition);
    else
      min = setExtreme(partition);
    partition = update_guess(lower,partition , min, max);
    done = game_over(user_guess, partition, done);


    cout << "Update: current guess == " << partition  << "\t" << "Guess Number == " << n_guesses << "\n";
    cout << "User guess == " << user_guess << "\n";
    cout << "min ==" << min << "\tMax== " << max << "\n\n";
    if(done)
      break;
    ++n_guesses;
  }

  return 0;
}


void ask_user(int divider)
{
  cout << "Is your number less than " << divider << "?\n";
}
 bool user_response(int guess, int divider)
{
  if (guess < divider)
    return true;
  else
    return false;
}
int update_guess(bool last_guess_lower, int last_guess, int min, int max)
{
  int new_guess{};
  if (last_guess_lower) {
    new_guess = ((last_guess - min) / 2) + min;
  }else {
    new_guess = max - ((max - last_guess) / 2);
  }
  return new_guess;
}

int setExtreme(int val)
{
  return val;
}

bool game_over(const int& guess, const int& divider, bool over)
{
  if(guess == divider) {
    over = true;
    return over;
  } else {
    over = false;
    return over;
  }
}
