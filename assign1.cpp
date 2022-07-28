#include<iostream>
using namespace std; 
int main()
{ int arr1[3][3] ={{1,2,3},{4,5,6},{7,8,9}}; 
int* ptr = &arr1[0][0]; 
/*int** pptr = &ptr;
for(int i=0;i<9;i++)*/
 cout<<ptr<<" ";
    return 0;
}