// https://leetcode.com/problems/number-of-different-integers-in-a-string/description/
/*
class Solution {
public:
    int numDifferentIntegers(string word) {
        int n = word.size();
        set<long long> s;
        string k = "";

        for (int i = 0; i < n; i++) {
            if (isdigit(word[i])) {
                k += word[i];
            } else if (!k.empty()) {
                s.insert(stoll(k));
                k = "";
            }
        }

        // After the loop, if k is not empty, insert its value into the set
        if (!k.empty()) {
            s.insert(stoll(k));
        }

        return s.size();
    }
};
 */