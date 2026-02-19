class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m,m2;
        for(auto x:nums){
            m[x]++;
        }

        vector<pair<int,int>> v;
        for(auto x:m){
            v.push_back({x.first,x.second});
        }
        sort(v.begin(), v.end(), [](pair<int,int>& a, pair<int,int>& b){
            return a.second < b.second;
        });



        vector<int> ans;
        int i=v.size()-1;
        while(k>0){
            ans.push_back(v[i].first);
            k--;i--;
        }
        return ans;
    }
};