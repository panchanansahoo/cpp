#include <iostream>
using namespace std;
int main()
{
    int a = 32;
int *Ptr =&a;
char ch ='A';
char &cho = ch;

cho +=a;
*Ptr += ch;

cout << a << "," << ch << endl;
    return 0;
}
