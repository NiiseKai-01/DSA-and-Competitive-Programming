#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void solve(){
    int t; cin >>t;
    vector<pair<int,int>> a(t);
    for(auto &x:a){
        cin >> x.first>>x.second;
    }
    int f=1;
    a[0].first=max(a[0].first,a[0].second);
    for(int i=0;i<t-1;i++){
        if(a[i].first < a[i+1].first && a[i].first < a[i+1].second){
            f=0;break;
        }
        else if(a[i].first >= a[i+1].first && a[i].first >= a[i+1].second){
            a[i+1].first=max(a[i+1].first,a[i+1].second);
        }
        else if(a[i].first >= a[i+1].second){
            a[i+1].first=a[i+1].second;
        }
    }


    if(f){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}