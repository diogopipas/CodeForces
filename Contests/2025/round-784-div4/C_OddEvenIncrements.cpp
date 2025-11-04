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
        vector<int> vec(n);

        for(int i = 0; i < n; i++){
            cin >> vec[i];
        }

        int oddParity = vec[0] % 2;
        int evenParity = (n > 1 ? vec[1] % 2 : oddParity);

        bool ok = true;

        for(int i = 0; i < n; i+=2){
            if(vec[i]%2 != oddParity){
                ok = false;
                break;
            }
        }

        for(int i = 1; i < n; i+=2){
            if(vec[i] % 2 != evenParity){
                ok = false;
                break;
            }
        }
        
        cout << (ok? "YES" : "NO") << endl;

        end:
            
    }
    return 0;
}