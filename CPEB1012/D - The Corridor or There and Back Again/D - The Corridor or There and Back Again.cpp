/**
 * CPEB1012 - D - The Corridor or There and Back Again
 * @author Kamiya
 * @link https://vjudge.net/contest/587230#problem/D
 */

#include <iostream>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, a = INT_MAX;
    cin >> n;

    while (n--)
    {
      int d, s;
      cin >> d >> s;
      a = min(a, d + (s - 1) / 2);
    }

    cout << a << endl;
  }

  return 0;
}