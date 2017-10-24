#include <bits/stdc++.h>

using namespace std;

int cmmdc(int a,int b)
{
    if(a==b)
        return a;
    else if(a<b)
           return cmmdc(a,b-a);
           else
           return cmmdc(a-b,b);
}

int main()

{

    int x1,x2;

    cin>> x1 >> x2;

    cout<<cmmdc(x1,x2);
}

