class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
           int n = nums.size();
        long long sum = accumulate(nums.begin(), nums.end(), 0LL);
        long long sumSq = 0;
        for (int val : nums) sumSq += 1LL * val * val;

        long long expectedSum = 1LL * n * (n + 1) / 2;
        long long expectedSq = 1LL * n * (n + 1) * (2 * n + 1) / 6;

        long long delta = expectedSum - sum;         
        long long delta2 = expectedSq - sumSq;        

        long long x = (delta + delta2 / delta) / 2;     
        long long y = x - delta;                        

        return {(int)y, (int)x};
    }
};