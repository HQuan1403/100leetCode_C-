class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        if (timeSeries.empty()) return 0;
        int total_time = 0;
        int n = timeSeries.size();
        for (int i = 1; i < n; i++) {
            int interval = timeSeries[i] - timeSeries[i-1];
            total_time += min(interval, duration);
        }
        total_time += duration;
        return total_time;
    }
};