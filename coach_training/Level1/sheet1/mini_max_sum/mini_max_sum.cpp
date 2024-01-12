#include<iostream>
#include<vector>
using namespace std ;
#include <iomanip>
int main()
{

//input to process    
long min_sum=0;
long max_sum=0;
long sum=0;
long min_val=INT32_MAX;
long max_val=INT32_MIN;
vector<long> arr(5);
for (auto& num:arr)
{
cin>>num;
sum+=num;
if(num>max_val)
max_val=num;
if(num<min_val)
min_val=num;

}
min_sum=sum-max_val;
max_sum=sum-min_val;



cout<<min_sum<<" "<<max_sum;
    return 0;
}

//(i+d)%n this equation for array left elements