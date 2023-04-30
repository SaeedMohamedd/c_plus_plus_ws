
#include<iostream>
#include<vector>
#include <bits/stdc++.h>

using namespace std ;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i;
        sort(nums.begin(),nums.end());
        for ( i=0;i<nums.size();i++){
            if(nums[i]!=i) return i;
        }
            return i;
    }
};
int main(){


Solution s;
vector<int> input_vector={9,6,4,2,3,5,7,0,1};
int sum=0;
sum=s.missingNumber(input_vector);
cout<<"missingNumber: "<<sum<<endl;

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