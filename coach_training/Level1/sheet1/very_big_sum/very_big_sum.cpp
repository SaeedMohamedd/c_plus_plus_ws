#include<iostream>
#include<vector>
using namespace std ;
#include <iomanip>
int main()
{

//input to process    
int n;
cin>>n;
long long big_sum=0;
vector<long long> arr(n);
for (auto& num:arr)
{
cin>>num;
big_sum+=num;
}

cout<<big_sum;
    return 0;
}

//(i+d)%n this equation for array left elements