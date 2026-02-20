#include <iostream>
using namespace std;

void solve(){
    int t;cin >>t;
    while(t--){
        int n,m,h;
        cin >>n>>m>>h;
        int a[n],b[n];

        for(int i=0;i<n;i++){
            cin >> a[i];
            b[i]=a[i];
        }
        for(int i=0;i<m;i++){
            int y,z;
            cin >> y >> z;
            b[y-1]+=z;
        }
        int k=-1;
        for(int i=n-1;i>=0;i--){
            if(b[i]>h){
                k=i;
                break;
            }
        }
        if(k!=-1){
            for(int i=0;i<=k;i++){
                cout << a[i] << " ";
            }
            for(int i=k+1;i<n;i++){cout << b[i]<< " ";}
        }
        else{
            for(auto x:b){cout << x << " ";}
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