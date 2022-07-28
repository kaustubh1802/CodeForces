#include <iostream>
using namespace std;

int main()
{
 int t, n;
 cin >> t;
 while (t--)
 {
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
   cin >> arr[i];
  int last = arr[n - 1];
  int b[n] = {0};
  for (int i = n - 1; i >= 0; i--)
  {
   if (last != 0 || arr[i] != 0)
   {
    b[i] = 1;
    last = max(last, arr[i]);
    last--;
   }
  }
  for (int i = 0; i < n; i++)
   cout << b[i] << " ";
  cout << endl;
 }
 return 0;
}