

/*


*/
#include<iostream>
#include<vector>
#include<string>
#include <algorithm>
#include <iostream>
#include <vector>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std ;

/*


3
5
1 2 3 4 5
3
1 2 2
4
1 1 1 1


*/
int main()
{

unordered_set<int> myset;
vector<int> myg{0};
int n=0;
int g;int count=0;
int a;
cin>>g;

    unordered_set<int>::iterator itr;

while(g--)
{
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>a;
    myset.insert(a);
}

}
//sort(myset.begin(),myset.end(),greater<int>());
for(auto& n:myset)
{
myg.push_back(n);
count+=1;
//cout<<n<<count<<myg[count]<<endl;
}
int temp=0;
for (int i=g;i<0;i--)
{
    cout<<g;
    temp=myg.at(i);
cout<<temp<<endl;
}

/*
sort(myg.begin(),myg.end());
count=0;
for(auto& n:myset)
{
    cout<<n<<endl;
    count+=1;
    if (count ==g) 
    break;
}
*/
//for (int i=0;i<g;i++)
//cout<<myg[i]<<endl;;
    return 0;
}