#include <iostream>
using namespace std;

void solve(){
    int t;cin >>t;
    while (t--)
    {
        /* code */
        int n; cin >>n;
        int i=1;
        int c=0,nt=n;
        while (nt>0)
        {
            /* code */
            int r=nt%10;
            if(r){c++;}
            nt/=10;
        }
        cout<< c <<"\n";
        while(n>0){
            int rem=n%10;
            if(rem!=0){
                cout << rem*i << " ";
            }
            i*=10;n/=10;
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