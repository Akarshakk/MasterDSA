#include <stdio.h>
#include <stdlib.h>

///Deletion at a specific position in an array

int main(){

int a[50],size,pos;
printf("Enter size of the array: ");
scanf("%d",&size);
printf("Enter %d elements in the array: ",size);
for(int i=0;i<size;i++){
    scanf("%d",&a[i]);
}
printf("Enter the position where the number is to be deleted: ");
scanf("%d",&pos);

printf("Elements in the array are before deletion: ");
for(int i=0;i<size;i++){
    printf("%d ",a[i]); 
}

//Logic:
for(int i=pos-1;i<size-1;i++){
    a[i]=a[i+1];
}
size--;

printf("\nElements in the array are after deletion: ");
for(int i=0;i<size;i++){
    printf("%d ",a[i]);
}
printf("\n");
}