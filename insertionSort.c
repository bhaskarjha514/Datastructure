#include <stdio.h>
#include <math.h>
void insertionSort(int a[], int sizec){
    int i,j,key;
     for(i=1;i<sizec;i++)
    {
        key=a[i];
        j=i-1;
    while(j>=0&&a[j]>key)
    {
        a[j+1]=a[j];
        j=j-1;
        
    } 
    a[j+1] = key;
    }
}
int main()
{ 
 int i,a[20],sizec;
 printf("enter the size of array");
 scanf("%d",&sizec);
 printf("enter the element of array");
 for(i=0;i<sizec;i++){
     scanf("%d",&a[sizec]);
 }
   
    insertionSort(a, sizec);
    
     for(i=0;i<sizec;i++){
        printf("%d",a[i]);
    }
    printf("\t");
   
    return 0;
}