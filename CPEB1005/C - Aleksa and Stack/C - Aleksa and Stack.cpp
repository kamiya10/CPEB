// CPEB1005 - C - Aleksa and Stack
// Answer by Kamiya
// Problem URL: https://vjudge.net/contest/585165#problem/C

#include <iostream>

using namespace std;

int main()
{
  int t = 0, n = 0, k = 1;

  cin >> t;

  while (t--)
  {
    cin >> n;

    for (int i = 0; i < n; i++)
    {
      cout << k << " ";
      k += 2;
    }
  }

  return 0;
}