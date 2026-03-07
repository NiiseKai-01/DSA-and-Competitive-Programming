class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int ev=0, od=0;
        for(auto x:nums){
            if(x%2){od++;}
            else{ev++;}
        }
        vector<int> ans(nums.size());
        for(auto &x:ans){
            if(ev){x=0;ev--;}
            else{x=1;}
        }
        return ans;
    }
};