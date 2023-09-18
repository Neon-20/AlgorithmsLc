import java.util.Vector;
class Solution {
    public int[] kWeakestRows(int[][] mat, int k) {
        PriorityQueue<int[]> pq = new PriorityQueue<>((a, b) -> {
            if (a[0] != b[0]) {
                return a[0] - b[0];
            } else {
                return a[1] - b[1];
            }
        });
        for(int i=0;i<mat.length;i++){
            int cnt=0;
            for(int j=0;j<mat[i].length;j++){
                 if(mat[i][j]==1) cnt++;
            }
            pq.offer(new int[]{cnt,i});
        }
        Vector<Integer> ans = new Vector<>();
        while(!pq.isEmpty() && k-->0){
            ans.add(pq.peek()[1]);
            pq.poll();
        }
        int result[] = new int[ans.size()];
        for(int i=0;i<ans.size();i++){
            result[i]=ans.get(i);
        }
        return result;
    }
}