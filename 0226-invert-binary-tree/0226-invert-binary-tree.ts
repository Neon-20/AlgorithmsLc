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

function invertTree(root: TreeNode | null): TreeNode | null {
   if(!root) return null; 
    const q: TreeNode[] = [];
    q.push(root);
    while(q.length>0){
        const node = q.shift() as TreeNode;
        if(node.left){
            q.push(node.left);
        }
        if(node.right){
            q.push(node.right);
        }
        const temp = node.left;
        node.left = node.right;
        node.right = temp;
    }
    return root;
};





