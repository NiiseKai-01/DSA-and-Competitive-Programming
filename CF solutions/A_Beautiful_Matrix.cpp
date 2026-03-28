#include <iostream>
#include<cmath>
using namespace std;

void solve(){
    int a[5][5];
    int k,l;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >>a[i][j];
            if(a[i][j]==1){
                k=i;
                l=j;
            }
        }
    }
    int ans= abs(2-k)+abs(2-l);
    cout <<ans<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}