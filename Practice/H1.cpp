#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    long int a;
    long b;
    char s;
    float c;
    double d;
    
    cin>>a>>b>>s>>c>>d;
    
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<s<<endl;
    cout<<setprecision(3)<<fixed<<c<<endl;
    cout<<setprecision(9)<<fixed<<d<<endl;
    
    
    return 0;
}