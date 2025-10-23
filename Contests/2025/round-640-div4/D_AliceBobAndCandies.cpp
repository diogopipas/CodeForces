#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t, n, candie;
    cin >> t;
    while(t--){
        int total_moves = 0, total_alice = 0, total_bob = 0, current_alice=0, current_bob=0, total_candies=0;
        vector<int> candies;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> candie;
            candies.push_back(candie);
        }

        int l=0,r=n-1;
        while(l<=r){
            current_alice=0;
            current_bob=0;
            while(current_alice <= total_candies && l<=r){
                current_alice+=candies[l++];
            }
            total_alice+=current_alice;
            total_candies=current_alice; 
            total_moves++;
            if(l > r) break;
            while(current_bob <= total_candies && l<=r){
                current_bob+=candies[r--];
            }
            total_bob+=current_bob;
            total_candies=current_bob;
            total_moves++;
        }
        
        cout << total_moves << " " <<  total_alice << " " << total_bob << endl;
    }

    return 0;
}