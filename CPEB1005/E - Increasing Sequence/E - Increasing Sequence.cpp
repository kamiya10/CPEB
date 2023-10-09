// CPEB1005 - E - Increasing Sequence
// Answer by Kamiya
// Problem URL: https://vjudge.net/contest/585165#problem/E

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int t = 0;
  cin >> t;

  while (t--)
  {
    int n = 0, a = 0;
    cin >> n;

    vector<int> arrA(n);
    vector<int> arrB(n);

    for (int i = 0; i < n; i++)
    {
      cin >> arrA[i];
    }

    arrB[0] = 1;
    if (arrB[0] == arrA[0])
    {
      arrB[0] = 2;
    }

    for (int i = 1; i < n + 1; i++)
    {
      arrB[i] = arrB[i - 1] + 1;

      if (arrB[i] == arrA[i])
      {
        arrB[i]++;
      }

      a = arrB[n - 1];
    }

    cout << a << endl;
  }

  return 0;
}