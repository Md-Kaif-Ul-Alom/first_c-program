#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i;
    int cnt[100];
    long long int b[100000];
    cin>>a;
    for(i=0; i<a; i++)
    {
        cin>>b[i];
    }
    for(i=0; i<a; i++)
    {
        if(b[i]%8==0)
        {
            b[i]=b[i]/8;
        }
        else
        {
            b[i]=b[i]/8+1;
        }
        if(b[i]==3)
        {
            cnt[i]=2;
        }
        else if(b[i]%6==0)
            cnt[i]=b[i]/3;
        else if(b[i]%6==1)
            cnt[i]=b[i]/3 +1;
        else
        {
            cnt[i]=b[i]/3 +2;
        }
    }
    cout<<"output"<<endl;
    for(int i=0; i<a; i++)
    {
        cout<<cnt[i]<<endl;
    }
    return 0;
}
