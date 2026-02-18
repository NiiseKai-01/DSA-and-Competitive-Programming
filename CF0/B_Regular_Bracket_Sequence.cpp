#include <iostream>
#include <string>
using namespace std;

void solve(){
    string s; cin >>s;
    int Cc=0,lenth=0;
    int n=size(s);
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            Cc++;
        }
        else if(s[i]==')'&&i!=0&&Cc>0){
            lenth+=2;
            Cc--;
        }
    }
    cout << lenth << "\n";
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}