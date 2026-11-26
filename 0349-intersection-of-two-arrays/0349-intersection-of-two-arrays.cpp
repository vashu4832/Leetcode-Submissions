class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        vector<int> visit(nums2.size(), 0);
        for(int i=0; i<nums1.size(); i++){
            for(int j=0; j<nums2.size(); j++){
                if(nums1[i] == nums2[j] && visit[j] == 0){
                    if(find(ans.begin(), ans.end(), nums1[i]) == ans.end()){
                        ans.push_back(nums1[i]);
                    }
                    visit[j] = 1;
                    break;
                }
            }
        }
        return ans;
    }
};