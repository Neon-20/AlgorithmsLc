class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
        int l=0;
        int r=n;
        while(l<r)
        {
            int mid=l+(r-l)/2;
             if(letters[mid]<=target) l=mid+1;
            else r=mid;
        }
        return letters[l%letters.size()];
    }
};