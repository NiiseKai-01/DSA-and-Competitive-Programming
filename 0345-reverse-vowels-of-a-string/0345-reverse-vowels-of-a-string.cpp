class Solution {
public:
    string reverseVowels(string s) {
        set<char> st={'a','e','i','o','u','A','E','I','O','U'};
        vector<int> v;
        for(int i=0;i<s.size();i++){
            if(st.count(s[i])){
                v.push_back(i);
            }
        }
        int i=0,j=v.size()-1;
        while(i<j){
            char temp=s[v[i]];
            s[v[i]]=s[v[j]];
            s[v[j]]=temp;
            i++;j--;
        }
        return s;
    }
};