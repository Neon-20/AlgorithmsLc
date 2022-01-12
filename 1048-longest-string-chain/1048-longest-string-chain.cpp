class Solution {
public:
    
  
   int longestStrChain(vector<string>& words) {
        unordered_map<string,int>  mp;
          int res=1;//
        int n=words.size();
        sort(words.begin(),words.end(), [] (const std::string& first, const std::string& second){ return first.size() < second.size();});
      
        
        for(int i=0;i<words.size();i++)
        {
            for(int j=0;j<words[i].size();j++)
            {
                string sub=words[i].substr(0,j)+words[i].substr(j+1);
                if(mp.find(sub)!=mp.end())
                {
                    mp[words[i]]=max(mp[words[i]],mp[sub]+1);
                }
                else
                {
                    mp[words[i]]=max(mp[words[i]],1);
                }
            }
            res=max(res,mp[words[i]]);
        }
        return res;
    }
};