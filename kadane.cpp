#include<iostream>
using namespace std;  
int max_sub_array(int arr[],int size){
   int  max_so_far=INT_MIN;
   int max_end_here = 0; 
   for (int i = 0; i < size; i++)
   {if(arr[i]<=max_end_here+arr[i])  
   max_end_here+=arr[i]; 
   else
   max_end_here = arr[i];
   if (max_so_far< max_end_here)
   max_so_far =max_end_here;   
   }
 return max_so_far;
}
int main()
{ int arr[]={-4,4,0,-2,5,-6}; 
int n = sizeof(arr)/sizeof(arr[0]); 
int max_sum = max_sub_array(arr,n);
    cout<<"max contignous sum is :"<<max_sum;
    return 0;
} 