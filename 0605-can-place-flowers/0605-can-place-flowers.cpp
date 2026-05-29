#include <vector>

using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int a = flowerbed.size();
        
        for (int i = 0; i < a; i++) {
            if (n <= 0) return true;
            
            if (flowerbed[i] == 0) {
                bool trai_trong = (i == 0 || flowerbed[i - 1] == 0);
                bool phai_trong = (i == a - 1 || flowerbed[i + 1] == 0);
                if (trai_trong && phai_trong) {
                    flowerbed[i] = 1; 
                    n--;              
                }
            }
        }
        return n <= 0;
    }
};