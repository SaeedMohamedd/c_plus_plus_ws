
#include<iostream>
#include<vector>
#include <bits/stdc++.h>

using namespace std ;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;int max_count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) count ++;
            else 
            count =0;

            if(count>max_count) max_count=count;
        }
        return max_count;
    }
};
int main(){


Solution s;
vector<int> input_vector={1,0,1,1,0,1};
int sum=0;
sum=s.findMaxConsecutiveOnes(input_vector);
cout<<"findMaxConsecutiveOnes: "<<sum<<endl;

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