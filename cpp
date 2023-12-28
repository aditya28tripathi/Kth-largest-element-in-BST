class Solution
{
    public:
    int ans;
    void solve(Node *root , int k ,int &count){
        if(!root) return;
        
        solve(root->right,k,count);
        if(k==count){
            ans=root->data;
            count++;
            return;
        }
        else
        count++;
            solve(root->left,k,count);
        
    }
    int kthLargest(Node *root, int K)
    {
       int count = 1;
       ans=-1;
       solve(root,K,count);
       return ans;
    }
};
