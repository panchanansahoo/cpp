#include <iostream>
using namespace std;

void decTobin (int num){
    int n = num;
    int bin =0;
    int pow =1;

    while(n>0){
        int rimand = n% 2;
        bin += rimand * pow;
        pow = pow*10;
        n=n/2;
    }
    cout << bin << endl;
}
int main()
{
    decTobin(5);
    return 0;
}