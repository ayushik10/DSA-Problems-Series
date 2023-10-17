/*
1361. Validate Binary Tree Nodes

Problem Link:- https://leetcode.com/problems/validate-binary-tree-nodes/?envType=daily-question&envId=2023-10-17

You have n binary tree nodes numbered from 0 to n - 1 where node i has two children leftChild[i] and rightChild[i], return true if and only if all the given nodes form exactly one valid binary tree.

If node i has no left child then leftChild[i] will equal -1, similarly for the right child.

Note that the nodes have no values and that we only use the node numbers in this problem.

Input: n = 4, leftChild = [1,-1,3,-1], rightChild = [2,3,-1,-1]
Output: false

*/

// SOLUTION FUNCTION
class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        vector<int>indegree(n,0);
        for(int i=0;i<n;i++){
            if(leftChild[i]!=-1) indegree[leftChild[i]]++;
            if(rightChild[i]!=-1) indegree[rightChild[i]]++;
        }
        int root=-1;
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                if(root==-1) root=i;
                else
                    return false;
            }
        }
        if(root==-1) return false;
        vector<bool>visited(n,false);
        queue<int>q;
        q.push(root);
        while(!q.empty()){
            int node=q.front();
            q.pop();
            if(visited[node]) return false;
            visited[node]=true;
            if(leftChild[node]!=-1) q.push(leftChild[node]);
            if(rightChild[node]!=-1) q.push(rightChild[node]);
        }
        return accumulate(visited.begin(),visited.end(),0)==n;
    }
};