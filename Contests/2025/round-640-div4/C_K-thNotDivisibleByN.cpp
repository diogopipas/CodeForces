#include <iostream>
using namespace std;

int main(){
    int n, k, t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        cout << "initial n: " << n << " initial k: " << k << endl;
        int i = 1;
        while(0!=1){
            if(i%n!=0){
                cout << "i: " <<  i << " k: " << k << endl;
                k--;
            }

            if(k==0){
                cout << i << endl;
                break;
            }
            
            i++;
            
        }
    }
    
    return 0;
}