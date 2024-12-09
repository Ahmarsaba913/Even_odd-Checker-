#include <iostream>

using namespace std;

bool isEven(int number);
bool isOdd(int number);

int main()
{

  int number = 0;

  
  cout << "Enter Integer: ";
  cin >> number;

 
  if (isOdd(number))
    cout << number << " is odd." << endl;
  else
    cout << number << " is even." << endl;


  return 0;
}


bool isEven(int number)
{

  return (number % 2 == 0);
}


bool isOdd(int number)
{
  
  return (number % 2 == 1);
}