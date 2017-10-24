#include <bits/stdc++.h>

using namespace std;

int power(int base , int exponent)
{
    while(exponent)

    return base*power(base,exponent-1);

    return 1;
}

int main ()

{
    int base,exponent;

    cin>>base>>exponent;

    cout<<power(base,exponent);


}
