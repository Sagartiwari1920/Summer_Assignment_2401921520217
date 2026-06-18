class Solution {
public:
void solver(int open,int close,string op,vector<string>&ans)
{
    if(open==0 && close==0)
    {
        ans.push_back(op);
        return ;
    }
    if(open!=0)
    {
        string op1=op;
        op1.push_back('(');
        solver(open-1,close,op1,ans);
    }
    if(close > open)
    {
        string op2=op;
        op2.push_back(')');
        solver(open,close-1,op2,ans);
    }
}
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string op="";
        int open=n;
        int close=n;
        solver(open,close,op,ans);
        return ans;
    }
};