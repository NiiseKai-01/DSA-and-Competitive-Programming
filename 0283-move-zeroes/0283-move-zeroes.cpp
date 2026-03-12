class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cz=0,n=nums.size();
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            if(nums[i]==0){cz++;}
            else{
                v.emplace_back(i-cz,nums[i]);
            }
            nums[i]=0;
        }
        for(auto x:v){
            nums[x.first]=x.second;
        }
    }
};