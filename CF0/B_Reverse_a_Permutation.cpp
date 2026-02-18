#include <bits/stdc++.h>
using namespace std;

void solve(){
    int t; cin >>t;
    while (t--)
    {
        int n; cin >>n;
        int a[n];
        for(int &x:a){cin >>x;}
        int j=0,k=n-1;    
        for(int i=0;i<n;i++){
            if(a[i]!=n-i){
                j=i;break;
            }
        }
        for(int i=j;i<n;i++){
            if(a[i]==n-j){
                k=i;
                break;
            }
        }
        while(j<k){
            int temp=a[j];
            a[j]=a[k];
            a[k]=temp;
            j++;
            k--;
        }
        for(int &x:a){
            cout << x <<" ";
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
