class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string x = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            int j = 0;

            while (j < x.size() &&
                   j < strs[i].size() &&
                   x[j] == strs[i][j]) {
                j++;
            }

            x = x.substr(0, j);

            if (x.empty()) break;
        }

        return x;
    }
};