class Solution {
public:
    int splitNum(int num) {
        vector<int> split;
        while(num>0){
            split.push_back(num%10);
            num/=10;
        }
        sort(split.begin(),split.end());
        int sum1=0,sum2=0;
        for(int i=0;i<split.size();i++){
            if(i%2!=0){
                sum1=sum1*10+split[i];
            } else{
                sum2=sum2*10+split[i];
            }
        }
        return sum1+sum2;
    }
};