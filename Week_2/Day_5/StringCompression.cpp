void fill(vector<char>&chars,int &count,int &k,int &i,int &j)
{
              if(count==1)
                { 
                  chars[k]=chars[i];
                  k++;
                  i=j;
                  count=0;
                }
                else
                {
                if(count>=10)
            {
                chars[k]=chars[i];
                k++;
                stack<int>st;
    while(count!=0)
    {
        st.push(count%10);
        count=count/10;
    }
    count=0;
    
    while(!st.empty())
    {
        chars[k]=st.top()+'0';
        k++;
        st.pop();
    }
    i=j;

            }
                else
                {
                    chars[k]=chars[i];
                    k++;
                    chars[k]=count+'0';
                    k++;
                    count=0;
                    i=j;
                    
                }

    

}
}

class Solution {
public:
    int compress(vector<char>& chars) {
        int count=0;
        int i=0,j=0,k=0;
        while(j<chars.size())
        {   
            if(chars[i]==chars[j])
            {
                count++;
                j++;
            }
                
            else
            {
                fill(chars,count,k,i,j);
            }
        
                
                
            
        }
        if(count!=0)
        fill(chars,count,k,i,j);

        return k;
        
    }
};