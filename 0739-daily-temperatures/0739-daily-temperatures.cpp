class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        //lets check the extension again...
        vector<int> a,answer(temperatures.size(),0);
        a.push_back(0);
        for(int i=0;i<temperatures.size();i++){
            while(!a.empty()){
                if(temperatures[i]>temperatures[a.back()]){
                    answer[a.back()]=i-a.back();
                    a.pop_back();
                }
                else{
                    a.push_back(i);
                    break;
                }
            }
            a.push_back(i);
        }
        return answer;
    }
};