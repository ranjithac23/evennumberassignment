#include <iostream>
using namespace std;
 
int main()
{
    int a;
    int i;
    cout<<"enter the number"; 
    cin>>a;
    cout<<"the even numbers are";
    for(i=0;i<=a;i++)
    {
      if(i%2==0)
      {
        cout<<i;
      }
    }
    
    return 0;
}
