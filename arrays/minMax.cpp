#include <iostream>
using namespace std;

int *minMax(int arr[], int start, int end)
{
    int min, max;
    if (start == end)
    {
        min = arr[start];
        max = arr[start];
    }
    else if (start + 1 == end)
    {
        if (arr[start] > arr[end])
        {
            max = arr[start];
            min = arr[end];
        }
        else
        {
            max = arr[end];
            min = arr[start];
        }
    }
    else
    {
        int mid = start + (end - start) / 2;
        int *leftMinMax = minMax(arr, start, mid);
        int *rightMinMax = minMax(arr, mid + 1, end);
        min = leftMinMax[0] < rightMinMax[0] ? leftMinMax[0] : rightMinMax[0];
        max = leftMinMax[1] > rightMinMax[1] ? leftMinMax[1] : rightMinMax[1];
    }
    int *result = new int[2];
    result[0] = min;
    result[1] = max;
    return result;
}

int main()
{
    cout << "Find min and max from an array" << endl;
    int arr[10] = {9, 10, 29, 45, 11, 5, 7, 50, 12, 19};
    int *result = minMax(arr, 0, sizeof(arr) / sizeof(arr[0]) - 1);
    cout << "min: " << result[0] << " max: " << result[1] <<endl;
    return 0;
}