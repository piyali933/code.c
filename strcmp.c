#include<stdio.h>
#include<stdlib.h>
void show(int a[],int n);
int setval(int a[],int size,int index );
int main(){
    int a[30]={78,45,88,90,67,89};
    int size=6,index=3;
    printf("show element are:\n");
    show(a,size);
    setval(a,size,index);
    size-=1;
    printf("show insertion element are:\n");
    show(a,size);
    return 0;
}
void show(int a[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}
int setval(int a[],int size,int index ){
    
        for (int i = index; i <=size-1 ; i++)
        {
            a[i]=a[i+1];
        }
     
       return 1;
    }
