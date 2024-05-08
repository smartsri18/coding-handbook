#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void getTwoElementsWithEqualSum(int arr[], int n, int target)
{
  unordered_map<int, int> sumMap = {};
  int diff;

  for (int i = 0; i < n; i++)
  {
    diff = target - arr[i];
    if (sumMap.find(diff) != sumMap.end())
    {
      cout << "Two Elements: " << arr[i] << " & " << sumMap[diff] << endl;
    }
    sumMap[arr[i]] = i;
  }
}

int main()
{
  int arr[] = {2, 1, 5, 3},
      sum = 4, n = sizeof(arr) / sizeof(arr[0]);
  getTwoElementsWithEqualSum(arr, n, sum);
  return 0;
}