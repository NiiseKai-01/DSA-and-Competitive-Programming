#include <iostream>
using namespace std;

void solve(){
    int n; cin >>n;
    int a[n];
for(auto &x:a){cin >>x;}
int maxi=0;
int tc=1;
for(int i=1;i<n;i++){
    if(a[i-1]<a[i]){tc++;}
    else{
        maxi=((maxi>tc)?maxi:tc);
        tc=1;
    }
}
maxi=((maxi>tc)?maxi:tc);
cout << maxi << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}