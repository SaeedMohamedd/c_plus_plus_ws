
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
int flag=0;
string in ,out;
cin >>in>>out;
for(int i=0,j=in.size()-1;i<in.size();i++,j--)
{
if(in[i]==out[j])
flag++;

}
if (flag==in.size())
cout<<"YES";
else
cout<<"NO";

    return 0;
}

//(i+d)%n this equation for array left elements