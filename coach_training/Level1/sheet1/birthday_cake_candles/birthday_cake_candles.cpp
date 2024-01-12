#include<iostream>
#include<vector>
using namespace std ;
#include <iomanip>
int main()
{

//input to process    
long n;long tallest_Candles=0;
cin>>n; long freq=1;
vector<long> arr_candles(n);
for (auto& num:arr_candles)
{
cin>>num;
if (num>tallest_Candles)
{
    freq=1;
    tallest_Candles=num;
}
else if(num==tallest_Candles){
freq++;
}
}

cout<<freq;
    return 0;
}

//(i+d)%n this equation for array left elements