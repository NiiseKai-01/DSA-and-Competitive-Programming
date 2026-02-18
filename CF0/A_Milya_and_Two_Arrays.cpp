#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

void solve(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n],b[n];
        for(int &x:a){
            cin >>x;
        }
        for(int &x:b){
            cin >> x;
        }
        sort(a,a+n);
        // int flag = 0;
        // if(n>=3){
        //     for(int i=0;i<n-4;i++){
        //         if(a[i]==a[i+1]&&a[i+1]==a[i+2]){
        //             flag=1;
        //             break;
        //         }
        //     }
        //     for(int i=0;i<n-4;i++){
        //         if(b[i]==b[i+1]&&b[i+1]==b[i+2]){
        //             flag=1;
        //             break;
        //         }
        //     }
        // }
        long long c[n];
        for(int i=0;i<n;i++){
            c[i]=a[i]+b[i];
        }
        set<int> st;
        for(auto &x:c){
           st.insert(x); 
        }
        if(st.size()<3){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}