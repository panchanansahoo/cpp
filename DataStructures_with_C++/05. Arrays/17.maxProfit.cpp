#include <iostream>
using namespace std;

void maxprofit(int *price, int n){
    int bestBuy [100000];
    bestBuy[0]=INT_MAX;
    for(int i=1; i<n; i++){
        bestBuy[i] = min(bestBuy[i-1] , price[i-1]);

    }
    int maxProfit =0;
    for(int i=0; i< n; i++){
        int currprofit= price[i] - bestBuy[i];
        maxProfit= max(maxProfit, currprofit);
    }
    cout << "Max Profit is: "<< maxProfit << endl;
}
int main()
{
    int price[]={7,1,5,3,6,4};
    int n= sizeof(price)/sizeof(int);

    maxprofit(price,n);
 return 0;
}