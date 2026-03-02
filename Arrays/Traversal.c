#include <stdio.h>
#include <stdlib.h>

//Traversal of an array

int main(){

int a[50],size;
printf("Enter size of the array: ");
scanf("%d",&size);
printf("Enter %d elements in the array: ",size);
for(int i=0;i<size;i++){
    scanf("%d",&a[i]);
}
printf("Elements in the array are: ");
for(int i=0;i<size;i++){
    printf("%d ",a[i]);
}
printf("\n");
}

