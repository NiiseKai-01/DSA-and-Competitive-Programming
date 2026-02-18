#include <iostream>
#include <algorithm>
using namespace std;

void solve(){
    int t; cin >>t;
    while(t--){
        int n,x,y; cin >>n>>x>>y;
        int bank[n];
        for(int &x:bank){cin >>x;}
        int maxm=0;for(int &x:bank){
            maxm = max(maxm,x);
        }
        int db=0,money=0;
        for(int i=0;i<n;i++){
            if(bank[i]%x>=money){
                db=i;
                money=bank[i]%x;
            }
        }
        for(int i=0;i<n;i++){
            if(i==db){continue;}
            int mt=bank[i]/x;
            bank[db]+=(y*mt);
        }
        cout << max(maxm,bank[db]) << "\n";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}