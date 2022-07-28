#include<iostream>
using namespace std;  
int fibo(int n){ 
    static int a=0,b=1,temp;
    if (n>0)
    {temp =a+b;
       cout<<temp<<" ";
       a=b;
    b=temp; /* code */
    fibo(n-1);}return 0;
}
int main()
{ int n;
    cout<<"enter n number : ";
    cin>>n;
    cout<<0<<" "<<1<<" ";
    fibo(n-2);
    return 0;
} 