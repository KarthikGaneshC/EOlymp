#include <iostream>
#include<cmath>

using namespace std;

int main()
{
 signed int l,k,h;
  cin>>l;
  h=100;
  signed int temp=abs(l);
  for(int i=0; i<=2; i++){
        k=temp/h;
        temp=temp%h;
        h=h/10;
        cout<<k<<endl;
       
        
  }
      
  
  
 

    return 0;
}