#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void findMajorityElementMoreThanHalfArray(int arr[], int n)
{
  unordered_map<int, int> elementsMap;
  for (int i = 0; i < n; i++)
    elementsMap[arr[i]]++;

  int flag = 0, maj_index;
  for (auto element : elementsMap)
  {
    if (element.second > n / 2)
    {
      flag = 1;
      maj_index = element.first;
      break;
    }
  }

  if (flag)
    cout << "Majority Elements with more than half of array size: " << arr[maj_index] << endl;
  else
    cout << "No Majority Elements found" << endl;
}

int main()
{
  int arr[] = {2, 2, 2, 2, 5, 5, 2, 3, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
  findMajorityElementMoreThanHalfArray(arr, n);

  return 0;
}