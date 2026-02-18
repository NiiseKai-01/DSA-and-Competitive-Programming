#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;

void solve(){
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<ll> swords(n),levels(n);
        for(auto &x:swords){
            cin >> x;
        }
        ll t_strikes=0;
        for(auto &x:levels){
            cin >> x;
        }
        for(auto &x:levels){t_strikes+=x;}
        sort(swords.begin(),swords.end());
        
        ll maxsc=0,k=n-1,comp_levels=n;
        for(int i=0;i<n;i++){
            ll inv_swords=n-i;
            while(1){
                    if(t_strikes<=inv_swords){break;}
                    t_strikes-=levels[k--];
                    comp_levels--;
            }
            ll score=swords[i]*comp_levels;
            maxsc=max(maxsc,score);
            //ok so putting the while(1) loop for finding aggregate levels brought correct results
            //but the if else with if containing the max score updater and else containing the aggregate
            //level finder loop beared incorrect results but why. i need to see how if else works
        }
        
        cout << maxsc << "\n";
    }
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}