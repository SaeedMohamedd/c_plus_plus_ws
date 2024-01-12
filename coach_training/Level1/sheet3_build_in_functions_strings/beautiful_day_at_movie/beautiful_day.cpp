/*


Sample Input

20 23 6

Sample Output

2

Explanation

Lily may go to the movies on days
, , , and

. We perform the following calculations to determine which days are beautiful:

    Day 

is beautiful because the following evaluates to a whole number:
Day
is not beautiful because the following doesn't evaluate to a whole number:
Day
is beautiful because the following evaluates to a whole number:
Day
is not beautiful because the following doesn't evaluate to a whole number:

Only two days,
and , in this interval are beautiful. Thus, we print as our answer.

*/


#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std ;
#include <iomanip>
int main()
{

int r1,r2,k,rem,cp_r1,rev=0; int count=0;
cin >>r1>>r2>>k;
int t=r2-r1;

for(int i =0;i<= t;i++,r1++,rev=0 )
{

    cp_r1=r1;
    while(cp_r1!=0)
    {
        rem=cp_r1%10;
        rev=rev*10+rem;
        cp_r1=cp_r1/10;
    }
    if(abs(r1-rev)%k==0)
    count++;
//cout<<"r1:"<<r1<<" rev:"<<rev<<" "<<abs(r1-rev)<<endl;
}

//cout<<r1<<endl;
//cout<<rev<<endl;
cout<<count<<endl;
    return 0;
}

//(i+d)%n this equation for array left elements