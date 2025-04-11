class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        long long ans=0;
        long long sum=0;
        int n=costs.size();
        for(int i=0;i<n;i++){
            sum+=costs[i];
            if(sum<=coins) ans++;
        }
        return ans;
    }
};