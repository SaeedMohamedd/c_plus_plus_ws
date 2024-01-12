#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> &i ,pair <int ,int> &j)
{


return (i.second<j.second || (i.second==j.second and i.first <j.first )) ;
}

int main()
{
int n ;
cin >>n; int l ,s; int count=0;

vector<pair<int ,int>> inputarr;


for(int i=0;i<n;i++)
{
cin>>l>>s;
inputarr.push_back({l,s});
}


std::sort(inputarr.begin(),inputarr.end(),cmp);

//out the sorted array 
/*
for(int i=0;i<n;i++)
{
    cout<<inputarr[i].first <<" "<<inputarr[i].second<<endl;
}
*/
int last=-1;
for(int i=0;i<n;i++)
{
    if(inputarr[i].first>last)
    {
        last=inputarr[i].second;
        count++;
    }
}

cout<<count<<endl;
    return 0;
}