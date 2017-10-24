#include<bits/stdc++.h>

using namespace std;

int main()

{
    float a ,b ,c;

    float x1 , x2, delta;
     cin>>a>>b>>c;
    delta = b * b - 4 * a * c;

    if(delta==0)

        cout << "solutie unica="<<(float)-b/2*a;
    else

        if(delta>0)
           {

           cout << "x1=" << (float)(-b+sqrt(delta))/(2*a) << '\n'  ;
           cout << "x2=" <<( float)(-b-sqrt(delta))/(2*a)  ;
           }
}
