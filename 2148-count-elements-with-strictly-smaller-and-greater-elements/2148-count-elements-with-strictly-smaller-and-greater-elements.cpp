class Solution {
public:
    int countElements(vector<int>& nums) {
        int dem = 0;
        for (int i : nums){
            int smaller = 0;
            int greater = 0;
            for (int j : nums){
                if (j>i){
                    smaller += 1;
                }
                else if(j<i){
                    greater += 1;
                }
            }
            if (smaller > 0 && greater > 0){
                dem +=1;
            }
        }
        return dem;
    }
};