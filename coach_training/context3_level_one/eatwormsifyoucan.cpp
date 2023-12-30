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


4
4
0 1 3 2
2
1 0
7
0 1 2 3 5 6 4
5
0 3 2 1 4


*/
int main()
{

int n; 
cin >>n; int inputarr[n]; int countinputarr[n];
for(int i =0; i<n;i++){
cin>>inputarr[i];
countinputarr[i]+=inputarr[i];
}
int t; cin>>t; int testarr[t];
for(int i=0;i<t;i++)
{
    cin>>testarr[i];
}
int j=0;
while(t--)
{
for(int i=0;i<n;i++)
{
   if(testarr[j]<countinputarr[i])
   {
    cout<<i<<endl;
    break;
   }
   


}
j++;
}

    return 0;
}
