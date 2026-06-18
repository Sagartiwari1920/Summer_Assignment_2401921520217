class Solution {
public:
    bool isValid(string s) {
       int n=s.size();
       stack<char>st;
       for(char c:s)
       {
        if(c==')'|| c=='}'|| c==']')
        {
            if(st.empty() || st.top()!=c)
            {
                return 0;
            }
            else
            {
              st.pop();
            }
            

        }
        else
            {
                if(c=='(')
                st.push(')');
                else if(c=='{')
                st.push('}');
                else if(c=='[')
                st.push(']');
            }
       } 
       return st.empty();
    }
};