#include<bits/stdc++.h>

using namespace std;

int main()

{
    int Ai,n,mn=1000000,mx=-1000000;

    cin>>n;

    for(int i =0 ; i < n ; ++i)
    {
        cin>>Ai;

        mn=min(Ai,mn);

        mx=max(Ai,mx);
    }

    cout<<"Minimul : "<<mn<<'\d' ;

    cout<<"Maximul : "<<mx ;

}
