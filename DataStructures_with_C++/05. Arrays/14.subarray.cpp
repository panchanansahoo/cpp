#include <iostream>
using namespace std;

void subArray(int *arr, int n)
{
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            for (int i = start; i <= end; i++)
            {
                cout << arr[i];
            }
            cout << ", ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter length of array:";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    subArray(arr, n);
    return 0;
}