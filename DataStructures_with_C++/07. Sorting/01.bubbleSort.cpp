#include <iostream>
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void bubble(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool isSwap = false;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwap=true;
            }
        }
        if(!isSwap){
            // already sorted 
            return;
        }
    }
    print(arr,n);
}
int main()
{
    int arr[] = {5,4,1,3,2};
    

    bubble(arr, 5);

    return 0;
}