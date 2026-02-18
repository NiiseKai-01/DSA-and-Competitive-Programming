#include <iostream>
using namespace std;

void solve(){
    int t; cin >>t;
    while(t--){
        int n; cin >>n;
        int c=0;
        int a[n]; for(int &x:a){cin >>x;}
        for(int i=1;i<n-1;i++){
            if(a[i]==7-a[i-1]||a[i]==7-a[i+1]||a[i]==a[i-1]||a[i]==a[i+1]){
                c++;
                for(int j=1;j<=6;j++){
                    if(j!=7-a[i-1]&&j!=7-a[i+1]&&j!=a[i-1]&&j!=a[i+1]){
                        a[i]=j;
                        i++;
                        break;
                    }
                }
            }
        }
        if(a[n-1]==7-a[n-2]||a[n-1]==a[n-2]){c++;}
        cout << c << "\n";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}