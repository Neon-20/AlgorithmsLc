class Solution:
    def twoSum(self,nums,target):
        l,r=0,len(nums)-1
        while l<r :
            s=nums[l]+nums[r]
            if s == target :
                return [l+1,r+1]
            elif s>target:
                r-=1
            else: 
                l+=1
            
    