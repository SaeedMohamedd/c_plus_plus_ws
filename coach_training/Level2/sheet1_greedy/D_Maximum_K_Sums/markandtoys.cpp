#include<bits/stdc++.h>

using namespace std;


int main()
{
int n ,k; int sum=0; 
cin >>n>>k;

int k_out=k;
vector<int> inputarr(n);
vector<int> outputarr(n);

for(int i=0;i<n;i++)
cin>>inputarr[i];
cout<<"finished get the input"<<endl;
std::sort(inputarr.begin(),inputarr.end(),greater<int>());

//out the sorted array 
for(int i=0;i<k_out;i++)
cout<<inputarr[i]<<" ";
cout<<endl;

int i=0;int j=0;
while(k--)
{
    i=j;
while(i<k)
{
sum+=inputarr[i];i++;
}
outputarr.push_back(sum);
j++;
sum=0;
}



for(int i=0;i<k_out;i++)
cout<<outputarr[i]<<" ";
cout<<endl;
    return 0;
}