#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        for(int i=0; i<nums.size(); i++){
            int complement = target - nums[i];
            if(m.count(complement)){
                return {m[complement], i};
            }
            m[nums[i]] = i;
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