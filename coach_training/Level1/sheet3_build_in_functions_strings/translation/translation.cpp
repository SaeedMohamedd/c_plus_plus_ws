
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

/*
//4032948   Jul 7, 2013 6:21:47 AM	fuwutu	 41A - Translation	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    reverse(t.begin(), t.end());
    if (s == t)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}





*/