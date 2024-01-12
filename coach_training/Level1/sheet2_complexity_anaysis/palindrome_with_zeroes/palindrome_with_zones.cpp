#include<iostream>
#include<vector>
#include <algorithm>
using namespace std ;
#include <iomanip>
int main()
{

//input to process    
int n;int n2;
string s1,s2;
cin>> n; int count=0;
int out;
string yes="yes";
string no="No";
//cout<<"n%10: "<<n%10 <<"    n/10 :"<<n/10;
while(n%10==0){
    count++;
    n/=10;
}
s1=string(n);
reverse(n.begin(), n.end());

if(count>0 && n==n2) cout<<"Yes";
else cout<<"No";
return 0;
}
