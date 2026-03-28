#include<iostream>
using namespace std;

void solve(){
    int t; cin >>t;
    while(t--){
        int n; cin >>n; int a[n];
        for(auto &x:a){cin >>x;}
        if(n==1){
            for(auto x:a){
                cout <<x << " ";
            }
            cout << "\n";
        }
        else{
            int tar=-1,dest=-1;
            for(int i=0;i<n;i++){
                if(a[i]>=i+1){
                    tar=i;
                    break;
                }
            }
            for(int i=0;i<n;i++){
                if(tar!=-1&&a[i]>a[tar]){
                    dest=i;
                    break;
                }
            }
            if(tar!=-1&&dest!=-1){
                int temp=a[dest];a[dest]=a[tar];a[tar]=temp;
            }
            for(auto x:a){cout << x << " ";}
            cout << "\n";            
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}