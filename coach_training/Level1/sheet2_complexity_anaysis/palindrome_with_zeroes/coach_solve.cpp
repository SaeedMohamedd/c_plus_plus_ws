
#include<iostream>
using namespace std;





int main()
{
string n;
cin>>n;
while (n.back()=='0')
{
    n.pop_back();
}
bool res =true;
for(int l,r=n.size()-1;l<=r && res;l++,r--) res=n[l]==n[r];
if(res==true) cout<<"Yes\n";
else
cout<<"No\n";


    return 0;
}