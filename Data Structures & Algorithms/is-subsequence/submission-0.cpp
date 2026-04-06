class Solution {
public:
    bool isSubsequence(string s, string t) {
        int slen = s.length();
        int tlen = t.length();

        if (slen == 0) return true;

        vector<vector<int>> dp(slen + 1, vector<int>(tlen + 1, 0));

    
        for (int i = 1; i <= slen; i++) {
            for (int j = 1; j <= tlen; j++) {
                if (s[i - 1] == t[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }

        return dp[slen][tlen] == slen;
    }
};