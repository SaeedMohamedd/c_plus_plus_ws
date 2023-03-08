#include<iostream>
#include<vector>
using namespace std ;
int main()
{

//input to process    
int n;
cin>>n;
int d;
cin>>d;
vector<int> arr(n);
for (auto& num:arr)
cin>>num;

vector<int> outarr(n);
// start algotithm coding
for(int i=0;i<arr.size();i++)
{
cout<<arr[(i+d)%n];
cout<<" ";
}
    return 0;
}

//(i+d)%n this equation for array left elements