class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        for (int i = 0; i < n; i++) {
            // Khởi tạo mảng đánh dấu cho hàng i và cột i
            // Kích thước n + 1 để lập chỉ mục trực tiếp từ 1 đến n
            vector<bool> checkRow(n + 1, false);
            vector<bool> checkCol(n + 1, false);
            
            for (int j = 0; j < n; j++) {
                int rowVal = matrix[i][j];
                if (checkRow[rowVal]) return false; // Số đã tồn tại ở hàng này
                checkRow[rowVal] = true;
                int colVal = matrix[j][i];
                if (checkCol[colVal]) return false; // Số đã tồn tại ở cột này
                checkCol[colVal] = true;
            }
        }
        
        return true;
    }
};