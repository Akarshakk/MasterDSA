#include <stdio.h>
#include <stdlib.h>

///Insertion at a specific position in an array

int main(){

int a[50],size,num,pos;
printf("Enter size of the array: ");
scanf("%d",&size);
printf("Enter %d elements in the array: ",size);
for(int i=0;i<size;i++){
    scanf("%d",&a[i]);
}
printf("Enter the number to be inserted: ");
scanf("%d",&num);
printf("Enter the position where the number is to be inserted: ");
scanf("%d",&pos);

printf("Elements in the array are before insertion: ");
for(int i=0;i<size;i++){
    printf("%d ",a[i]);
}

//Logic:
for(int i=size-1;i>=pos-1;i--){
    a[i+1]=a[i];
}
a[pos-1]=num;

printf("\nElements in the array are after insertion: ");
for(int i=0;i<size+1;i++){
    printf("%d ",a[i]);
}
printf("\n");
}