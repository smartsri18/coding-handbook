#include <iostream>
using namespace std;

void findMissingNumber(int arr[], int n)
{
  int total = (n + 1) * (n + 2) / 2;
  for (int i = 0; i < n; i++)
  {
    total -= arr[i];
  }
  cout << "Missing number: " << total;
}

int main()
{
  int arr[] = {1, 2, 3, 4, 6};
  int n = sizeof(arr) / sizeof(arr[0]);
  findMissingNumber(arr, n);
  return 0;
}