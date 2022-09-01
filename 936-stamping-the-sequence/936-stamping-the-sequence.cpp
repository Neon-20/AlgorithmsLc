class Solution {
public:
    int getIndex(string &stamp, string &currStr){
        for(int i=0;i<=currStr.size()-stamp.size();i++){
            int j=0;
            int index=i;
            bool allMark=true;  // We need this because there is no point in resetting a substring which is already full undone.
            while(j<stamp.size() && index<currStr.size() && (currStr[index]==stamp[j] || currStr[index]=='?')){
			/* it is ok, if curr contains ? and some stamp characters. The thing is, stamping does overlap, so once we undo a substring, we are undoing that stamp instance part,. So inshort, what I want to say is ? can be said as a wildcard char which can match with the current stamp char index. Because ? can be seen as the earlier character which existed there before something else was stamped on it*/
                if(currStr[index]!='?'){
                    allMark=false;
                }
                index++;
                j++;
            }
            if(j==stamp.size() && allMark==false){
                return i;
            }
        }
        return -1;
    }
    
    void update(string &stamp, string &curr, int index){
        for(int i=0;i<stamp.size();i++){
            curr[i+index]='?';
        }
    }
    
    vector<int> movesToStamp(string stamp, string target) {
        vector<int> res;
        int n=target.size();
        string curr=target;
        string T(n,'?');
        while(curr!=T){
            int StampIndex=getIndex(stamp,curr);
            if(StampIndex==-1){  //NOT FOUND
                return {};
            }
            update(stamp,curr,StampIndex);
            res.push_back(StampIndex);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};