/**
 * CPEB1012 - B - Compare T-Shirt Sizes
 * @author Kamiya
 * @link https://vjudge.net/contest/587230#problem/B
 */

#include <iostream>

using namespace std;

int getSize()
{
  int x = 0;

  while (true)
  {
    char i;
    cin >> i;

    switch (i)
    {
    case 'X':
      x++;
      break;

    case 'S':
      return 49 - x;

    case 'M':
      return 50;
      break;

    case 'L':
      return 51 + x;

    default:
      break;
    }
  }
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a = getSize();
    int b = getSize();

    if (a > b)
      cout << ">" << endl;
    else if (a == b)
      cout << "=" << endl;
    else if (a < b)
      cout << "<" << endl;
  }

  return 0;
}