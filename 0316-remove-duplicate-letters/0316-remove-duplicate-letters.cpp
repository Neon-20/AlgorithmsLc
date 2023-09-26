class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<char> st;
        int n = s.size();
        unordered_set<char> seen; // To keep track of characters already added to 'st'.

        for (int i = 0; i < n; i++) {
            if (seen.find(s[i]) == seen.end()) {
                // If the character is not in 'st', and it hasn't been seen before,
                // add it to 'st'.
                while (!st.empty() && s[i] < st.back() && s.find(st.back(), i) != string::npos) {
                    // Pop characters from 'st' if they are greater than the current character
                    // and still occur later in the string.
                    seen.erase(st.back());
                    st.pop_back();
                }
                st.push_back(s[i]);
                seen.insert(s[i]);
            }
        }

        return string(st.begin(), st.end());
    }
};