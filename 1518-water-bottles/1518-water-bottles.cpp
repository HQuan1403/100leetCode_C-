class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total_drunk = 0;
        int empty_bottles = 0;
        
        while (numBottles > 0) {
            total_drunk += numBottles;
            empty_bottles += numBottles;
            numBottles = empty_bottles / numExchange;
            empty_bottles = empty_bottles % numExchange;
        }
        
        return total_drunk;
    }
};