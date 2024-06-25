#include <iostream>
#include<cmath>
using namespace std;

int main() {
    long long int i,n;
    cin>>i;
    n=abs(i);
   while(n>=10){
       n=n/10;
   }
   cout<<n<<endl;
    return 0;
}