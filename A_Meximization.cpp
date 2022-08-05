#include <iostream>
#include <algorithm>
#include <vector>
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
  vector<int> v;
  for (int i = 0; i < n; i++)
   cin >> arr[i];
  sort(arr.begin(), arr.end());
  for (int i = 0; i < n; i++)
  {
   if (arr[i] == arr[i + 1])
    v.push_back(arr[i]);
   else
    cout << arr[i] << " ";
  }
  for (int i = 0; i < v.size(); i++)
   cout << v[i] << " ";
 }
 return 0;
}