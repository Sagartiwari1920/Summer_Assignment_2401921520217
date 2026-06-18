
class Solution {
public:
    string s;
    string ans = "";

    void isPalindrome(int start, int end, int &maxi) {
        
        while (start >= 0 && end < s.size() && s[start] == s[end]) {
            
            if (end - start + 1 > maxi) {
                maxi = end - start + 1;
                ans = s.substr(start, maxi);
            }
            
            start--;
            end++;
        }
    }

    string longestPalindrome(string str) {
        s = str;
        if (s.size() <= 1)
            return s;

        int maxi = 0;

        for (int i = 0; i < s.size(); i++) {
            isPalindrome(i, i, maxi);       // odd length
            isPalindrome(i, i + 1, maxi);   // even length
        }

        return ans;
    }
};