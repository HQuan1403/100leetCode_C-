#include <vector>
#include <algorithm>

using namespace std;

class Solution {
private:
    // Hàm vun đống (Heapify) một cây con có gốc tại chỉ số i
    // n là kích thước hiện tại của heap cần xử lý
    void heapify(vector<int>& nums, int n, int i) {
        int largest = i;       // Khởi tạo largest là nút gốc
        int left = 2 * i + 1;  // Chỉ số của nút con bên trái
        int right = 2 * i + 2; // Chỉ số của nút con bên phải

        // Nếu con bên trái lớn hơn nút cha hiện tại
        if (left < n && nums[left] > nums[largest]) {
            largest = left;
        }

        // Nếu con bên phải lớn hơn nút lớn nhất từ trước đến nay
        if (right < n && nums[right] > nums[largest]) {
            largest = right;
        }

        // Nếu nút lớn nhất không phải là nút gốc ban đầu
        if (largest != i) {
            swap(nums[i], nums[largest]); // Đổi chỗ cha và con lớn hơn

            // Đệ quy tiếp tục vun đống cây con bị ảnh hưởng
            heapify(nums, n, largest);
        }
    }

public:
    vector<int>& sortArray(vector<int>& nums) {
        int n = nums.size();

        // Bước 1: Xây dựng Max-Heap (Duyệt ngược từ nút nội bộ cuối cùng lên gốc)
        for (int i = n / 2 - 1; i >= 0; i--) {
            heapify(nums, n, i);
        }

        // Bước 2: Trích xuất từng phần tử từ heap một cách lần lượt
        for (int i = n - 1; i > 0; i--) {
            // Di chuyển gốc hiện tại (số lớn nhất) về cuối mảng
            swap(nums[0], nums[i]);

            // Vun đống lại cho phần còn lại (kích thước giảm xuống còn i)
            heapify(nums, i, 0);
        }

        return nums;
    }
};