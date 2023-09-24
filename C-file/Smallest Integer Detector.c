#include <stdio.h>
#include <stddef.h>

int smallestInteger(int val[], int size){
    int smallest = val[0];
    
    for (int i=1; i<=size; i++) {
        if (val[i]<smallest){
            smallest = val[i];
        }
    }

    return smallest;
}
int main() {
    int size;
    
    printf("Enter the size of the Array: ");
    scanf("%d", &size);

    int myArr[size];

    for(int i=0; i<size; i++){
        printf("Enter value for Number %d: ", i+1);
        scanf("%d", &myArr[i]);
    }
    int result = smallestInteger(myArr, size);
    printf("Smallest integer in the array: %d\n", result);
    
    return 0;
}