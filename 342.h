class Solution {
public:
    bool isPowerOfFour(int num) {
        long int result = 1, temp = num;
        if(temp <= 0){
            return false;
        }
        for(;result <= temp;){
            if(result == temp){
                return true;
            }
            result = result * 4;
        }
        return false;
    }
};