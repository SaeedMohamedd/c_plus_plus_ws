#include<iostream>
#include<vector>
using namespace std ;
#include <iomanip>
int main()
{

//input to process    
int n;
cin>>n;
string s;
cin>>s;
int out=0;
for (int i=0;i<n-1;i++)
{
if(s[i]==s[i+1])
out++;

}

cout<<out;
    return 0;
}
