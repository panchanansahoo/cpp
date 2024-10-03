#include <iostream>
using namespace std;

bool primenum(int n)
{
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
        
    }
    return true;
}

void allprime(int n)
{
    for (int i = 2; i <= n; i++)
        if (primenum(i))
        {
            cout << i << " ";
        }
    cout << endl;
}

int main()
{
    allprime(10);

    return 0;
}