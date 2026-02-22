class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size(),m=needle.size();
        int f=0;
        for(int i=0;i<=n-m;i++){
            if(haystack[i]==needle[0]){
                f=1;
                for(int j=0;j<m;j++){
                    if(haystack[i+j]!=needle[j]){
                        f=0;
                        break;
                    }
                }
                if(f){return i;}
            }
        }
        return -1;

    }
};