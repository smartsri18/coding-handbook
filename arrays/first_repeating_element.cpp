#include <iostream>
#include <set>
using namespace std;

void getFirstRepeating(int arr[], int n)
{
  int res = -1;
  set<int> setA;

  for (int i = n - 1; i >= 0; i--)
  {
    if (setA.find(arr[i]) != setA.end())
      res = i;
    else
      setA.insert(arr[i]);
  }

  if (res != -1)
    cout << "The first repeating element is "
         << arr[res];
  else
    cout << "There are no repeating elements";
}

int main()
{
  int arr[] = {10, 5, 3, 4, 3, 5, 6};
  int n = sizeof(arr) / sizeof(arr[0]);
  getFirstRepeating(arr, n);

  return 0;
}
