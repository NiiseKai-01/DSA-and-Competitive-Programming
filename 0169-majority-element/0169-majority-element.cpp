class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        int maxf=0,ans;
        for(auto x:nums){
            freq[x]++;
            if(freq[x]>maxf){
		maxf=freq[x];
		ans=x;
	    }
        }
        return ans;
    }
};
