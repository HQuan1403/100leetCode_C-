#include <string>

using namespace std;

class Solution {
private:
    // Hàm phụ tra cứu nhanh giá trị của từng ký tự La Mã bằng switch-case
    int getRomanValue(char c) {
        switch (c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }

public:
    int romanToInt(string s) {
        int total = 0;
        int n = s.length();

        for (int i = 0; i < n; i++) {
            int current_value = getRomanValue(s[i]);

            // Nếu ký tự hiện tại nhỏ hơn ký tự đứng ngay sau nó -> Đây là trường hợp phép trừ (Ví dụ: IV, IX)
            if (i < n - 1 && current_value < getRomanValue(s[i + 1])) {
                total -= current_value;
            } 
            // Ngược lại, thực hiện phép cộng dồn thông thường
            else {
                total += current_value;
            }
        }

        return total;
    }
};
