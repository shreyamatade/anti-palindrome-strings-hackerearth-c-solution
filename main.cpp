#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1; string s2;
    cin>>s1;
    s2=s1;
    reverse(s1.begin(),s1.end());


    if(s1==s2)
    {
        cout<<"-1"<<endl;
    }
    else if(s1!=s2)
    {
        sort(s1.begin(),s1.end());
        cout<<s1<<endl;
    }
    }
}
