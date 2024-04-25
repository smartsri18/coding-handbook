#include <iostream>
using namespace std;

void findUnionAmongArrays(int arr1[], int arr2[], int n, int m)
{
  int i = 0, j = 0;
  cout << "Union Elements: ";
  while (i < n && j < m)
  {
    if (arr1[i] < arr2[j])
      cout << arr1[i++] << " ";
    else if (arr2[j] < arr1[i])
      cout << arr2[j++] << " ";
    else
    {
      cout << arr2[j] << " ";
      i++;
      j++;
    }
  }

  while (i < n)
  {
    cout << arr1[i] << " ";
    i++;
  }
  while (j < m)
  {
    cout << arr2[j] << " ";
    j++;
  }
  cout << endl;
}

void findIntersectionAmongArrays(int arr1[], int arr2[], int n, int m)
{
  int i = 0, j = 0;
  cout << "Intersection Elements: ";
  while (i < n && j < m)
  {
    if (arr1[i] < arr2[j])
      i++;
    else if (arr2[j] < arr1[i])
      j++;
    else
    {
      cout << arr1[i] << " ";
      i++;
      j++;
    }
  }
}

int main()
{
  int arr1[] = {1, 2, 4, 5, 6};
  int arr2[] = {2, 3, 5, 7};
  int m = sizeof(arr1) / sizeof(arr1[0]);
  int n = sizeof(arr2) / sizeof(arr2[0]);

  findUnionAmongArrays(arr1, arr2, n, m);
  findIntersectionAmongArrays(arr1, arr2, n, m);

  return 0;
}