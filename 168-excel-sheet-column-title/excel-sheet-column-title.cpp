class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res;
        int n=columnNumber;
        while(n){
            n--;//0 based
            res=char('A'+n%26)+res;
            n/=26;
        }
        return res;
    }
};