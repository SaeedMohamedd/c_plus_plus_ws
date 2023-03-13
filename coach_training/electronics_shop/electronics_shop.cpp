#include<iostream>
#include<vector>
using namespace std ;
#include <iomanip>
int main()
{

//input to process    
long b;
cin>>b;
int n,m;
cin>>n>>m;

vector<int> arr_usb(n);
for (auto& num:arr_usb)
{
cin>>num;
}
vector<int> arr_driver(m);
for (auto& num:arr_driver)
{
cin>>num;
}
int max_sum=0;
for (int i =0;i<n;i++){
    for(int j=0;j<m;j++)
    {
        if(arr_usb[i]+arr_driver[j]<= b && arr_usb[i]+arr_driver[j]> max_sum)
        {
            max_sum=arr_usb[i]+arr_driver[j];
        }
    }
}
if (max_sum==0)
cout<< -1;
else 
cout<< max_sum;

    return 0;
}

//(i+d)%n this equation for array left elements