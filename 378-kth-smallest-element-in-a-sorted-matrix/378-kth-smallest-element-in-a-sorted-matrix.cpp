class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
         int l=matrix[0][0];
         int r=matrix[n-1][n-1];
       int mid=0;
        while(l<r)
        {
             int cnt=0;
            int mid=l+(r-l)/2;
            for(int i=0;i<n;i++)// We iterate for each row and then find all elements 
                //Less than given mid and which satisfy the kth smallest criteria
            {
                int it1=upper_bound(begin(matrix[i]),end(matrix[i]),mid)-begin(matrix[i]);
                cnt+=it1;
            }
            if(cnt<k)
            {
                l=mid+1;
            }
            else
            {
                r=mid;
            }
        }
        return l;
    }
};