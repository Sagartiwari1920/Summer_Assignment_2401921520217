class Solution {
public:
    string decodeString(string s) {
        stack<int>num;
        stack<string>str;
        for(int i=0;i<s.size();i++)
        {
            string ch(1,s[i]);
             if(s[i]>='0' && s[i]<='9')
           {int rep=0;
            while(i<s.size() && s[i]>='0' && s[i]<='9' )
            {
                rep=rep*10+(s[i]-'0');
                i++;
            }
            num.push(rep);
            i--;
           }
           else if((s[i]>='a' && s[i]<='z') || (s[i]=='['))
           {
            str.push(ch);
           }
           
           else
           {
            string p;
            while(str.top()!="[")
            {
               p=str.top()+p; 
               str.pop();
            }
            str.pop();
            int n=num.top();
            num.pop();
            string q;
            while(n--)
            q=q+p;

            str.push(q);
            p.clear();
            q.clear();
           
            

           }
        }
        string ans = "";
        while (!str.empty()) {
        ans = str.top() + ans;
        str.pop();
}
return ans;

    }
};