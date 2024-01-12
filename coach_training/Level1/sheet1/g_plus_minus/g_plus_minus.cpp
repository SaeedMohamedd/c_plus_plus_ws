#include<iostream>
#include<vector>
using namespace std ;
#include <iomanip>
int main()
{

//input to process    
int n;
cin>>n;

vector<float> arr(n);
for (auto& num:arr)
cin>>num;
float g_plus=0;
float g_minus=0;
float g_zero=0;

// start algotithm coding
for(auto& num:arr)
{
if(num>0)
g_plus++;
else if(num<0)
g_minus++;
else
g_zero++;
}
cout<<setprecision(6)<<fixed<<(float)(g_plus/(float)n)<<"\n"<<(float)(g_minus/(float)n)<<"\n"<<(float)(g_zero/(float)n);
    return 0;
}

//(i+d)%n this equation for array left elements