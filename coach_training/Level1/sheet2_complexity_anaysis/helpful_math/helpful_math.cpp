#include<iostream>
#include<vector>
using namespace std ;
#include <iomanip>
int main()
{

//input to process    

string s;
cin>>s;
string out;
int count_1=0;
int count_2=0;
int count_3=0;
for (int i=0;i<s.size();i++)
{
//cout<<s[i]<<endl;
if(s[i]=='1')count_1++;
if(s[i]=='2')count_2++;
if(s[i]=='3')count_3++;
}
for (int i=0;i<count_1;i++)
{
out+='1';
if(i+1==count_1 && count_2==0) continue;
out+='+';
}
for (int i=0;i<count_2;i++)
{
out+='2';
if(i+1==count_2 && count_3==0) continue;
out+='+';
}
for (int i=0;i<count_3;i++)
{
out+='3';
if(i+1==count_3) continue;
out+='+';
}
cout<<out;
    return 0;
}
