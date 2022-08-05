#include <iostream>
using namespace std;

int main()
{
 int t;
 cin >> t;
 while (t--)
 {
  int n, k;
  int a, b, c;
  cin >> n >> k;
  if (n % 2 != 0)
  {
   a = (n - 1) / 2;
   b = (n - 1) / 2;
   c = 1;
  }
  else
  {
   n = n / 2;
   if (n % 2 == 0)
   {
    a = n;
    b = n / 2;
    c = n / 2;
   }
   else
   {
    a = (n)-1;
    b = (n)-1;
    c = 2;
   }
  }
  cout << a << " " << b << " " << c << endl;
 }
 return 0;
}