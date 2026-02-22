#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(target==nums[i]+nums[j]){
                    return{i,j};
                    // ans.push_back(i);
                    //ans.push_back(j);
                   // break;
                }
            }
        }
        return{};
    }
};
      
int main(){
    Solution s;
    vector<int> nums = {2, 7, 11, 15};
    vector<int> res = s.twoSum(nums, 9);
    if(!res.empty()) cout << res[0] << " " << res[1] << endl;
    return 0;    
}