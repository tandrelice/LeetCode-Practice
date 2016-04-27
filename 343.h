class Solution {
public:
    int integerBreak(int n) {
        int remain = n, result = 1;
        if(n == 2){
            return 1;
        }
        if(n == 3){
            return 2;
        }
        for(;remain >= 3;){
            if(remain == 4){
                result = result * remain;
                return result;
            }
            result = result * 3;
            remain = remain - 3;
        }
        if(remain == 2){
            result = result * remain;
        }
        return result;
    }
};