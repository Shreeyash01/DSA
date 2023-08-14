class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }
        int i = 0;
        string cp = "";
        bool flag = false;  
        
        while (i < strs[0].size()) {
            for (int j = 0; j < strs.size() - 1; j++) {
                if (strs[j][i] != strs[j + 1][i]) {
                    flag = true;
                    break;
                }
            }
            if (flag) {
                break;
            }
            cp += strs[0][i];
            i++;
        }
        return cp;
    }
};
