class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        vector<int> boxcount(100,0);
        for(int i=lowLimit;i<=highLimit;i++){
            int sum=0,num=i;
            while(num>0){
                sum+=num%10;
                num/=10;
            }
            boxcount[sum]++;
        }
        return *max_element(boxcount.begin(),boxcount.end());
    }
};