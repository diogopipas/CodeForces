#include <iostream>
using namespace std;

int main(){
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n < 3){
            cout << -1 << endl;
            continue;
        }
        else if(n == 4){
            cout << 3  << " " << 1 << " " << 4 << " " << 2 << endl;
            continue;
        }

        int i = n;
        int j = 0;
        
        while(i >= 1){
            cout << i << " ";
            i-=2;
        }

        if(i%2==0){
            j = 5;
            cout << j << " " << 1 << " " << 3 << " ";
        }

        else{
            j = 4;
            cout << j << " " << 2 << " ";
        }

        while(j < n-1){
            j+=2;
            cout << j << " ";
        }     
        cout << endl;  
    }
    return 0;
} // 2 <= |pi - pi+1| <= 4 