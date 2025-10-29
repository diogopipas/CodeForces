#include <iostream>
#include <numeric>
//#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> vec = {};

        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            vec.push_back(x);
        }

        if(vec[0] == 1){
            cout << 2 << endl;
            continue;
        }


        bool smallestExists = false;


        for(int i = 2; i <= pow(10,18); i++){
            for(int j = 0; j < n; j++){
                if(__algo_gcd(i, vec[j]) == 1){
                    smallestExists = true;
                    cout << i << endl;
                    break;
                }
            }
            if(smallestExists == true){
                break;
            }
        }
        if(!smallestExists){
            cout << -1 << endl;
        }
    }

    return 0;
}