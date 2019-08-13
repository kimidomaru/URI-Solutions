#include <iostream>
using namespace std;

int main()
{
    int n,hora=0,minuto=0,segundo=0;
    cin>>n;
    hora=n/3600;
    n=n%3600;
    minuto=n/60;
    n=n%60;
    segundo=n;
    cout<<hora<<":"<<minuto<<":"<<segundo<<endl;
    return 0;
}
