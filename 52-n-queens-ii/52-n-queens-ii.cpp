class Solution {
public:
     unordered_set<int> cols,pos,neg;
    int cnt=0;
    void dfs(int row,int n,vector<string> &boards){
        if(row>=n){
            cnt++;
            return;
        }
        for(int col=0;col<n;col++){
    if(cols.count(col) or pos.count(row+col) or
       neg.count(row-col)){
        continue;
    }
        else{
            cols.insert(col);
            pos.insert(row+col);
            neg.insert(row-col);
            boards[row][col]='Q';
            dfs(row+1,n,boards);
            cols.erase(col);
            pos.erase(row+col);
            neg.erase(row-col);
            boards[row][col]='.';
        }
    }
}
    int totalNQueens(int n) {
        //for returning the number of distinct solutions we have as
       vector<string> boards(n,string(n,'.'));
        dfs(0,n,boards);
        return cnt;
    }
};