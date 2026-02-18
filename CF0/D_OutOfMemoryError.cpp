#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long t; 
    cin >> t;

    while (t--){
        long long n, m, h; 
        cin >> n >> m >> h;

        vector<long long> original(n), extra(n, 0);

        for(long long i = 0; i < n; i++){
            cin >> original[i];
        }

        for(long long i = 0; i < m; i++){
            long long b, c;
            cin >> b >> c;

            b--;

            extra[b] += c;

            if(original[b] + extra[b] > h){
                fill(extra.begin(), extra.end(), 0);
            }
        }

        for(long long i = 0; i < n; i++){
            cout << original[i] + extra[i] << " ";
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
