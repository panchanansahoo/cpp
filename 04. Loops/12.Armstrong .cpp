//Qs : Check for Armstrong Number
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout <<"Enter a number thats you want to check armstrong number or not:" ;
    cin >> n;
    int num = n;
int cubeSum = 0;
while(num > 0) {
int lastDig = num % 10;
cubeSum += lastDig * lastDig * lastDig;
num /= 10;
}
if(n == cubeSum) {
cout << n <<  "  This is a Armstrong number\n";
} else {
cout << n << "NOT an Armstrong number\n";
}
 return 0;
}
