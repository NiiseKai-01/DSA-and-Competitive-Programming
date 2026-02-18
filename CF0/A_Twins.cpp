#include <iostream>
#include <algorithm>
using namespace std;

void solve(){
    int n; cin >>n; int a[n];
    for(int &x:a){cin >>x;}
    sort(a,a+n);
    int s=0;
    for(int &x:a){s+=x;}
    int my=0,i=n-1,ans=0;
    while(my<=s){
        my+=a[i];
        s-=a[i];
        i--;
        ans++;
    }
    cout << ans << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}