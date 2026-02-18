#include <bits/stdc++.h>
using namespace std;

void solve(){
    int t; cin >> t;
    while(t--){
        int n,s,x;
        cin >>n>>s>>x;
        int a[n];
        int sum=0;
        for(int &x:a){cin >>x;}
        for(int &x:a){sum+=x;}
        if(sum<=s){
            if((s-sum)%x==0){
                cout <<"YES\n";
            }
            else{
                cout <<"NO\n";
            }
        }
        else{cout << "NO\n";}
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}