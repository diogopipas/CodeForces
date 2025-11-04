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
        int sum=0;
        vector<int> vec(n);

        if(n < 3){
            cout << "YES" << endl;
            continue;
        }
        
        for(int i = 0; i < n; i++){
            cin >> vec[i];
            sum+=vec[i];
            
        }
        cout << "Sum: " << sum << endl;

        if(((vec[0] + vec[1])%2==0 && sum%2==0) || ((vec[0] + vec[1])%2!=0 && sum%2!=0)){
            cout << "YES" << endl;
        }

        else{
            cout << "NO" << endl;
        }     
            
    }
    return 0;
}