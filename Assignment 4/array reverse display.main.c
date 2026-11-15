#include <stdio.h>

int main(){
    int i;
    int n;
    printf("Input the number of elements to store in the array: ");
    scanf("%d",&n);
    printf("Input %d number of elements in the array : \n",n);
int arr[i];
for(i=0;i<n; i++){
    printf("element - %d:",i);
    scanf("%d",&arr[i]);
    }
printf("The values stored into the array are: ");
for (i=0;i<n; i++){
    printf("%d ",arr[i]);
}
printf("\nThe values stored into the array in reverse are: ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);}

    return 0;
}
