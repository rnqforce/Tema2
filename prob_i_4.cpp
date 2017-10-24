#include<bits/stdc++.h>

using namespace std;

int main()

{
    float ok=1,nr=0,x,s=0;
    ifstream f1("date.in");
    while(f1>>x)
    {
        if(x<5)
            ok=0;
        if(x<8)
            nr++;
        s++;
    }
    cout<<nr<<" "<<s;
    if(ok)
        cout<<"YES";
    else
        cout<<"NO";
     cout<<'\n';
     float p=nr/s;
    cout<<"Procentaj studenti care au obtinut mai putin de nota 8 =  "<<p*100;


}
