#include <iostream>
using namespace std;

// Binary Search - Recursive method approach (only sorted array is applicable)
int findElementIndex(int arr[], int start, int end, int searchElement)
{
  if (start > end)
    return -1; // Element not found condition

  int mid = start + (end - start) / 2;
  if (arr[mid] == searchElement)
    return arr[mid];
  else if (searchElement < arr[mid])
    return findElementIndex(arr, start, mid - 1, searchElement);
  else
    return findElementIndex(arr, mid + 1, end, searchElement);
}

int main()
{
  int arr[7] = {2, 7, 9, 11, 15, 21, 27}, searchElement = 7;
  cout << "Element's index : " << findElementIndex(arr, 0, sizeof(arr) / sizeof(arr[0]), searchElement);
  return 0;
}