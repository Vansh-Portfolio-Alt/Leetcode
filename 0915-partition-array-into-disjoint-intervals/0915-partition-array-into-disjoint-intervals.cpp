class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n=nums.size();
        int l = nums[0];vector<int> suffixMin(n);
        suffixMin[n-1] = nums[n-1];
        for (int i = n-2; i >= 0; i--) {
        suffixMin[i] = min(nums[i], suffixMin[i+1]);
        }
        for (int i = 0; i < n - 1; i++) {
            l = max(l, nums[i]);
            if (l <= suffixMin[i+1])
                return i + 1;
        }
        return n-1;
    }
};