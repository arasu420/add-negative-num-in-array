#include <iostream>
#include <string>
using namespace std;
int main()
{
   int a[1000],n,sum=0;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
       
       }       
    for(int i=0;i<n;i++)
   {
       
       if(a[i]<0)
       {
       sum=sum+a[i];
       }
       }
cout<<sum;
}
