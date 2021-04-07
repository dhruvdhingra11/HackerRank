#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void update(int *a,int *b) {
    int temp;
    
      temp = *a;
      *a = (*a)+(*b);
      *b = temp -(*b);
     }
     
int main() {
    int a;
    int b;
    int *pa = &a, *pb = &b;
    
    cin>>a;
    cin>>b;
    
    update(pa,pb);
    
    cout<<a<<endl;
    cout<<fixed<<setprecision(0)<<fabs(b)<<endl;

    return 0;
}