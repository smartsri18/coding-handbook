#include <iostream>
using namespace std;

int findPeakElement(int arr[], int n)
{
  int low = 0, high = n - 1, mid;
  while (low <= high)
  {
    mid = low + (high - low) / 2;
    if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
      return arr[mid];
    else if (arr[mid - 1] > arr[mid])
      high = mid - 1;
    else
      low = mid + 1;
  }
  return 0;
}

int main()
{
  int arr[7] = {10, 20, 15, 2, 23, 90, 67};
  cout << "Peak element: " << findPeakElement(arr, sizeof(arr) / sizeof(arr[0])); // first peak element from the given array
  return 0;
}
