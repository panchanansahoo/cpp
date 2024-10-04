#include <iostream>
using namespace std;

void maxsubArray(int *arr, int n)
{
    int maxarr = INT_MIN;

    for (int start = 0; start < n; start++)
    {
        int sumarr = 0;
        for (int end = start; end < n; end++)
        {
            sumarr += arr[end];
            // for (int i = start; i <= end; i++)
            // {
            //     sumarr += arr[i];
            // }
            cout << sumarr << ", ";
            maxarr = max(maxarr, sumarr);
        }
        cout << endl;
    }
    cout << "maximam subarr sum is: " << maxarr;
}

int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    maxsubArray(arr, n);
    return 0;
}