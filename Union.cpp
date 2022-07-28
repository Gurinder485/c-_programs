#include <iostream>
using namespace std;
int main()
{ int a[]={9,7,3,4,};
int b[]={3,4,9,6,7};
static int c[10];
int* p = a;
int* q = b;
for(int j=0;j<4;j++){
   for(int i=0;i<4;i++) {
       if(*(p+j)==*(q+i))
       {
         c[i]=b[i];
       }
   }} 
int n = sizeof(c)/sizeof(c[0]);
   for(int k=0;k<4;k++)
    cout<<c[k]<<" ";
    return 0;
}
