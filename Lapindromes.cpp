#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string infix;
        cin >> infix;


        int counter1['Z'-'A']={0},counter2['Z'-'A']={0},flag=0;

        for(int i=0;i<infix.length()/2;i++)
        {
            counter1[infix[i]-'a']++;
        }
        for(int i=infix.length()-1;i>infix.length()/2;i--)
        {
            counter2[infix[i]-'a']++;
        }
        for(int i=0;i<'z'-'a';i++)
        {
            if(counter1[i]!=counter2[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }

    }
    return 0;
}
