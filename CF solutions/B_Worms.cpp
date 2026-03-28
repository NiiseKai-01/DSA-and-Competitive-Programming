#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& a, int x) {
    int low = 0;
    int high = a.size() - 1;
    int ans = a.size();
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (a[mid] >= x) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return ans+1;
}

void solve(){
    int n,t=0; cin >>n;
    vector<int> a(n);
    for(auto &x:a){
        int y; cin >>y;
        t+=y;
        x=t;
    }

    int q; cin >>q;
    int qt[q];
    for(auto &x:qt){cin >>x;}

    for(auto x:qt){
        int y=search(a,x);
        cout << y << "\n";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}