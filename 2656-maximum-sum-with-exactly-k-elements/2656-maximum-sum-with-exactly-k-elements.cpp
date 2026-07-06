class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
      sort(nums.begin(),nums.end());
      int d=nums[nums.size()-1];
      return  d*k+(k*k-k)/2;
    }
};