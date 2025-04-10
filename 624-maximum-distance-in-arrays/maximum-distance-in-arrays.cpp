class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int n=arrays.size();
        int maxi=INT_MIN;
        int minval=arrays[0][0];
        int maxval=arrays[0].back();
        for(int i=1;i<n;i++){
            int currmax=arrays[i].back();
            int currmin=arrays[i][0];

            maxi=max(maxi,abs(currmax-minval));
            maxi=max(maxi,abs(maxval-currmin));

            minval=min(minval,currmin);
            maxval=max(maxval,currmax);
  
        }
        return maxi;
    }
};