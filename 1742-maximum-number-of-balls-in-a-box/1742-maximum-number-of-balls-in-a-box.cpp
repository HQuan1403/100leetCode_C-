#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
private:
    int getDigitSum(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }

public:
    int countBalls(int lowLimit, int highLimit) {
        int box_counts[46] = {0}; 
        int max_balls = 0;

        for (int i = lowLimit; i <= highLimit; i++) {
            int box_number = getDigitSum(i);
            box_counts[box_number]++;
            max_balls = max(max_balls, box_counts[box_number]);
        }

        return max_balls;
    }
};