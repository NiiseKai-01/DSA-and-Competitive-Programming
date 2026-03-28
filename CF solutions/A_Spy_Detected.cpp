#include <iostream>
#include <algorithm>
using namespace std;

int solve(){
    int n; cin>>n;
    int a[n];
    for(auto &x:a){cin >>x;}
    int ans;
    for(int i=0;i<n-2;i++){
        if(a[i]!=a[i+1]&&a[i+1]==a[i+2]){
            ans=i;
            break;
        }
        else if(a[i]==a[i+1]&&a[i+1]!=a[i+2]){
            ans=i+2;
            break;
        }
        else if(a[i]!=a[i+1]&&a[i]==a[i+2]){
            ans=i+1;
            break;
        }
    }
    return ans+1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        cout << solve() << "\n";
    }
    return 0;
}