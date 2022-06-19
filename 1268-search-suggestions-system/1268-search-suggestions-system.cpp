struct Trie{
    Trie* t[26];
    set<string> contains;
    void insert(string &word){
        Trie* root = this;
        for(char ch : word){
            if(root->t[ch-'a'] == NULL){
                root->t[ch-'a'] = new Trie();
            }
            root = root->t[ch-'a'];
            root->contains.insert(word);
        }
    }
};

class Solution {
public:
    void suggestedProductsHelper(Trie* root, string searchWord, vector<vector<string>> &res){
        for(int i=0; i< searchWord.size(); i++){
            char ch = searchWord[i];
            if(root->t[ch-'a'] == NULL){
                for(int j=i; j<searchWord.size(); j++){
                    res.push_back({});
                }
                return;
            }
            root = root->t[ch-'a'];
            set<string> contains = root->contains;
            auto it = contains.begin();
            vector<string> suggestions;
            for(int i=0; i<3 and it != contains.end(); i++){
                suggestions.push_back(*it);
                it++;
            }
            res.push_back(suggestions);
        }
    }
    void makeTrie(Trie* trie, vector<string>& products){
        for(string product : products){
            Trie* t = trie;
            t->insert(product);
        }
    }
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        Trie* trie = new Trie();
        vector<vector<string>> res;
        makeTrie(trie, products);
        suggestedProductsHelper(trie, searchWord, res);
        return res;
    }
};