#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Dutch National Flag Problem
// - index 0 to l-1 -> contains 0
// - index l to r -> contains 1
// - index r+1 to n -> contains 2

void display(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}

void segegrateNumbersInOrder(int arr[], int n)
{
  int start = 0, end = n - 1;
  for (int i = 0; i < n && i <= end;)
  {
    if (arr[i] == 0)
    {
      swap(arr[i], arr[start]);
      start++;
      i++;
    }
    else if (arr[i] == 2)
    {
      swap(arr[i], arr[end]);
      end--;
    }
    else
    {
      i++;
    }
  }
  display(arr, n);
}

int main()
{
  int arr[] = {0, 1, 2, 0, 1, 2};
  int n = sizeof(arr) / sizeof(arr[0]);
  segegrateNumbersInOrder(arr, n);
  return 0;
}