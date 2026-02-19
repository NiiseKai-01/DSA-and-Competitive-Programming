class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;int cna=0;
        for(int i=0;i<asteroids.size();i++){
            if(asteroids[i]<0){
                cna=abs(asteroids[i]);
                while(1){
                    if(ans.empty()){
                        ans.push_back(-cna);
                        break;
                    }
                    else{
                        if(ans.back()<cna&&ans.back()>0){ans.pop_back();}
                        else if(ans.back()<0){ans.push_back(-cna);break;}
                        else if(ans.back()>=cna){
                            if(ans.back()==cna){ans.pop_back();}
                            break;
                        }
                    }
                }
            }
            else{ans.push_back(asteroids[i]);}
        }
        return ans;
    }
};