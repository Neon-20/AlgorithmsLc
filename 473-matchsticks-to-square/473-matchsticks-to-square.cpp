class Solution {
public:
    int getsum;
    vector<int> t;
    bool makesquare(vector<int>& a) {
        int sum=accumulate(a.begin(),a.end(),0);
        if(sum%4) 
            return false;
        getsum=sum/4;
        t.resize(1<<(a.size()+1),-1);
        return solve(a,4,0,0,0);
    }
    bool solve(vector<int>& a, int k, int cursum, int mask, int i){
        if(k==1) // 3 sides have sum%4 then automatically 4 side will also equals to sum%4
            return true;
        if(i>=a.size())
            return false;
        if(t[mask]!=-1)
            return t[mask];
        if(cursum==getsum)
            return t[mask]=solve(a,k-1,0,mask,0); // If one is done we try to find for next side
        for(int j=i; j<a.size(); j++){
			//!(mask&(1<<j)) -> to check whether this matchstick has been chosen earlier 
            if(!(mask&(1<<j)) and a[j]+cursum<=getsum and solve(a,k, a[j]+cursum,mask|(1<<j),j+1))
                return t[mask]=true;
        }
        return t[mask]=false;
    }
};