class Solution {
public:
    vector<string> letterCombinations(string digits) {
        unordered_map<int,string> keypad={
            {2, "abc"},
            {3, "def"},
            {4, "ghi"},
            {5, "jkl"},
            {6, "mno"},
            {7, "pqrs"},
            {8, "tuv"},
            {9, "wxyz"}
        };
        int d=stoi(digits),n=0,tc=1; 
        while(d>0){
            tc*=keypad[(d%10)].size();
            d/=10;
            n++;
        }
        d=stoi(digits);
        vector<string> ans(tc,""); int cc=1;
        while(n--){
            string x=keypad[(d%10)];
            int i=0,j=0;
            for(auto &sx:ans){
                sx = x[j]+sx;
                i++;
                if(i==cc){
                    i=0;
                    j++;
                }
                if(j==x.size()){
                    j=0;
                }
            }
            cc*=x.size();
            d/=10;
        }
        return ans;
    }
};