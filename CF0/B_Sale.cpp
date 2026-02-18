#include <iostream>
#include <algorithm>
using namespace std;

void solve(){
    int n,m; cin >>n>>m; int a[n];
    for(int &x:a){cin >>x;}
    sort(a,a+n);
    int i=0,s=0;
    while(m--){
        if(a[i]>0){
            break;
        }
        s-=a[i];
        i++;
    }
    cout << s << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}