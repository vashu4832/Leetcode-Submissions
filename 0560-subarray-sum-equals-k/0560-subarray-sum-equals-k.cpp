class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        mp[0] = 1;  // Empty prefix sum

        int prefixSum = 0;
        int count = 0;

        for(int i = 0; i < nums.size(); i++) {
            prefixSum += nums[i];

            int remove = prefixSum - k;

            if(mp.find(remove) != mp.end()) {
                count += mp[remove];
            }

            mp[prefixSum]++;
        }

        return count;
    }
};