class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int dem = 0;
        int var=0;
        for (int i =0 ; i< nums.size();i++){
            if(nums[i]==1){
                dem ++;
                if(dem>var){
                    var= dem;
                } 
            }
            else dem = 0;
        }
        return var;
    }
};