class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n=hand.size();
        map<int,int>mp;
        for(int num:hand){
            mp[num]++;
        }
        for(auto&[num,count]:mp){
            if(count>0){
                for(int i=1;i<groupSize;i++){
                    if(mp[num+i]<count) return false;
                    mp[num+i]-=count;
                }
            }
        }
        return true;
    }
};