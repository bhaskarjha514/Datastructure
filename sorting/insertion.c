
#include <stdio.h>
int a[20],i,size,j,key;

void insertion(int a[],int size){
 
        
   for(i=1;i<size;i++)
    {
        key=a[i];
        j=i-1;
    
    while(j>=0&&a[j]>key)
    {
        a[j+1]=a[j];
        j=j-1;
        
    }
    a[j+1]=key;
}

}

int main()
{
    printf("enter the size of array: ");
    scanf("%d",&size);
    printf("enter the element of array:");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    insertion( a, size);
    for(i=0;i<size;i++){
        printf("the value of sort is %d\n",a[i]);
    }
  
   return 0;
}
