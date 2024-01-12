/*
Given a time in

-hour AM/PM format, convert it to military (24-hour) time.

Note: - 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.
- 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.

Example

Return '12:01:00'.

Input (stdin)
07:05:45PM
Expected Output
19:05:45



Input (stdin)
12:05:45AM
Expected Output
00:05:45

Input (stdin)
07:05:45AM
Expected Output
07:05:45

*/


#include<iostream>
#include<vector>
#include<string>
using namespace std ;
#include <iomanip>
int main()
{

string input;string output;string s_h; int i_h;
cin>>input;
output=input.substr(0,8);
if(input=="12:00:00PM")
output="12:00:00";
if(input=="12:00:00AM")
output="00:00:00";

if(input[8]=='P')
{
    s_h=input.substr(0,2);
   // cout<<"input:"<<input<<endl;
    i_h=stoi(s_h);
    if(i_h!=12)
    i_h+=12;
    s_h=to_string(i_h);
    for(int i=0;i<8;i++){
        if(i==0||i==1){
            output[i]=s_h[i];
        }
        else{
            output[i]=input[i];
        }
       
    }
   // cout<<"i h: "<<i_h<<"output: "<<output<<endl;

}
else{
     s_h=input.substr(0,2);
   // cout<<"input:"<<input<<endl;
    i_h=stoi(s_h);
    if(i_h==12)
    {
    s_h="00";
    }

    for(int i=0;i<8;i++){
        if(i==0||i==1){
            output[i]=s_h[i];
        }
        else{
            output[i]=input[i];
        }
       
    }
}
cout<<output<<std::endl;
    return 0;
}

//(i+d)%n this equation for array left elements