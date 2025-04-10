class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int>seen;
        int n=nums.size();
        for(int i=n-1;i>=0;i--){
            if(seen.count(nums[i])){
                return ceil((i+1)/3.0);
            }
            seen.insert(nums[i]);
        }
        return 0;
    }
};