#include<iostream>
#include<vector>
using namespace std ;

void utopian_tree(int numberofcycles)
{
int h=1;
for(int i=0;i<=numberofcycles;i++)
{
    if(i==0)
    h=1;
    
    else if(i%2==0)
    h++;
    else if  (i%2==1)
    h*=2;
}
cout<<h<<endl;
}
int main()
{

//input to process    
int n;
cin>>n;
vector<int> arr(n);
for (auto& num:arr)
cin>>num;


// start algotithm coding
for(int i=0;i<arr.size();i++)
{
utopian_tree(arr[i]);
}
    return 0;
}

//(i+d)%n this equation for array left elements