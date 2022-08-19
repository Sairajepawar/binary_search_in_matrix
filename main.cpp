#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,key;
    cin>>r>>c>>key;
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    int midc=c/2;
    int sr,er,sc,ec;
    sr=0;
    er=r-1;
    //keeping row same
    int midr;
    label:
    midr=(er+sr)/2;
    sc=0;
    ec=c-1;
    while(sc<ec && a[midr][midc]!=key)
    {
        midc=(sc+ec)/2;
        if(a[midr][midc]>key)
        {
            ec=midc-1;
        }
        else
        {
            sc=midc+1;
        }
    }
    if(a[midr][midc]==key)
    {
        cout<<"YES";
        return 0;
    }
    else if(sr>er)
    {
        cout<<"NO";
        return 0;
    }
    else if(a[midr][midc]>key)
    {
        er=midr-1;
        goto label;
    }
    else if(a[midr][midc]<key)
    {
        sr=midr+1;
        goto label;
    }
}
