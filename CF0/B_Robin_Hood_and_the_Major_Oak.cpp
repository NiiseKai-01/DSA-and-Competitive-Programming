#include <iostream>
using namespace std;

void solve(){
    int t; cin >> t;
    while (t--)
    {
        int n,k; cin >>n>>k;
        int a1 = n-k+1;
        int a2 = n;
        int sum = (k*(a1+a2))/2;
        if(sum%2==0){
            cout << "YES\n";
        }
        else {
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