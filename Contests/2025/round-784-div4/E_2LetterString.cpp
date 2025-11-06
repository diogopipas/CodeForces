#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;

    while(t--){
        ll counter = 0;
        ll n;
        cin >> n;
        vector<string> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(j == i){
                    continue;
                }
                if(a[i][0] == a[j][0]){
                    if(a[i][1] != a[j][1]){ 
                        counter++;
                    }
                }
                else if(a[i][0] != a[j][0]){
                    if(a[i][1] == a[j][1]){
                        counter++;
                    }
                }
            }
        }
        cout << counter << endl;

    }

    return 0;
}