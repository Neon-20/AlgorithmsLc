class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        stringstream take(s);
        string temp;
        while(take >> temp)
        words.push_back(temp);
        
        string answer;
        for(int i=words.size()-1;i>=0;i--)
        {
            if(i!=words.size()-1)
                answer += " ";
            answer += words[i];
        }
        return answer;
    }
};
// Time complexity O(n) and space cmplexity O(n)