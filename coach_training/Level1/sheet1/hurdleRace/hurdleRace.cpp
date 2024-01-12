#include<iostream>
#include<vector>
using namespace std ;
int main()
{

//input to process    
int n;
cin>>n;
int k;
cin>>k;
vector<int> arr(n);
for (auto& num:arr)
cin>>num;

int h=0;
// start algotithm coding
for (auto& num:arr)
{
if (num>h)
h=num;
}
if((h-k)>0)
cout << h-k;
else 
cout<<0;

    return 0;
}

//(i+d)%n this equation for array left elements