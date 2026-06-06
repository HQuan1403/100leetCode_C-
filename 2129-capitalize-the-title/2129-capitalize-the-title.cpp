class Solution {
public:
    string capitalizeTitle(string title) {
        int n = title.length();
        int i = 0;
        
        while (i < n) {
            int start = i; 
            while (i < n && title[i] != ' ') {
                title[i] = tolower(title[i]); 
                i++;
            }
            int len = i - start;
            if (len > 2) {
                title[start] = toupper(title[start]);
            }
            i++; 
        }
        
        return title;
    }
};