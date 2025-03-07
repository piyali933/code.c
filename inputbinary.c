#include<stdio.h> 
int main(){
    int a[20];
    int element,n,low,mid,high,i;
    printf("the string is:");
    scanf("%d",&n);
     for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("show string\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");

    printf("the searching element is: ");
    scanf("%d",&element);

    low=0;
    high=n-1;
    mid=(low+high)/2;
    while(low<=high){
        if(a[mid]<element){
        low=mid-1;
        }
    if(a[mid]==element){
      printf("search element found at index %d",mid);
      break;
    }
   else{
            high=mid-1;
        mid=(low+high)/2;
    }
    }
    return 0;
}