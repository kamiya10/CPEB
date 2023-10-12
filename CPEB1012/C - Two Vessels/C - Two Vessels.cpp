/**
 * CPEB1012 - C - Two Vessels
 * @author Kamiya
 * @link https://vjudge.net/contest/587230#problem/C
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    double a, b, c;
    cin >> a >> b >> c;

    double d = abs(a - b) / 2;
    int cnt = 0;

    while (d > 0)
    {
      d -= c;
      cnt++;
    }

    cout << cnt << endl;
  }

  return 0;
}