#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        int i = s.size() - 1;

        while(i >= 0 && s[i] == ' '){
            i--;
        }

        while(i >= 0 && s[i] != ' '){
            len++;
            i--;
        }
        return len;
    }
};

int main(){
    Solution sl;
    int ans = sl.lengthOfLastWord("   fly me   to   the moon  ");
    cout << "The length of the last word: " << ans << endl;
    return 0;
}