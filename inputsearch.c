#include<stdio.h> 
int main(){
    int a[20];
    int index,element,n,i,j;
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
    for (int i = 0; i < n; i++)

    if(a[i]==element)

     printf("search element found at index %d",i);
      
      
      
return 0;
}