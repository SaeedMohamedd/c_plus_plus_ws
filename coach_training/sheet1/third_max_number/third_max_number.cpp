
#include<iostream>
#include<vector>
using namespace std ;
//best 91%
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        long long max1=INT32_MIN -1LL;
        long long  max2=INT32_MIN -1LL;
        long long max3=INT32_MIN -1LL;
        for(int i=0;i<nums.size();i++){

            if(nums[i]>max3 && nums[i]>max2  && nums[i]>max1 ){
                max3=max2;
                max2=max1;
                max1=nums[i];
             continue;
            } 
            if(nums[i] ==max1) continue;
            if(nums[i]>max3 && nums[i]>max2 ){          
                max3=max2;
                max2=nums[i];
                continue;

            } 
            if(nums[i] ==max2) continue;
            if(nums[i]>max3 ){
                max3=nums[i];
             
            } 

        }
        if(max3==INT32_MIN -1LL) return max1;
        //if (nums.size()>=3  && (nums[0]==nums[1] || nums[0]==nums[2] || nums[1]==nums[2] ) ) return max1; // to solve {1,1,2} case and [2,2,2,1]
       // if(nums.size()>=3 && nums[0]!=nums[1]!=nums[2] && max1!=max2!=max3) return max3; // to solve {1,2,INT32_MIN}
        if(nums.size()>=3  && max1!=max2!=max3) return max3; // to solve {1,2,INT32_MIN}
        if (nums.size()<3) return max1;
        else
        return max3;
    }
};
int main(){


Solution s;
vector<int> input_vector={1,1,2};
int sum=0;
sum=s.thirdMax(input_vector);
cout<<"thirdMax: "<<sum<<endl;

    return 0;
}



/*


    class Solution {
    public:
        int thirdMax(vector<int>& nums) {
          long long max1=INT_MIN-1LL;
          long long max2=INT_MIN-1LL;
          long long max3=INT_MIN-1LL;
          for(auto& num : nums){
            if(num>max1){
              max3=max2;
              max2=max1;
              max1=num;
            }
            else if(num>max2 && num!=max1){
              max3=max2;
              max2=num;
            }
            else if(num>max3 && num!=max2 && num!=max1){
              max3=num;
            }
          }
          if(max3==INT_MIN-1LL)
            return max1;
          return max3;
        }
    };


*/


/*


class Solution {
public:
    int thirdMax(vector<int>& nums) {
      sort(nums.begin(), nums.end(), greater<int>());
      int order=1;
      int last=nums[0];
      for(int i=1; i<nums.size(); i++){
        if(nums[i]!=last){
          last=nums[i];
          order++;
        }
        if(order==3)
          break;
      }
      if(order==3)
        return last;
      return nums[0];
    }
};

*/