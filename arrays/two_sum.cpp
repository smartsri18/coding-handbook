#include <iostream>
using namespace std;

void getTwoElementsWithEqualSum(int arr[], int n, int sum)
{
  int start = 0, end = n - 1, currentSum = 0;
  while (start < end)
  {
    currentSum = arr[start] + arr[end];
    if (currentSum == sum)
    {
      cout << "Two Elements: " << arr[start] << " & " << arr[end] << endl;
      return;
    }
    else if (currentSum < sum)
      start++;
    else
      end--;
  }
  cout << "No Elements are found with equal sum value" << endl;
}

int main()
{
  int arr[] = {2, 20, 7, 11, 10, 15},
      sum = 9, n = sizeof(arr) / sizeof(arr[0]);
  getTwoElementsWithEqualSum(arr, n, sum);
  return 0;
}