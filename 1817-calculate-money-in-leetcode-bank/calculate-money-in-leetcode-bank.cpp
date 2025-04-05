class Solution {
public:
    int totalMoney(int n) {
        int total=0,current=1,day=0;
        for(int i=0;i<n;i++){
            total+=current+day;
            day++;
            if(day==7){
                day=0;
                current++;
            }
        }
        return total;
    }
};