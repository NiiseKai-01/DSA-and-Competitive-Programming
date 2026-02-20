class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int mxc=0,tc=0;
       for(auto x:nums){
        if(x==1){tc++;}
        else{
            mxc=max(tc,mxc);
            tc=0;
        }
       }
       mxc=max(mxc,tc);
       return mxc;
    }
};