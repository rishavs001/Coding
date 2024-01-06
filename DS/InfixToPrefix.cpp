#include<bits/stdc++.h>
using namespace std;

void infixtopostfix(string s);

void reverseStr(string& str)
{
    int n = str.length();
  
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

int prec(char c)
{
    if(c=='^')
    {
        return 3;
    }
    else if(c=='/' || c=='*')
    {
        return 2;
    }
    else if(c=='+' || c=='-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int main()
{

    string s;
//    cout<<"Enter string\n";
 s="a+b*(c^d-e)^(f+g*h)-i";
//    cin>>s;
    reverseStr(s);
    //s.length();
    infixtopostfix(s);

    return 0;
}

void infixtopostfix(string s)
{
    stack<char>st;
    string result="";
    char c;
        for(int i=0;i<s.length();i++)
        {
            c=s[i];
            if((c>='A' && c<='Z')|| (c>='a' && c<='z') || (c>='0' && c<='9'))
            {
                result+=c;
            }

            else if(c==')')
            {
                st.push(c);
            }

            else if(c=='(')
            {
                while(st.top()!=')')
                {
                    result+=st.top();
                    st.pop();
                }
                st.pop();
            }

            else
            {
                while(!st.empty() && prec(s[i])<prec(st.top()))
                {
                    result+=st.top();
                    st.pop();
                }
                st.push(c);
            }
        }
        while(!st.empty())
        {
            result+=st.top();
            st.pop();
        }
        reverseStr(result);
        cout << result << endl;
}