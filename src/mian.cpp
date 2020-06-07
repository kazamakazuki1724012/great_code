#include <iostream>

using namespace std;
int main()
{
  for (int i = 1; i <= 1000; i++)
  {
    if ((i % 15) == 0)
      cout << "FizzBuzz,\b";
    else if ((i % 3) == 0)
      cout << "Fizz,\b";
    else if ((i % 5) == 0)
      cout << "Buzz,\b";
    else
      cout << i << ",\b";
  }
  return 0;
}
