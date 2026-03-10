class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> st1,st2;
        for(auto x:nums1){st1.insert(x);}
        for(auto x:nums2){st2.insert(x);}
        vector<int> v;
        for(auto x: st1){
            if(st2.count(x)){v.push_back(x);}
        }
        return v;
    }
};
