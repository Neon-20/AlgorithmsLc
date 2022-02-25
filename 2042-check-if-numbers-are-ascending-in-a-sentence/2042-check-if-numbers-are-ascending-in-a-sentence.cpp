class Solution {
public:
    bool areNumbersAscending(string s) {
        int n=s.size();
        stringstream ss(s);// stringstream me words store ho jaega
        string words;
        vector<int> ans;
        while(ss>>words)
        {
            if(words[0]<='9' and words[0]>='0')
                ans.push_back(stoi(words));
        }
        // Now we got our answer in a vector
        for(int i=1;i<ans.size();i++)
        {
            if(ans[i]<=ans[i-1])
                return false;
        }
        return true;
    }
};