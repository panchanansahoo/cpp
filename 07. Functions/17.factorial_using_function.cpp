#include <iostream>
using namespace std;

// void getData(){
//     int n;
//     cout << "Enter a number:";
//     cin >> n;
// }
int factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact = fact *i;
    }
    cout << n <<  " Factorial is: " << fact << endl;
    return fact;
}

int main()
{
    // getData();
    factorial(5);
 return 0;
}