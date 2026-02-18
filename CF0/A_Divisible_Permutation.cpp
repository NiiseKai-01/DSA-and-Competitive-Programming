#include <bits/stdc++.h>
using namespace std;

void solve(){
    int t; cin >> t;
    while(t--){
        int n; cin >>n;
        vector<int> a(n,0);
        int mx=1;
        a[n-1]=1;
        for(int i=n-1;i>0;i--){
            a[i-1]=a[i]+(mx*i);
            mx = ((mx==-1)?1:-1);
        }
        for(int &x:a){
            cout << x << " ";
        }
        cout << "\n";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}


//  while(t--){
//         int n; cin >>n;
//         vector<int> a(n+1,0);
//         int p[n];p[n-1]=1;
//         a[1]=1;
//         int mx=n-1;
//         for(int i=n-2;i>=0;i--){
//             if(p[i+1]<=mx){
//                 p[i]=p[i+1]+mx;
//                 a[p[i]]=1;
//             }
//             else{
//                 int temp=p[i+1]-mx;
//                 if(a[temp]==0){
//                     p[i]=temp;
//                 }
//                 else{
//                     p[i]=p[i+1]+mx;
//                 }
//                 mx--;
//             }
//         }
//         for(int &x:p){cout << x << " ";}
//         cout <<"\n";
//     }