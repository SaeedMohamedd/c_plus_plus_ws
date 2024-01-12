

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
cin >>n;
while(n--)
{
int sizeit=0;
cin>>sizeit;
int arr[sizeit];
for(int i =0; i<sizeit;i++){
cin>>arr[i];
}
for(int i =0; i<sizeit;i++){
if(arr[i]!= i)
{
cout<<i<<endl;
break;
}
}

}
    return 0;
}
