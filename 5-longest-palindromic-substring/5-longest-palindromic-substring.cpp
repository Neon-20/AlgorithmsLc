class Solution {
public:
 string get_pal(string s,int left,int right){
     int n=s.length();
     while(left>=0 and right<n){
         if(s[left]!=s[right]){
             break;
         }
         left--;
         right++;
     }
     return s.substr(left+1,right-left-1);
 }
    string longestPalindrome(string s) {
     int n=s.length();
        //Now we can do a two pointer approach
        //Center se checking kr rha hu
        if(s.empty()) return 0;
        string longest;
        for(int i=0;i<n;i++){
            string odd=get_pal(s,i,i);
            if(odd.length()>longest.length())
                longest=odd;
        }
        for(int i=0;i<n;i++){
            string even=get_pal(s,i,i+1);
            if(even.length()>longest.length())
                longest=even;
        }
        return longest;
    }
};