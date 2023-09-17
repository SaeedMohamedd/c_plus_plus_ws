

/*


*/
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



2
1 2 3
1 3 2

Sample Output 0

Cat B
Mouse C


*/
int main()
{

int n; int cata,catb,mouse;
cin >>n;
while(n--)
{
cin>>cata >>  catb >> mouse;
if(abs(mouse-cata)<(abs(mouse-catb)))
cout<<"Cat A"<<endl;
else if(abs(mouse-cata)>(abs(mouse-catb)))
cout<<"Cat B"<<endl;
else
cout<<"Mouse C"<<endl;

}
    return 0;
}