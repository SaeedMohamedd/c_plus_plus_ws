#include<iostream>
#include<vector>
using namespace std ;
#include <iomanip>
int main()
{

//input to process    
int n;
cin>>n;
int l_sum=0;
int r_sum=0;
int val;
int arr[n][n];
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
cin>>arr[i][j];
if(i==j)
l_sum+=arr[i][j];
if((i+j)==n-1)
r_sum+=arr[i][j];
}
}
/*
for(int i=0;i<n;i++)
{
for(int j=n-1;j>=0;j--)
{
r_sum+=arr[i][j];


}
}
*/
//cout <<l_sum<<" "<<r_sum<<endl;
cout<<abs(l_sum-r_sum);
    return 0;
}

//(i+d)%n this equation for array left elements