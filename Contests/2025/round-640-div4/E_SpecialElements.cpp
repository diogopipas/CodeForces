#include <iostream>
using namespace std;

int main(){
    int t, n, e, l = 0, r = 0, window_sum=0;
    cin >> t;
    while(t--){
        int result = 0;
        cin >> n;
        vector<int> a;
        for(int i = 0; i < n; i++){
            cin >> e;
            a.push_back(e);
        }

        for(int i = 0; i < n; i++){
            l=(i+1)%n;
            r=(l+1)%n;
            for(int j = 0; j < n; j++){
                int count = 0;
                window_sum=a[l];
                while(window_sum < a[i]){
                    window_sum+=a[(r++)%n];
                   // cout << "window_sum: " << window_sum << " r: " << r << endl;
                    count++;
                }
                if(window_sum == a[i] && count > 0){
                    result++;
                    break;
                }
                l++;
                r=(l+1)%n;
            }
        }
        cout << result << endl;
    }
    
    return 0;
}