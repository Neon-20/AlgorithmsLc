class Solution {
public:
    
   
  int find(vector<int> &parent,int u){
   
    if( parent[u] == u )  //path compression
      return u;
    return parent[u] = find(parent,parent[u]) ;
  }

  bool uni(vector<int> &parent,int u, int v)
  {
    int uroot = find(parent,u);//node for u
    int vroot = find(parent,v);// node for v

    if(uroot==vroot)
      return false;
    parent[uroot]=vroot;
    return true;
  }
    int minSwapsCouples(vector<int>& row) {
       int n=row.size();
        vector<int> parent(n);
        for(int i=0;i<n;i++){
            parent[i]=i;
        }
        for(int i=0;i<n-1;i+=2){
            parent[row[i+1]]=row[i];
        }
        int ans=0;
        for(int i=0;i<n-1;i+=2)
        {
            if(uni(parent,i,i+1)){
                ans++;
            }
        }
        return ans;
    }
};