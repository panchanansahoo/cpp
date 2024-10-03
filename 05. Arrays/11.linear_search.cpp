#include <iostream>
using namespace std;
// int main()
// {

//     int n, num;
//     cout << "Enter length of array:" ;
//     cin >> n;
    
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     cout << "Enter which number you want to search: ";
//     cin >> num;
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]==num){
//             cout << i << endl;
//             break;
//         }
        
//     }
    
//     return 0;
// }

// using function
int linear(int *arr, int n, int key){
    for (int i=0; i<n; i++){
        if(arr[i]== key){
            return i;
        }
    }
    return -1;
}

int main(){

int arr[]={2,4,6,8,10,12,14,16};
int n = sizeof(arr)/sizeof(int);

cout << linear(arr, n , 10) << endl;

    return 0;
}