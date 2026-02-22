#include<iostream>
#include<vector>
#include<climits>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int x=INT_MAX;
        int mp=0;
        for(int i=0; i<prices.size(); i++){
           if(prices[i]<x){
             x=prices[i];
           }
           else{
            int profit=prices[i]-x;
            if(profit>mp){
                mp=profit;    
            }
           }
        }
        return(mp);
    }
};
int main(){
    Solution s;
    vector<int> prices={7,1,5,3,6,4};
    int res=s.maxProfit(prices);
    cout<<res<<endl;
    return 0;
}