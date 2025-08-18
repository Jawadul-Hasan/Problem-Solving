#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if (x == 0)
            return x;
        if (x == 1)
            return x;
        int left = 0, right = x, ans = 0;

        while (left <= right) {
            int mid = (left + right) / 2;

            if (mid <= x / mid) {
                ans = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return ans;
    }
};

int main() {
    Solution sl;
    int x1 = 4, x2 = 8;
    cout << sl.mySqrt(x1) << endl;
    cout << sl.mySqrt(x2) << endl;
    return 0;
}