class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> fre;
        int ans = 0;

        for(auto x:nums){
            ans += fre[x];
            fre[x]++;
        }

        return ans;
    }
};