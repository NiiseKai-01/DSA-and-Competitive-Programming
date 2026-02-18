#include <iostream>
#include <string>
using namespace std;

void solve(){
    string tab,h[5];
    cin >> tab;
    cin >> h[0]>> h[1]>> h[2]>> h[3]>> h[4];
    int f=0;
    for(int i=0;i<5;i++){
        char r=h[i][0],c=h[i][1];
        if(r==tab[0]||c==tab[1]){
            f=1;
            break;
        }
    }
    cout << ((f==1)?"YES\n":"NO\n");
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}