class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();

        vector<int> lps(n, 0);

        int prefixLength = 0;
        int i = 1;

        while (i < n) {
            if (s[i] == s[prefixLength]) {
                prefixLength++;
                lps[i] = prefixLength;
                i++;
            }
            else {
                if (prefixLength == 0) {
                    lps[i] = 0;
                    i++;
                }
                else {
                    prefixLength = lps[prefixLength - 1];
                }
            }
        }

        int longestPrefixSuffix = lps[n - 1];

        if (longestPrefixSuffix == 0)
            return false;

        int patternLength = n - longestPrefixSuffix;

        return n % patternLength == 0;
    }
};