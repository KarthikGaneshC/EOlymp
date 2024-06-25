#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
//Logic
    if((a<=1500) && (a>=1) && (b>=1)&&(b<=1500)){
       
        cout<<b%a<<endl;
    }
   
    return 0;
}
