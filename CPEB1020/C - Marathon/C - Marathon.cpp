/**
 * CPEB1020 C - Marathon
 * @author Kamiya
 * @link https://vjudge.net/contest/589212#problem/C
 */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int t;
  cin >> t;

  while (t--)
  {
    int a, b, c, d, count = 0;
    cin >> a >> b >> c >> d;

    if (b > a)
      count++;
    if (c > a)
      count++;
    if (d > a)
      count++;

    cout << count << endl;
  }

  return 0;
}
