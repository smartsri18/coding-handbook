#include <iostream>
using namespace std;

void display(int *arr, int size)
{
  for (int row = 0; row < size; row++)
  {
    for (int col = 0; col < size; col++)
    {
      cout << *((arr + row * size) + col) << " ";
    }
    cout << endl;
  }
}

int main()
{
  int n;
  cin >> n;

  int size = 2 * n - 1, start = 0, end = size - 1, arr[size][size];

  while (n != 0)
  {
    for (int row = start; row <= end; row++)
    {
      for (int col = start; col <= end; col++)
      {
        if (row == start || row == end || col == start || col == end)
          arr[row][col] = n;
      }
    }
    start++;
    end--;
    n--;
  }

  display(*arr, size);
}