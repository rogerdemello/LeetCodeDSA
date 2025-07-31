class Solution {
public:
    char kthCharacter(int k) {
        string str = "a";
        while (str.length() < k) {
            int n = str.length();

            for (int i = 0; i < n; i++) {
                char c = 'a' + ((str[i] - 'a' + 1) % 26);
                str += c;
            }
        }
        return str[k - 1];
    }
};
