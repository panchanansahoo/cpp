#include <iostream>
using namespace std;

void binTodec(int num)
{
    int n = num;
    int dec = 0;
    int pow = 1;

    while (n > 0)
    {
        int lastDig = n % 10;
        dec += lastDig * pow;
        pow = pow * 2;

        n = n / 10;
    }
    cout << dec << endl;
}

int main()
{
    binTodec(10001);
    return 0;
}