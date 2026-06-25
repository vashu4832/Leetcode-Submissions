class Solution {
public:
    int search(vector<int>& nums, int target) {

        if(nums.empty()) return -1;

        int start = 0;
        int end = nums.size()-1;

        while(start <= end){
            int mid = (start+end) / 2;
            if(target == nums[mid]){
                return mid;
            } else if(target > nums[mid]){
                start = mid+1;
            } else {
                end = mid - 1;
            }
        }
        return -1;
    }
};