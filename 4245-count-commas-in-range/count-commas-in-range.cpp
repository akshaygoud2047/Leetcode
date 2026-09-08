class Solution {
public:
    int countCommas(int n) {
        if(n<1000){
            return 0;
        }
        if(n>1000 && n<9999){
            return n-999;
        }
        else{
            return n-999;
        }
    }
};