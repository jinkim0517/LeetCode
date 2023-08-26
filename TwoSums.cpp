class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            for (int x = 1; x < nums.size(); x++) {
                if (nums[x] + nums[i] == target && x != i) {
                    ans.push_back(x);
                    ans.push_back(i);
                    return ans;
                }
            }
        }
        return ans;
    }
};