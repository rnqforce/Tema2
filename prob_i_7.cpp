#include<bits/stdc++.h>

using namespace std;

int main()

{
    int nr,ok=1;

    cin>>nr;

    for(int i=2 ; i <nr/2 ; ++i)
    {
        if(nr%i==0)
            ok=0;
    }

     if(ok)
        cout<<"Numaru este prim";

     else
        cout<<"Numarule nu este prim";
}
