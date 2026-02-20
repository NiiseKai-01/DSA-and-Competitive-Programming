#include <iostream>
using namespace std;

void solve(){
    int t; cin >>t;
    while(t--){
        long long n; cin >>n;
        if(n%2 || n<4){cout << -1<<"\n";}
        else{
            long long mn=0,mx=0,nmn=n,nmx=n;
            //oops i thought nmn(now divisible by 4) will give the minimum but no its the opposite if nmn is divisible by 4 then by dividing it by 4 will give maximum
            //and same for nmx
            while(nmn%4!=0){
                nmn-=6;
                mn++;
            }
            mn+=(nmn/4);
            while(nmx%6!=0){
                nmx-=4;
                mx++;
            }
            mx+=(nmx/6);
            cout << mx <<" "<< mn <<"\n"; 
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}