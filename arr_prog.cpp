//array_prog
#include<iostream> 
using namespace std;
int swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp; 
    return *a,*b;
}
int main() 
{ int a=12; 
int b=18;
swap(&a,&b); 
cout<<a<<" "<<b;
    return 0;
}