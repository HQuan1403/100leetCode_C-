#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minimumCost(vector<int>& cost) {
        // Sắp xếp mảng theo thứ tự giảm dần
        sort(cost.begin(), cost.end(), greater<int>());
        
        int total_cost = 0;
        int n = cost.size();
        
        for (int i = 0; i < n; i++) {
            // Cứ mỗi phần tử có chỉ số chia 3 dư 2 (vị trí thứ 3 trong nhóm) sẽ được miễn phí
            if (i % 3 == 2) {
                continue; 
            }
            total_cost += cost[i];
        }
        
        return total_cost;
    }
};