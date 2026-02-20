class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int l=score.size();
        vector<pair<int,int>> m(l);
        for(int i=0;i<l;i++){
            m[i].first=score[i];
            m[i].second=i;
        }
        sort(m.begin(),m.end());
        vector<string> answer(l);
        for(int i=l-1;i>=0;i--){
            if(i==l-1){answer[m[i].second]="Gold Medal";}
            else if(i==l-2){answer[m[i].second]="Silver Medal";}
            else if(i==l-3){answer[m[i].second]="Bronze Medal";}
            else{answer[m[i].second]=to_string(l-i);}
        }

        return answer;
    }
};