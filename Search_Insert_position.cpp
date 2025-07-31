#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;

        while(low < high){
            int mid = (low + high) / 2;

            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] > target){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};

int main(){
    Solution sl;

    vector<int> nums = {1,3};

    int result = sl.searchInsert(nums, 2);
    cout << result;
    return 0;
}