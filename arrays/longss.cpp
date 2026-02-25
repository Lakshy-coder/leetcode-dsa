#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> arr(256, 0);
        int left=0;
        int maxlen=0;
        for(int rt=0; rt<s.size(); rt++){
            if(arr[s[rt]]>0){
                while(arr[s[rt]]>0){
                    arr[s[left]]--;
                    left++;
                }
            }
            arr[s[rt]]++;
            maxlen = max(maxlen, rt-left+1);  
        }
        return maxlen;
    }
};
int main(){
    Solution s;
    string str = "abcabcbb";
    int res = s.lengthOfLongestSubstring(str);
    cout << res << endl;
    return 0;
}