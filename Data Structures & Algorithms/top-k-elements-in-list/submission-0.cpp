class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        int n = nums.size();
        for(int i=0;i<n;i++){
            map[nums[i]]++;
        }

        vector<vector<int>> buckets(n + 1);
        for(const auto& [num,freq]:map){
            buckets[freq].push_back(num);
        }

        vector<int> res;
        for(int i=n;i>=0;i--){
            for(int num : buckets[i]){
                res.push_back(num);
                if (res.size() == k) return res;
            }
        }
        return res;
    }
};
