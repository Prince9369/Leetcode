class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        
int n = nums.size();
        if (n < 3) return 0;

        vector<int> maxLeft(n, 0);
        vector<int> maxRight(n, 0);

        maxLeft[0] = nums[0];
        for (int i = 1; i < n; i++) {
            maxLeft[i] = max(maxLeft[i - 1], nums[i]);
        }

        maxRight[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            maxRight[i] = max(maxRight[i + 1], nums[i]);
        }

        long long maxValue = 0;
        for (int j = 1; j < n - 1; j++) {
            int leftMax = maxLeft[j - 1];
            int rightMax = maxRight[j + 1];

            if (leftMax > nums[j] && rightMax > 0) {
                maxValue = max(maxValue, (long long)(leftMax - nums[j]) * rightMax);
            }
        }

        return maxValue;
    }
};