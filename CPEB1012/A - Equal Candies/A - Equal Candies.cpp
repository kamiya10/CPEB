/**
 * CPEB1012 - A - Equal Candies
 * @author Kamiya
 * @link https://vjudge.net/contest/587230#problem/A
 */

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
    vector<unsigned> arr(n);

    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    unsigned min = *min_element(arr.begin(), arr.end());
    unsigned count = 0;

    for (int i = 0; i < n; i++)
    {
      count += arr[i] - min;
    }

    cout << count << endl;
  }

  return 0;
}