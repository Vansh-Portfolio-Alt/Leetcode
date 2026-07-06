class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int l = nums[0];vector<int> suffixMin(nums.size());
        suffixMin[nums.size()-1] = nums[nums.size()-1];
        for (int i = nums.size()-2; i >= 0; i--) {
        suffixMin[i] = min(nums[i], suffixMin[i+1]);
        }
        for (int i = 0; i < nums.size() - 1; i++) {
            l = max(l, nums[i]);
            if (l <= suffixMin[i+1])
                return i + 1;
        }
        return nums.size()-1;
    }
};