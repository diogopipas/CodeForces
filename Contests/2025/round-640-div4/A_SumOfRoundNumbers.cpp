#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    string number;
    for(int i = 0; i < n; i++){
        vector<string> result = {};
        cin >> number;
        int count = 0;
        if(number[0] == '0'){
            return 0;
        }
        for(int j = 0; j < number.size(); j++){
            if(number[j] == '0'){
                continue;
            }
            result.push_back(number[j] + string(number.size()-j-1, '0'));
            count++;
        }
        
        cout << count << endl;
        for(string number : result){
            cout << number + " ";
        }
        cout << endl;
    }
    
    return 0;
}