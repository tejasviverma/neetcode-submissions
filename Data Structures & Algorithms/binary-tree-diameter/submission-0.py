# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        def dfs(node):
            if not node:
                return 0,0
            
            leftH, leftD = dfs(node.left)
            rightH, rightD = dfs(node.right)

            height = 1 + max(leftH, rightH)
            diameter = max(leftD, rightD, leftH+rightH)

            return height, diameter
        
        return dfs(root)[1]