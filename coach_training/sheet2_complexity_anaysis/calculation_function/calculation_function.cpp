#include<iostream>
#include<vector>
using namespace std ;
#include <iomanip>
#include <cmath>
int main()
{

//input to process    
long long  n;
cin>>n;
long long sum=0;
/*
for(int i=0;i<=n;i++){

    if(i %2==0){
        sum+=i;
    }else
    sum-=i;
}
*/
    if(n %2==0){
        sum=n/2;
    }else{
      sum=n/2 -n;
    }
cout <<sum;
    return 0;
}
