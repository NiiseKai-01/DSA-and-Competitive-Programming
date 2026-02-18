#include <bits/stdc++.h>
using namespace std;

void solve(){
    int t; cin >> t;
    while(t--){
        int n,q; cin >>n>>q;
        int a[n],b[n],m[n];
        vector<pair<int,int>> lr(q);
        for(int &x:a){
            cin >> x;
        }
        for(int &x:b){
            cin >> x;
        }
        for(auto &x:lr){
            cin >> x.first >> x.second;
        }
        int mxm =0;
        for(int i=n-1;i>=0;i--){
            m[i]=max(a[i],max(b[i],mxm));
            mxm=m[i];
        }
        int smup[n],sm=0;
        for(int i=0;i<n;i++){
            sm+=m[i];
            smup[i]=sm;
        }
        int ans;
        for(auto &x:lr){
            //tis was ggs as if i had did -smup[x.first-2] directly it would have thrown garbage values
            //as the lowest value it can give is just smup[0] only which comes from smup[1-1]-smup[1-1]+smup[0]
            //but if i directly put that way it would have become smup[1-1]-smup[1-2]==smup[0]-smup[-1]. hence undefined behaviour
            ans=smup[x.second-1]-smup[x.first-1]+m[x.first-1];
            cout << ans << " ";
        }
        cout << "\n";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}