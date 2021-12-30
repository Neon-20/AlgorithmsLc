class Solution {
public:
    
    static bool compare(pair<string,int> &a, pair<string,int> &b)
    {
        if(a.first.length() == b.first.length())
        {
            return a.second < b.second;
        }
        return a.first.length() < b.first.length();
    }
    
    string arrangeWords(string text) {
       int n = text.length();
        if(n==1)
            return text;
        
        text[0] += 32;
        
        stringstream st(text);
        string word;
        vector<pair<string,int>>a;
        int c = 0;
        while(st>>word)
        {
            a.push_back({word,c});
            c++;
        }
        sort(a.begin(),a.end(),compare);
        text = "";
        text = a[0].first;
        
        for(int i=1;i<a.size();i++)
        {
            text += ' ';
            text += a[i].first;
        }
        text[0] -= 32;
        return text;
    }
};