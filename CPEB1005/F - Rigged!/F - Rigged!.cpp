// CPEB1005 - F - Rigged!
// Answer by Kamiya (WA2)
// Problem URL: https://vjudge.net/contest/585165#problem/F

#include <iostream>
#define looong long long
using namespace std;

int main()
{
  short t;
  cin >> t;

  while (t--)
  {
    short n;
    cin >> n;

    bool na = false;
    looong s0;
    unsigned short e0;
    cin >> s0 >> e0;

    looong sec = -2;

    for (short i = 0; i < (n - 1); i++)
    {
      looong s;
      unsigned short e;
      cin >> s >> e;

      if (s >= s0)
      {
        if (e >= e0)
        {
          na = true;
          break;
        }
      }

      if (s <= s0 && s > sec)
      {
        sec = s;
      }
    }

    if (sec < s0)
    {
      sec++;
    }

    cout << ((na) ? -1 : sec) << endl;
  }

  return 0;
}