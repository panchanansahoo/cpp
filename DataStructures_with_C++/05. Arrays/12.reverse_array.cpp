#include <iostream>
using namespace std;

int priArr(int *arr, int n)
{
    for(int i =0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// with space
// int main()
// {
    
//     int n;
//     cout << "Enter length of array:" ;
//     cin >> n;
    
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
    
//     int copyarr[n];
//     for(int i=0; i<n ; i++){
//         int j=n-i-1;
//         copyarr[i]=arr[j];
//     }
//     for(int i=0; i<n; i++){
//         arr[i]=copyarr[i];
//     }

//     priArr(arr,n);
    

//         return 0;
// } 

// without space
int main(){

    int n;
    cout << "Enter length of array:" ;
    cin >> n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int str=0, end= n-1;

    while(str < end){
        int temp = arr[str];
        arr[str] = arr[end];
        arr[end] =temp;
        str++;
        end--;
    }

    priArr(arr,n);
    return 0;
}