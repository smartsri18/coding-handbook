#include <iostream>
using namespace std;

int main()
{
  int arr[7] = {0, 1, 0, 0, 1, 1, 1};
  int start = 0, n = sizeof(arr) / sizeof(arr[0]), end = n - 1;
  while (start < end)
  {
    while (arr[start] == 0 && start < end)
      start++;
    while (arr[end] == 1 && start < end)
      end--;

    if (start < end)
    {
      arr[start] = 0;
      arr[end] = 1;
      start++;
      end--;
    }
  }

  for (int i = 0; i < n; i++)
    cout << arr[i];
}