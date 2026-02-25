#include<iostream>
#include<string>
using namespace std;

void solve(){
    string s,h="hello"; cin >>s;
    int i=0,count=0;
    
    for(char x:s){
        if(count>=5){break;}
        else{
            if(x==h[i]){
            count++;
            i++;}
        }
    }
    if(count==5){
        cout << "YES\n";
    }
    else{cout << "NO\n";}
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}