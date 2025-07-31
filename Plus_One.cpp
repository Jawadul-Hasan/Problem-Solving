#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int s = digits.size() - 1;

        for(int i = s; i >= 0; i--){
            if(digits[i] < 9){
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main(){
    Solution sl;
    vector<int> digits = {4,3,2,1};

    vector<int> result = sl.plusOne(digits);

    for(int i = 0; i < result.size(); i++){
        cout << result[i];
    }
    return 0;
}