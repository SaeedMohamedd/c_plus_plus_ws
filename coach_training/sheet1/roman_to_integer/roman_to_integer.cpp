
#include<iostream>
#include<vector>
#include <bits/stdc++.h>

using namespace std ;


/*
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
*/
class Solution {
public:
    int romanToInt(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        int count =0;
        for (int i=0;i<s.size();i++)
        {
                if(s[i]=='I' && i+1 <=s.size() && s[i+1] == 'V'  ){count+=4;i++ ;continue;} 
                if(s[i]=='I' && i+1 <=s.size() && s[i+1] == 'X' ){count+=9;i++ ;continue;} 

                if(s[i]=='X' && i+1 <=s.size() && s[i+1] == 'L' ){count+=40;i++ ;continue;} 
                if(s[i]=='X' && i+1 <=s.size() && s[i+1] == 'C' ){count+=90;i++ ;continue;} 

                if(s[i]=='C' && i+1 <=s.size() && s[i+1] == 'D' ){count+=400;i++ ;continue;} 
                if(s[i]=='C' && i+1 <=s.size() && s[i+1] == 'M' ){count+=900;i++ ;continue;} 

                if(s[i]=='I')count ++;
                if(s[i]=='V')count +=5;
                if(s[i]=='X')count +=10;
                if(s[i]=='L')count +=50;
                if(s[i]=='C')count +=100;
                if(s[i]=='D')count +=500;
                if(s[i]=='M')count +=1000;
                //cout<<"count: "<<count<< " i: "<<i<<"s[i]: "<<s[i]<<endl;

        }
        return count;
        
    }
};
int main(){


Solution s;
string str ="MCMXCIV";
int sum=0;
sum=s.romanToInt(str);
cout<<"romanToInt: "<<sum<<endl;

    return 0;
}


/*
No need for sort sum all numbers and subtract the each value form the total 
for eg  0 + 1 + 2 + 3 + 4 + 5 +6 +7 +  +9 = 15 = 

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long total = (nums.size()*(nums.size() + 1))/2;
        long long sum = 0;
        for(int x : nums)
            sum += x;
        return total - sum;
    }
};


*/