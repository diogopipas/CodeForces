#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> cnt(n+1);
        int x;
        int ans = -1;
        for(int i = 0; i < n; i++){
            cin >> x;
            ++cnt[x];
            if(cnt[x] == 3){
                ans = x;
            }
        }
        cout << ans << endl;
    }
    return 0;
}