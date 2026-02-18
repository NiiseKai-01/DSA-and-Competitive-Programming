#include <iostream>
#include <algorithm>
using namespace std;

void solve(){
    int t; cin >>t;
    while(t--){
        int n; cin >>n;
        int a[n];for(int &x:a){cin >>x;}
        int f=1;
        for(int i=0;i<n;i++){
            int index=i+1;
            if(a[i]!=index){
                float fq= (float)max(a[i],index)/(float)min(a[i],index);
                int iq = max(a[i],index)/min(a[i],index);
                if(fq!=(float)iq){f=0;break;}
                else{
                    while(iq%2==0){
                        iq/=2;
                    }
                    if(iq!=1){f=0;break;}
                }
            }
        }
        if(f){cout << "YES\n";}
        else{cout << "NO\n";}
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}