#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        //only Ws
        if(string(n, 'W') == s){
            cout << "YES" << endl;
            continue;
        }

        //single Bs or Rs
        if(n == 1){
            cout << "NO" << endl;
            continue;
        }

        //Bs or Rs alone in the corners
        if((s[0] == 'B' && s[1] == 'W') || (s[0] == 'R' && s[1] == 'W') || (s[n-1] == 'B' &&  s[n-2] == 'W') || (s[n-1] == 'R' && s[n-2] == 'W')){
            cout << "NO" << endl;
            continue;
        }

        //if there's a repeated string between Ws then NO else YES
        int i = 0;
        int j = 0;
        bool isRepeated = false;
        while(i < n-1){
            if(s[i] == 'W'){
                char c = s[i+1];
                j=i+1;
                while((s[j] != 'W') && (s[j] < n)){
                    if(s[j] != c){
                        isRepeated = false;
                        break;
                    }
                    else{
                        isRepeated = true;
                    }
                   
                }
            }
            if(isRepeated){
                cout << "NO" << endl;
                break;
            }
            i++;
        }

        if(!isRepeated){
            cout << "YES" << endl;
        }

    }


    return 0;
}