/**
 * CPEB1020 B - Short Substrings
 * @author Kamiya
 * @link https://vjudge.net/contest/589212#problem/B
 */

#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main(int argc, char const *argv[])
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
      if (i == 0 || i % 2)
      {
        cout << s[i];
      }
    }
    cout << endl;
  }

  return 0;
}