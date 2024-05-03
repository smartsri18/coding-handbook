#include <iostream>
using namespace std;

void display(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void reverseArray(int arr[], int n)
{
  int start = 0, end = n - 1, temp;
  while (start < end)
  {
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
  display(arr, n);
}

int main()
{
  int arr[] = {1, 2, 5, 6, 8, 9, 10};
  int n = sizeof(arr) / sizeof(arr[0]);
  reverseArray(arr, n);
  return 0;
}