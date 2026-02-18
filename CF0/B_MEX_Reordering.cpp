#include <bits/stdc++.h>
using namespace std;

void solve(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n];
        for(int &x:arr){cin >> x;}
        sort(arr,arr+n);
        if(arr[0]!=0||arr[n-1]==0){
            cout << "NO\n";
        }
        else if(arr[0]==0&&arr[1]!=0){
            cout << "YES\n";
        }
        else{
            int k=0;
            while(1){
                if(arr[k]!=0){
                    break;
                }
                k++;
            }
            if(arr[k]==1){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}

// void solve(){
//     int t; cin >> t;
//     while(t--){
//         int n; cin >> n;
//         int arr[n]; for(int &x:arr){cin >> x;}
//         sort(arr,arr+n);
//         set<int> a,b;
//         b.insert(arr[n-1]);
//         for(int i=0;i<n-1;i++){a.insert(arr[i]);}
//         int flag=1;
//         while(1){
//             if(a.empty()||flag==0){
//                 break;
//             }
//             int ak=0,bk=0;
//             while(1){
//                 if(a.count(ak)==0){
//                     break;
//                 }
//                 ak++;
//             }
//             while(1){
//                 if(b.count(bk)==0){
//                     break;
//                 }
//                 bk++;
//             }
//             if(ak==bk){
//                 flag=0;
//             }
//             else{
//                 auto it = prev(a.end());
//                 b.insert(*it);
//                 a.erase(it);
//             }
//         }

//         if(flag){
//             cout << "YES\n";
//         }
//         else{
//             cout << "NO\n";
//         }
//     }
// }
