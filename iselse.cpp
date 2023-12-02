#include <iostream>
using namespace std;

int main()
{
  int score;
  cout << "Enter your score" << endl;
  cin >> score;

  if (score >= 60)
  {
    cout << "Congratulations! You passed." << endl;
  }
  else
  {
    cout << "Ohh! You failed." << endl;
  }

  return 0;
}