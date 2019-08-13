#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int a,b,c,maior=-1515616515;
    cin>>a;
    maior=a;
    cin>>b;
    if(b>maior)
        maior=b;
    cin>>c;
    if(c>maior)
        maior=c;
    cout<<maior<<" eh o maior"<<endl;
    return 0;
}
