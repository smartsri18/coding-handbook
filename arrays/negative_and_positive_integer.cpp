#include <iostream>
using namespace std;

void display(int arr[], int n)
{
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
}

void rerrange(int arr[], int n)
{
  int j = 0, temp;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] < 0)
    {
      if (i != j)
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
      j++;
    }
  }
  display(arr, n);
}

void rerrangeWithTwoPointers(int arr[], int n)
{
  int start = 0, end = n - 1, temp;
  while (start <= end)
  {
    if (arr[start] < 0)
      start++;
    else if (arr[end] > 0)
      end--;
    else
    {
      temp = arr[start];
      arr[start] = arr[end];
      arr[end] = temp;
    }
  }
  display(arr, n);
}

int main()
{
  int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
  int n = sizeof(arr) / sizeof(arr[0]);
  rerrange(arr, n);
  rerrangeWithTwoPointers(arr, n);
  return 0;
}