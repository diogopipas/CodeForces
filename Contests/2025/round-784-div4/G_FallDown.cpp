#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int rows, cols;
        cin >> rows >> cols;
        char mat[rows][cols];

        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                cin >> mat[i][j];
            }
        }

        cout << endl;

        

        //iterate through matrix, if rock is found, iterate through it's col, stop if you find rock, object or floor
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(mat[i][j] == '*'){
                    mat[rows-1][j] = '*';
                    for(int k = i; k < rows; k++){
                        if(mat[k][j] == '*' || mat[k][j] == 'o'){
                            mat[k-1][j] = '*';
                        }
                    }
                    
                }
            }
        }
        
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                cout << mat[i][j];
            }
            cout << endl;
        }
        cout << endl;
        
    }

    return 0;
}