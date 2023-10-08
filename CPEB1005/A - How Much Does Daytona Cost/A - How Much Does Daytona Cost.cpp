// CPEB1005 - A - How Much Does Daytona Cost?
// Answer by Kamiya
// Problem URL: https://vjudge.net/contest/585165#problem/A

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
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    if (find(arr.begin(), arr.end(), k) != arr.end())
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