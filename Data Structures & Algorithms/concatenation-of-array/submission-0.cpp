class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;

        while(ans.size()<2*n){
            int s = ans.size();
            ans.push_back(nums[s%n]);
        }
        return ans;
    }
};