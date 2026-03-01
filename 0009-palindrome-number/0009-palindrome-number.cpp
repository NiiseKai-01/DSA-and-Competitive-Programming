class Solution {
public:
    bool isPalindrome(int x) {
        long long rx=0,tx=x;
        while(x>0){
            rx = rx*10+(x%10);
            x/=10;
        }
        if(rx==tx){return true;}
        return false;
    }
};