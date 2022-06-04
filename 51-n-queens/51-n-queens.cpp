class Solution {
public:
   unordered_set<int> col,pos,neg;
    vector<vector<string>> ans;
    
    void dfs(int row,int n,vector<string> &put){
        if(row>=n){//out of bounds
         ans.push_back(put);
           return; 
        }
      for(int val=0;val<n;val++){
          if(col.count(val) or pos.count(row+val) or 
             neg.count(row-val)){
              continue;
          }
          else{//Do backtracking calls
              col.insert(val);
              pos.insert(row+val);
              neg.insert(row-val);
              put[row][val]='Q';
              dfs(row+1,n,put);
              col.erase(val);
              pos.erase(val+row);
              neg.erase(row-val);
              put[row][val]='.';
          }
      }
    }
    vector<vector<string>> solveNQueens(int n) {
        //each queen will be at different row position
        //We can have 3 sets
       vector<string> put(n,string(n,'.'));
       dfs(0,n,put);
        return ans;
    }
    
};