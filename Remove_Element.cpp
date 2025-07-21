#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        for(int j = 0; j < nums.size(); j++){
            if(nums[j] != val) nums[i++] = nums[j];
        }
        return i;
    }
};

int main(){
    Solution sl;
    vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    int val = 2;

    int res = sl.removeElement(nums, val);
    for(int i = 0; i < res; i++){
        cout << nums[i] << " ";
    }

    return 0;
}