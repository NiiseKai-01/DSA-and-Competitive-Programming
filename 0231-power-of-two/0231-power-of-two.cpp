class Solution {
public:
    bool isPowerOfTwo(int n) {
    int count =0;
    while(n>0){
        count += (n&1);
        n >>= 1;
    } 
    if(count == 1){
        return true;
    }
    return false;
    }
};