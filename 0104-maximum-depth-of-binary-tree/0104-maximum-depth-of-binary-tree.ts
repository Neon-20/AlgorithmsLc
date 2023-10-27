/**
 * Definition for a binary tree node.
 * class TreeNode {
 *     val: number
 *     left: TreeNode | null
 *     right: TreeNode | null
 *     constructor(val?: number, left?: TreeNode | null, right?: TreeNode | null) {
 *         this.val = (val===undefined ? 0 : val)
 *         this.left = (left===undefined ? null : left)
 *         this.right = (right===undefined ? null : right)
 *     }
 * }
 */

interface TreeNode{
    val:number;
    left:TreeNode | null;
    right:TreeNode | null;
}

function maxDepth(root: TreeNode | null): number {
   if(!root){
       return 0;
   }
    const q:TreeNode[] = [];
    q.push(root);
    let depth = 0;
    while(q.length>0){
        let sz = q.length;
        depth+=1;
        for(let i=0;i<sz;i++){
            const node = q.shift() as TreeNode;
            if(node.left){
                q.push(node.left);
            }
             if(node.right){
                q.push(node.right);
            }
        }
    }
    return depth;
};







