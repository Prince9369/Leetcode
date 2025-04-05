class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int>mp;
        for(int num:nums){
            mp[num]++;
        }
        for(auto&[num,count]:mp){
            if(count>0){
                for(int i=1;i<k;i++){
                    if(mp[num+i]<count) return false;
                    mp[num+i]-=count;
                }
            }
        }
        return true;
    }
};