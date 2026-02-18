#include <iostream>
#include <algorithm>
using namespace std;

void solve(){
    int t; cin>>t;
    while (t--)
    {
        int n; cin >>n;int a[n];
        for(int &x:a){cin >>x;}
        sort(a,a+n);
        int c=0;
        for(int i=0;i<n-1;i++){
            if((a[i+1]-a[i])>1){
                c++;
            }
        }
        if(c>=1){cout << "NO\n";}
        else{cout << "YES\n";}
    }
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}