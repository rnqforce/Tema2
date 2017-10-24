#include <bits/stdc++.h>

using namespace std;

int main()

{
    float  s2 ;

    int k=0 , s1;

    cin >> s2 ;

    s1=s2;

    s2=(s2-s1)*100;

    k=k+s1/100;
    s1=s1%100;
    k=k+s1/50;
    s1=s1%50;
    k=k+s1/20;
    s1=s1%20;
    k=k+s1/10;
    s1=s1%10;

    k=k+s1/5;

    s1=s1%5;

    k=k+s1/1;
    s1=s2;
    k=k+s1/50;

    s1=s1%50;

    k=k+s1/20;

    s1=s1%20;
    k=k+s1/5;

    s1=s1%5;

    k=k+s1/1;



    cout<<k;

}


