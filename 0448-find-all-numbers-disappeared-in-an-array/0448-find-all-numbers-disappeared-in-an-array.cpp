class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<bool> a(nums.size()+1,true);
        a[0]=false;
        for(auto x:nums){
            if(a[x]==true){
                a[x]=false;
            }
        }
        vector<int> ans;
        for(int i=0;i<a.size();i++){
            if(a[i]==true){
                ans.push_back(i);
            }
        }
        return ans;
    }
};