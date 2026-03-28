#include <iostream>
using namespace std;

 void solve(){
    int t; cin >>t;
    while(t--){
        int n,w,d;
        cin>>n>>w>>d;
        int x=(d/w)+1;
        int ans=n/x;
        if(n%x==0){
            cout << ans << "\n";
        }
        else{
            cout << ans+1 << "\n";
        }
    }
 }

 int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}