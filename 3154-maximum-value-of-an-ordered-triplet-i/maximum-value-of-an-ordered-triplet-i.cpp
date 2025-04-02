class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        long long maxval=0;
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                   long long val = 1LL * (nums[i] - nums[j]) * nums[k];  // Ensure long long multiplication
                    if (val > 0) {  
                        maxval = max(maxval, val);
                }
            }
        }      
     }
        return maxval;
    }
};