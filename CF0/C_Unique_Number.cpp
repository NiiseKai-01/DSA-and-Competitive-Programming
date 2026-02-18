#include <iostream>
using namespace std;

void solve(){
    int t; cin >> t;
    while(t--){
        int n; cin >>n;
        int a=9,c=0;
        if(n>45){cout << -1<<"\n";}
        else if(a>=n){
            cout << n << "\n";
        }
        else{
            while(a<n){
                c*=10;c+=a;
                n-=a;
                a--;
            }
            if(n){
                c*=10; c+=n;n-=n;
            }
            while(c>0){
                n*=10; n+=c%10;
                c/=10;
            }
            cout << n << "\n";
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}