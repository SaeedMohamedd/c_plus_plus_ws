#include<iostream>
#include<vector>
using namespace std ;
#include <iomanip>
int main()
{

//input to process    
int n;
cin>>n;
int sum=0;
for (int i=1;i<=n;i++)
{
sum+=i;
}

cout<<sum;
    return 0;
}
