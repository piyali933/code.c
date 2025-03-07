#include<stdio.h>
/*int linearsearch(int a[],int size,int element){
//linearsearch
for (int i = 0; i < size; i++)
{ 
    if(a[i]==element){
        return i;
    }
}
    return - 1;
}*/
//binarySearch
int binarysearch(int a[],int size,int element){
    int low, mid,high;
    low=0;
    high=size-1;
    while(low<=high){
    mid=(low+high)/2;
    if(a[mid]==element){
        return mid;
    }if(a[mid]>element){
        high=mid-1;
    }
        else{
            low=mid+1;
    }
}
return -1;
}

int main() {
int i;
int a[]={12,30,45,56,67,77,87,89,90,99,100,110,123,231,455,677,679};
int size=  sizeof(a)/sizeof(int);
int element=100;
int index = binarysearch(a,size,element);
printf("The searching element %d was found at index is : %d\n", element , index);
return 0;
}
