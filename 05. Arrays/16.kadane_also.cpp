#include <iostream>
using namespace std;

void maxsumArray(int *arr, int n)
{
    int maxsum = INT_MIN;
    int currsum = 0;

    for (int i = 0; i < n; i++)
    {
        currsum += arr[i];
        maxsum = max(maxsum, currsum);
        if (currsum < 0)
        {
            currsum = 0;
        }
    }
    cout << "Maximum subarray sum is: " << maxsum;
}

int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    maxsumArray(arr, n);
    return 0;
}