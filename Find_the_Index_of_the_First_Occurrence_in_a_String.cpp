#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        return haystack.find(needle);
    }
};

int main(){
    Solution sl;
    string haystack = "sadbutsad";
    string needle = "sad";

    int result = sl.strStr(haystack, needle);
    cout << result;
    return 0;
}