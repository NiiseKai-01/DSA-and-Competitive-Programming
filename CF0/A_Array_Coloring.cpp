#include <bits/stdc++.h>
using namespace std;

void solve(){
    int t; cin >>t;
    while (t--)
    {
        int n; cin >> n;
        vector<pair<int,int>> arr(n);
        for(auto &x:arr){
            cin >> x.first;
        }
        for(int i=0;i<n;i++){
            if(i%2){
                arr[i].second=1;
            }
            else{
                arr[i].second=0;
            }
        }
        sort(arr.begin(),arr.end());
        int p=1;
        for(int i=0;i<n-1;i++){
            if(arr[i].second==arr[i+1].second){
                p=0;
                break;
            }
        }
        if(p){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}