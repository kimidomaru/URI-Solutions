#include <iostream>
using namespace std;

int main()
{
    int n,ano=0,mes=0,dia=0;
    cin>>n;
    ano=n/365;
    n=n%365;
    mes=n/30;
    n=n%30;
    dia=n;
    cout<<ano<<" ano(s)"<<endl;
    cout<<mes<<" mes(es)"<<endl;
    cout<<dia<<" dia(s)"<<endl;
    return 0;
}
