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
        bool isRepeated = false;
        for(int i = 0; i < n; i++){
            if(s[i] == 'W'){

                int j = i+1;
                int count = 0;

                //cout << s[j] << endl;

                while((s[j] != 'W') && (j < n)){

                    //cout << "test" << endl;
                    if(s[j] != s[i+1]){
                        break;
                    }

                    j++;
                    count++;
                }
                if(count != j-i){

                    isRepeated = true;
                    break;

                }

                i = j;
            }
        }
        cout << (isRepeated? "NO" : "YES") << endl;
    }
    return 0;
}