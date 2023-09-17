

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

4500

	

4747


*/
int main()
{

long long n; bool done= false; bool is_not_4_7 =false; int n_kill=0;
int count4=0,count7=0,digitscount=0; int cn; int not4_7=0;
cin >>n;
cn=n;
while(cn>0)
{
    int rem;
    rem=cn%10;
    if(rem==4) count4++;
    if(rem==7) count7++;
    if(rem!=7 && rem!=4)
    {
        not4_7++;
        is_not_4_7=true;

    }
  
    cn/=10;
    digitscount++;
    if(is_not_4_7 ==true){
        n_kill=digitscount;
        is_not_4_7=false;
        //cout<<"n kill"<<n_kill<<"digitcout"<<digitscount<<"not 4 7 :"<<not4_7<< cn<<endl;
    }
    
}
for(int i =0; i<n_kill;i++)
{
if(count4==count7&&n_kill==0){
//cout<<n<<endl;
done =true;
break;
}
    n=n/10;
}
//cout<<n<<endl;
    //cout<<n<<endl;
    //cout<<"not 4 7 "<<not4_7<<endl;
    //not4_7--;
   // cout<<"not 4 7 "<<not4_7<<endl;
    int diff=(abs((count4+count7)-not4_7));
    int base=(count4-count7);
    if(count7==0)
    base=0;
    //cout<<"nkill:"<<n_kill<<" n:"<<n<<" base:"<<base<<endl;
while(n_kill--){
    if(base==0 || base%2==0)
    {
 n=n*10+7;
    }
    else{
 n=n*10+4;
    }
done =true;
base++;
}





 if(count4>count7 && done == false){
    int diff=count4-count7;
    while(diff--){
        n=n*10+7;
    }
}
else if(count7>count4 && done == false){
    int diff=count7-count4;
    while(diff--){
        n=n*10+4;
    }
}
cout<<n;

    return 0;
}