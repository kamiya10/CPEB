/**
 * CPEB1012 - E - Channel
 * @author Kamiya
 * @link https://vjudge.net/contest/587230#problem/E
 */

#include <iostream>
#include <string>

using namespace std;

void solve()
{
  int n, a, q;
  cin >> n >> a >> q;

  string s;
  cin >> s;

  if (n == a)
  {
    cout << "YES" << endl;
    return;
  }

  int p = a;

  for (char c : s)
  {
    if (c == '+')
    {
      p++;
    }
  }

  if (p < n)
  {
    cout << "NO" << endl;
    return;
  }

  int o = a;

  for (auto c : s)
  {
    if (c == '+')
    {
      o++;
    }
    else
    {
      o--;
    }

    if (o == n)
    {
      cout << "YES" << endl;
      return;
    }
  }

  cout << "MAYBE" << endl;
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