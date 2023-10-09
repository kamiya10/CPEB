// CPEB1005 - D - Good Kid
// Answer by Kamiya
// Problem URL: https://vjudge.net/contest/585165#problem/D

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    arr[0]++;

    int r = 1;

    for (int i = 0; i < n; i++)
    {
      r *= arr[i];
    }

    cout << r << endl;
  }

  return 0;
}