#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void display(vector<int> nums)
{
  for (int i = 0; i < nums.size(); i++)
  {
    cout << nums[i] << " ";
  }
  cout << endl;
}

void reverseElements(vector<int> &nums, int start, int end)
{
  while (start < end)
  {
    int temp = nums[start];
    nums[start] = nums[end];
    nums[end] = temp;
    start++;
    end--;
  }
}

int main()
{
  vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
  int k = 3;

  k = k % nums.size();
  reverseElements(nums, 0, nums.size() - 1);
  reverseElements(nums, 0, k - 1);
  reverseElements(nums, k, nums.size() - 1);
  display(nums);
  return 0;
}