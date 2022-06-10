class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        i,j,ans=0,0,0
        n=len(s)
        seen=set();
        while i<n and j<n:
            if s[j] not in seen:
                seen.add(s[j])
                ans=max(ans,int(len(seen)))
                j+=1
            else:
                seen.remove(s[i])
                i+=1
        return ans