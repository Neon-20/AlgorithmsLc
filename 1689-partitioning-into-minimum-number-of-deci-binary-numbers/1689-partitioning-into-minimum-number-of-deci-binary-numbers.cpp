class Solution {
public:
    int minPartitions(string s) {
        // split into deci-binary numbers
        int n=s.size();
        // 20 numbers we can choose
       //just the answer is the max digit
        int mx=0;
        for(int i=0;i<n;i++){
            mx=max(mx,s[i]-'0');
        }
        return mx;
    }
};