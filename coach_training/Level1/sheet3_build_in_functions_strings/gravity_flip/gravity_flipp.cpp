/*
Sample 1
    Inputcopy 	Outputcopy

    4
    3 2 1 2

    	

    1 2 2 3 


Sample 2
    Inputcopy 	Outputcopy

    3
    2 3 8

    	

    2 3 8 



*/

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
cin >>n;
vector<int>myvector(n);
for(auto& num:myvector)
{
cin>>num;

}
sort(myvector.begin(), myvector.end(), greater<int>());
reverse(myvector.begin(),myvector.end());
for(auto& num:myvector)
{
cout<<num<<" ";

}
    return 0;
}

//(i+d)%n this equation for array left elements