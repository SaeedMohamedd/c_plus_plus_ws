
#include<iostream>
#include<vector>
#include <bits/stdc++.h>

using namespace std ;


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
    }
};
int main(){


Solution s;
vector<string>str ={"flower","flow","flight"};
string sum=0;
sum=s.longestCommonPrefix(str);
cout<<"longestCommonPrefix: "<<sum<<endl;

    return 0;
}


/*
class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        for(int i = s.size() - 1; i >= 0; i--){
            int firstVal = 0;
            int secondVal = 0;
            if(s[i] == 'I'){
                firstVal = 1;
            }else if(s[i] == 'V'){
                firstVal = 5;
            }else if(s[i] == 'X'){
                firstVal = 10;
            }else if(s[i] == 'L'){
                firstVal = 50;
            }else if(s[i] == 'C'){
                firstVal = 100;
            }else if(s[i] == 'D'){
                firstVal = 500;
            }else if(s[i] == 'M'){
                firstVal = 1000;
            }
            if(i >= 1){
                if(s[i-1] == 'I'){
                secondVal = 1;
                }else if(s[i-1] == 'V'){
                    secondVal = 5;
                }else if(s[i-1] == 'X'){
                    secondVal = 10;
                }else if(s[i-1] == 'L'){
                    secondVal = 50;
                }else if(s[i-1] == 'C'){
                    secondVal = 100;
                }else if(s[i-1] == 'D'){
                    secondVal = 500;
                }else if(s[i-1] == 'M'){
                    secondVal = 1000;
                }
            }
            if(firstVal > secondVal){
                ans += (firstVal - secondVal);
                i--;
            }else{
                ans += firstVal;
            }
        }
        return ans;
    }
};


*/