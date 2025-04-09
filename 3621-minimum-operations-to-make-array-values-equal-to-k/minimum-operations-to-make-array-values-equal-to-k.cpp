class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        for(int num:nums){
            if(num<k) return -1;
        }
        unordered_set<int> st;
        for(int num:nums){
            if(num>k) st.insert(num);
        }
        return st.size();
    }
};