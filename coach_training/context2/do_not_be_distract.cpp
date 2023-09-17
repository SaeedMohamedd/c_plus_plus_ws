#include<iostream>
#include<vector>
using namespace std ;
#include <iomanip>


/*
5
3
ABA
11
DDBBCCCBBEZ
7
FFGZZZY
1
Z
2
AB

*/
int main()
{

//input to process    
int n;
cin>>n;
string s;
bool sup=false;
while(n--){
cin>>s;
for(int i=0;i<s.length();i++)
{
    if(s.length()==1)
    {
        sup=false;
        break;
    }
    for(int j=0;j<s.length();j++){
    if(s[i]<=s[j])
    {
        sup=false;
    }
    else{
        sup=true;
        break;
    }  
    }

}

if (sup==true){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

sup=false;
s="";
}
return 0;
}