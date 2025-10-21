#include <iostream>
using namespace std;

int main(){
    int t, n, k;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n >> k;
       
        int n1 = n-(k-1);
        if(n1 > 0 && n1%2 == 1){
            cout << "YES" << endl;
            for(int j = 0; j < k-1; j++){
                cout << "1 ";
            }
            cout << n1 << endl;
            continue;
        }
       
        int n2 = n-2*(k-1);
        
        if(n2 > 0 && n2%2 == 0){
            cout << "YES" << endl;
            for(int j = 0; j < k-1; j++){
                cout << "2 ";
            }
            cout << n2 << endl;
            continue;
        }

        else{
            cout << "NO" << endl;
        }


    }
    return 0;
}
