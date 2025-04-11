class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n=capacity.size();
        vector<int> diff(n);
        for(int i=0;i<n;i++){
            int di=capacity[i]-rocks[i];
            diff[i]=di;
        }
        sort(diff.begin(),diff.end());
        int cnt=0;
        for(int i=0;i<n;i++){
            if(diff[i]==0) {
                cnt++;
            }
            else if(additionalRocks>=diff[i]){
                additionalRocks-=diff[i];
                cnt++;
            } else{
                break;
            }
        }
        return cnt;
    }
};