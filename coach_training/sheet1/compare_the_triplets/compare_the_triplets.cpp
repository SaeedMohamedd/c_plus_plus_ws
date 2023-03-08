#include<iostream>
#include<vector>
using namespace std ;

int main()
{

//input to process    

vector<int> alice_arr(3);
for (auto& num:alice_arr)
cin>>num;

vector<int> bob_arr(3);
for (auto& num:bob_arr)
cin>>num;

int alice_score=0;
int bob_score=0;

// start algotithm coding
for(int i=0;i<3;i++)
{
if(alice_arr[i]>bob_arr[i])
alice_score++;
else if(alice_arr[i]<bob_arr[i])
bob_score++;
}
cout<<alice_score<<" "<<bob_score;
    return 0;
}

//(i+d)%n this equation for array left elements