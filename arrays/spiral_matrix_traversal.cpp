#include <iostream>
using namespace std;

int main()
{
  int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
  int spiral_matrix[4][4];
  int dir = 0,
      T = 0,
      B = sizeof(arr) / sizeof(arr[0]) - 1,
      L = 0,
      R = sizeof(arr[0]) / sizeof(arr[0][0]) - 1;

  while (T <= B && L <= R)
  {
    if (dir == 0)
    {
      for (int i = L; i <= R; i++)
        cout << arr[T][i] << " ";
      T++;
      cout << endl;
    }
    else if (dir == 1)
    {
      for (int i = T; i <= B; i++)
        cout << arr[i][R] << " ";
      R--;
      cout << endl;
    }
    else if (dir == 2)
    {
      for (int i = R; i >= L; i--)
        cout << arr[B][i] << " ";
      B--;
      cout << endl;
    }
    else if (dir == 3)
    {
      for (int i = B; i >= T; i--)
        cout << arr[i][L] << " ";
      L++;
      cout << endl;
    }
    dir = (dir + 1) % 4;
  }
}