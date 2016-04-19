class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int cur_1, cur_2;
        bool flag_2 = false;
        if(nums.size() < 3){
            return false;
        }
        else{
            cur_1 = nums.at(0);
        }
        for (int i = 1; i < nums.size(); i++){
            if(nums.at(i) <= cur_1){
                cur_1 = nums.at(i);
            }
            else{
                if(!flag_2){
                    cur_2 = nums.at(i);
                    flag_2 = true;
                }
                else{
                    if(cur_2 < nums.at(i)){
                        return true;
                    }
                    else{
                        cur_2 = nums.at(i);
                    }
                }
            }
        }
        return false;
    }
};