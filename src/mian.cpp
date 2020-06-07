#include <iostream>

using namespace std;

int main()
{
  for (int i = 0; i <= 1000; i++)
  {
    if ((i % 15) == 0)
      cout << "FizzBuzz" << flush;
    else if ((i % 3) == 0)
      cout << "Fizz" << flush;
    else if ((i % 5) == 0)
      cout << "Buzz" << flush;
    else
      cout << i << flush;
  }
  return 0;
}
