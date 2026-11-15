class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expectedSum = 0;
        for(int i=0; i<=n; i++){
            expectedSum += i;
        }

        int originalSum = 0;
        for(int i=0; i<nums.size(); i++){
            originalSum += nums[i];
        }
        
        return expectedSum-originalSum;
    }
};