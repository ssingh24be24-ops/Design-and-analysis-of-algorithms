#include <iostream>
using namespace std;
int binarysearch(int arr[],int key,int low,int high)
{   if(low>high)
{   return -1;}
    int mid=(high+low)/2;
    
    if(arr[mid]>key){
        
        return binarysearch(arr,key,low,mid-1);
    }
    else if(arr[mid]<key)
    {
       return binarysearch(arr,key,mid+1,high);
        
    }
    else{
        return mid;
    }
}


int main() {
    int arr[]={2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int key=binarysearch(arr,23,0,9);
    cout<<key;
    return 0;
    

  
}
