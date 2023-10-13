/**
 * CPEB1012 - F - Increasing and Decreasing
 * @author Kamiya
 * @link https://vjudge.net/contest/587230#problem/F
 */

#include <iostream>
#include <vector>

using namespace std;

void solve()
{
  int x, y, n;
  cin >> x >> y >> n;

  vector<int> a(n);
  a[0] = x;
  a[n - 1] = y;

  int diff = 1;

  for (int i = n - 2; i >= 1; i--)
  {
    if (a[i + 1] - diff > x && (a[i + 1] - diff) - x > diff)
    {
      a[i] = a[i + 1] - diff;
      diff++;
    }
    else
    {
      cout << -1 << endl;
      return;
    }
  }

  for (int i = 0; i < n; i++)
  {
    cout << a[i];

    if (i != n - 1)
      cout << " ";
  }

  cout << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}