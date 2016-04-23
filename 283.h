class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count_zero = 0, cur_index = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums.at(i) == 0){
                count_zero++;
            }
            else{
                nums.at(cur_index) = nums.at(i);
                cur_index++;
            }
        }
        for(;count_zero != 0;){
            nums.at(cur_index + count_zero - 1) = 0;
            count_zero--;
        }
    }
};