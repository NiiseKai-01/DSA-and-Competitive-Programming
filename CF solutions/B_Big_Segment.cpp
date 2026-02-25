#include <bits/stdc++.h>
using namespace std;

void solve(){
    int t; cin >>t;
    vector<pair<int,int>> v(t);
    int m1=INT_MAX,m2=INT_MIN;

    for (auto &x:v){
        cin >>x.first>>x.second;
        m1=min(m1,x.first),m2=max(m2,x.second);
    }

    int k=-1;
    for(int i=0;i<t;i++){
        if(v[i].first==m1&&v[i].second==m2){
            k=i+1;
            break;
        }
    }
    
    cout << k << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}