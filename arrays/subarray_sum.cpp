#include <iostream>
using namespace std;

void findSubArrayWithSum(int arr[], int n, int sum)
{
  int currentSum;
  for (int i = 0; i < n; i++)
  {
    currentSum = arr[i];
    if (currentSum == sum)
    {
      cout << "Subarray with sum index: " << i << endl;
      return;
    }
    else
    {
      for (int j = i + 1; j < n; j++)
      {
        currentSum += arr[j];
        if (currentSum == sum)
        {
          cout << "Subarray with sum found at index: " << i << " to " << j;
          return;
        }
      }
    }
  }
  cout << "No subarray with sum" << endl;
  return;
}

int main()
{
  int arr[8] = {15, 2, 4, 8, 9, 5, 10, 23}, sum = 23;
  findSubArrayWithSum(arr, sizeof(arr) / sizeof(arr[0]), sum);
  return 0;
}