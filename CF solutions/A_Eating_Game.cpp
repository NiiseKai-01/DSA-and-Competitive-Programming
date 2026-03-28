#include <iostream>
using namespace std;

void solve(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int a[11];
        int mx = 0, cnt = 0;

        for(int i = 0; i < n; i++){
            cin >> a[i];
            mx = max(mx, a[i]);
        }

        for(int i = 0; i < n; i++){
            if(a[i] == mx) cnt++;
        }

        cout << cnt << "\n";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}