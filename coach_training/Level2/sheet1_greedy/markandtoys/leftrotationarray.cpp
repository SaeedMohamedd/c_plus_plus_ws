#include<bits/stdc++.h>

using namespace std;


int main()
{
//n is arr size and d number of left shifts
int n ,d;
cin >>n>>d;
vector<int> arr(n);
vector<int> temp;
for(int i=0;i<n;i++)
cin>>arr[i];

for(int i=d;i<n;i++)
{
temp.push_back(arr[i]);
//cout<<"arr[4]: "<<arr[i]<<" i: "<<i<<endl;
//cout<<temp[0];
}

for(int i=0;i<d;i++)
temp.push_back(arr[i]);


//for(int i=0;i<n;i++)
//cout<<arr[i]<<" ";

//cout<<endl;
for(int i=0;i<temp.size();i++)
cout<<temp[i]<<" ";

    return 0;
}