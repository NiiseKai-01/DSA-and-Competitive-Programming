#include <iostream>
using namespace std;

void solve(){
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int a[n];
        for(int &x:a){
            cin >> x;
        }
        int i=0,j=n-1,k=0;
        int b[n];
        while(1){
            if(i>j){
                break;
            }
            b[k++]=a[i];
            b[k++]=a[j];
            i++;j--;
        }
        for(int &x:b){
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