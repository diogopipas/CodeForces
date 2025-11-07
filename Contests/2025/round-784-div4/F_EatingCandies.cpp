#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int l = 0, r = n-1, lcheckpoint = 0, rcheckpoint = 0, lcount = 0, rcount = 0;

        while(l != r){
            lcount += a[l];
            while(lcount > rcount && l != r){

                rcount += a[r];

                if(lcount == rcount){
                    lcheckpoint = l;
                    rcheckpoint = r;
                    cout << "l: " << l << "r: " << r << endl;
                    break;
                }

                r--;

            }
            l++;
        }
        int ans;
        if(lcheckpoint == 0 && rcheckpoint == 0){
            ans = 0;
        }
        else{
            ans = lcheckpoint + (n - rcheckpoint);
        }

        cout << ans << endl;
        
    }
    
    return 0;
}