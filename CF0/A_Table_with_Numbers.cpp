#include <iostream>
using namespace std;

void solve(){
    int t; cin >> t;
    while(t--){
        int n,l,h; cin >>n>>l>>h;
        int a[n];
        for(int &x:a){cin >>x;}
        int f = ((l>h)?l:h);
        int g = ((l<h)?l:h);
        int c=0,d=0;
        for(int i=0;i<n;i++){
            if(a[i]<=f){
                c++;
                if(a[i]<=g){
                    d++;
                }
            }
        }
        int ans = (((c/2)<d)?(c/2):d);
        cout << ans << "\n";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}