#include<iostream>
#include<vector>
#include<string>
#include <algorithm>
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std ;
int main()
{

int n;
cin >>n; int flag=0;
vector<int>myvector(n);
for(auto& num:myvector)
{
cin>>num;
if(num ==1)
flag=1;
}
if (flag ==1)
cout<<-1;
else
cout<<1;
    return 0;
}
