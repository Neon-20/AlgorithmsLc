class Solution {
public:
    class TrieNode {
public:
    unordered_map<char, TrieNode *> next;
};
    int minimumLengthEncoding(vector<string>& words) {
        TrieNode *root = new TrieNode;
        vector<pair<TrieNode *, int>> leaves;
        for (auto & w : unordered_set<string> (words.begin(), words.end())) {
            TrieNode *cur = root;
            for (int i = w.length() - 1; i >= 0; --i) {
                if (cur->next.count(w[i]) == 0) cur->next[w[i]] = new TrieNode;
                cur = cur->next[w[i]];
            }
            leaves.push_back(make_pair(cur, w.length() + 1));
        }
        int res = 0;
        for (auto leaf : leaves) if ((leaf.first->next).size() == 0) res += leaf.second;
        return res;
    }
};