#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        // Mảng cố định 26 phần tử để đếm số lần xuất hiện của từ 'a' đến 'z'
        int counts[26] = {0};
        int n = s.length();

        // Bước 1: Duyệt qua chuỗi để đếm tần suất của từng ký tự
        for (int i = 0; i < n; i++) {
            counts[s[i] - 'a']++;
        }

        // Bước 2: Duyệt lại chuỗi từ trái sang phải để tìm ký tự độc nhất đầu tiên
        for (int i = 0; i < n; i++) {
            // Nếu tần suất xuất hiện của ký tự này bằng đúng 1
            if (counts[s[i] - 'a'] == 1) {
                return i; 
            }
        }
        return -1;
    }
};