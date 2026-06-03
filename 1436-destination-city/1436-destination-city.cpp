#include <vector>
#include <string>
#include <unordered_set>

using namespace std;

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> departures;
        for (const auto& path : paths) {
            departures.insert(path[0]);
        }
        for (const auto& path : paths) {
            string destination = path[1];
            if (departures.find(destination) == departures.end()) {
                return destination;
            }
        }
        
        return "";
    }
};