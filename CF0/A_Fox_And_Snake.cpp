#include <iostream>
using namespace std;

void solve(){
    int r,c; cin >> r>>c;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            if(i%2==1){
                cout << "#";
            }
            else{
                if((i/2)%2==1 && j==c){
                    cout << "#";
                }
                else if((i/2)%2==0 && j==1){
                    cout << "#";
                }
                else{
                    cout << ".";
                }
            }
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