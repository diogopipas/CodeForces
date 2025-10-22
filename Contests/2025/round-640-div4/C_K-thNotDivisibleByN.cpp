#include <iostream>
using namespace std;

int main(){
    int n, k, t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int need = (k-1) / (n-1);
        cout << k + need << endl;
    }
    
    return 0;
}