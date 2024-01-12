#include<bits/stdc++.h>

using namespace std;


int main()
{
int n ,k;
cin >>n>>k;
vector<int> toys(n);
for(int i=0;i<n;i++)
cin>>toys[i];

std::sort(toys.begin(),toys.end());

int i=0;
while(k>toys[i])
{
    k-=toys[i];
    i++;

}
cout<<i<<endl;
    return 0;
}