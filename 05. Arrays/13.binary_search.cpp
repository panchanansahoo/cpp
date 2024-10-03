#include <iostream>
using namespace std;

int priArr(int *arr, int n, int key)
{
    int str = 0, end = n - 1;

    while (str <= end)
    {
        int mid = (str + end) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            str = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
       
    }
    
    return -1;
}

int main()
{

    int n, key;
    cout << "Enter length of array:";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter key thats you want to search: ";
    cin >> key;

    cout<< priArr(arr, n, key)<< endl;
    
    return 0;
}
