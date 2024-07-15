class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long ans = -1e18, sum = -1e18;
        for(auto &x : nums) {
            sum = max((long long) x,sum+x);
            ans = max(ans, sum);
        }
        return ans;
    }
};