class Solution {
public:
    bool isValid(string word) {
        if (word.length() < 3) return false;

        vector<char> vow = {'a','e','i','o','u'};
        vector<char> cons = {'b','c','d','f','g','h','j','k','l','m','n',
                             'p','q','r','s','t','v','w','x','y','z'};
        vector<char> dig = {'0','1','2','3','4','5','6','7','8','9'};

        bool hasVowel = false, hasConsonant = false;

        for (auto ch : word) {
            char i = tolower(ch);

            if (find(vow.begin(), vow.end(), i) != vow.end())
                hasVowel = true;
            else if (find(cons.begin(), cons.end(), i) != cons.end())
                hasConsonant = true;
            else if (find(dig.begin(), dig.end(), i) == dig.end())
                return false;
        }

        return hasVowel && hasConsonant;
    }
};