#include <stdio.h>

int main() {
   int a[100];
   int size;
   int i;
  
   printf("Enter size of array: ");
   scanf("%d",&size);

   printf("Enter elements of array: ");
   for(i=0;i< size;i++){
    scanf("%d",&a[i]);
   }
   
   printf("The elements of array are:\n ");
   for(i=0;i<size;i++){
    printf("%d",a[i]);
    
   }
    return 0;
}

