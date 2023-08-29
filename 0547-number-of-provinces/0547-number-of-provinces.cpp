class UnionFind {
    private:
    vector<int> parent,rank;
    
    public:
    UnionFind(int size){
        parent.resize(size);
        rank.resize(size,0);
        for(int i=0;i<size;i++){
            parent[i]=i;
        }
    }
    int find(int x){
        if(parent[x]!=x) parent[x] = find(parent[x]);
        return parent[x];
    }
    
    void union_set(int x,int y){
        int xset = find(x),yset=find(y);
        if(xset == yset){
            return ;
        }
        else if(rank[xset]<rank[yset]){
            parent[xset]=yset;
        }
        else if(rank[xset]>rank[yset]){
            parent[yset]=xset;
        }
        else{
            parent[yset]=xset;
            rank[xset]++;
        }
    }     
};


class Solution {
public:
    int findCircleNum(vector<vector<int>>& nums) {
       int n= nums.size();
       UnionFind obj = UnionFind(n);
       for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
               if(1 == nums[i][j]){
                   obj.union_set(i,j);
               }
           }
       }
        set<int> s;
        for(int i=0;i<n;i++){
            s.insert(obj.find(i));
        }
        return s.size();
    }
};









