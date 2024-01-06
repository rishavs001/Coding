#include <bits/stdc++.h>

using namespace std;

string Exception()
{
    return "String Error";
}

int main()
{
    try

    {
        try
        {
            throw(Exception());
        }
        catch (int a)
        {
            cout << "Integer Error";
        }
    }
    catch (string s)
    {
        cout << "ERROR " << s;
    }
    return 0;
}