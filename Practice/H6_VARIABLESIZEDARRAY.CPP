#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a,b,x=0;    
    cin>>a>>b;  //a is size of array which will hold the arrays // b is no of queries
    
    int *arr[a];  // initializing array which has to store
    
    while(a--)   //will run till the no. of elements in array a
    {
        int n;
        cin>>n;  //taking size of array which is to be stored in arr[a]
        
        arr[x]=new int[n];  //making new array in arr a
        
        for(int i=0;i<n;i++){
            cin>>arr[x][i]; //at array a storing values of new array
        }
        x++;
    }
    
    while(b--)  //for queries
    {
        int x,y;
        cin>>x>>y;
        cout<<arr[x][y]<<endl; //printing queries
    }
    return 0;
}