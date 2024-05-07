#include <iostream>
#include <algorithm>
using namespace std;

void houseRobber(int arr[], int n)
{
  int rob1 = 0, rob2 = 0, temp;

  for (int i = 0; i < n; i++)
  {
    temp = max(arr[i] + rob1, rob2);
    rob1 = rob2;
    rob2 = temp;
  }
  cout << "House robber amount: " << rob2 << endl;
}

int main()
{
  int arr[] = {1, 2, 3, 1};
  int n = sizeof(arr) / sizeof(arr[0]);
  houseRobber(arr, n);
  return 0;
}