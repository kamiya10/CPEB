// CPEB1005 - B - Short Sort
// Answer by Kamiya
// Problem URL: https://vjudge.net/contest/585165#problem/B

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    char input[3];
    for (int i = 0; i < 3; i++)
    {
      cin >> input[i];
    }

    char sorted[3];
    for (int i = 0; i < 3; i++)
    {
      sorted[i] = input[i];
    }
    sort(sorted, sorted + 3);

    int ct = 0;

    for (int i = 0; i < 3; i++)
    {
      if (input[i] != sorted[i])
      {
        ct++;
      }
    }

    if (ct == 0 || ct == 2)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }

  return 0;
}
