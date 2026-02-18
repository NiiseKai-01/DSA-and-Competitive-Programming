#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void solve(){
    // std::fixed;
    // std::setprecision(8);
    int n; double m;
    cin >> n >> m;
    vector<double> a(n);
    for(int i=0;i<n;i++){
        double y,z; cin >> y>>z;
        a[i]=y/z;
    }
    double mn=a[0];
    for(auto &x:a){
        if(x<mn){
            mn=x;
        }
    }
    cout << fixed<<setprecision(8) <<mn*m << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}