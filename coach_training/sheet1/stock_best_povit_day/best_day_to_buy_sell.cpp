
#include<iostream>
#include<vector>
using namespace std ;

class Solution {
public:
    int max_profit=0;
    int maxProfit(vector<int>& prices) {
      ios_base::sync_with_stdio(false);
              cin.tie(nullptr);
         max_profit=0;
        bool iscansell =false;
        int sell_value=INT32_MAX;;
        for(int i=0;i<=prices.size()-1;i++)
        {
  
           
            if ( (i!=prices.size()-1) &&   prices[i] < prices[i+1]  &&(prices[i]<sell_value)){
       
                sell_value=prices[i];
                iscansell=true;
            }
       
               
                if((i<=prices.size()-1) && prices[i]>sell_value && max_profit<(prices[i]-sell_value)&& iscansell==true)
        
               {
                max_profit=prices[i]-sell_value;
               // cout<<"         set max provit: "<< max_profit<<endl;
               }
    
            
          //  cout<<max_profit<<"  sellvalue: "<<sell_value<<"  i: "<<i<<  "  prices[i]-sell_value: "<<prices[i]<<sell_value<<endl;
        } 
      //  cout <<"endloop"<<endl;
        
        return max_profit;
    }
};

int main(){


Solution s;
vector<int> input_vector={7,1,5,3,6,4};
int sum=0;
sum=s.maxProfit(input_vector);
cout<<"sum: "<<sum<<endl;

    return 0;
}



/*
other best solutions

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int price = INT_MAX,ans = 0;
        for(int i=0;i<prices.size();i++){
            price = min(price,prices[i]);
            ans = max(ans,prices[i] - price);
        }
        return ans;
    }
};





*/