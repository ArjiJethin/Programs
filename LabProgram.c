#include <stdio.h>

int main()
{
    int size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    char arr[size + 1];
    //char arr[size];

    getchar(); 

    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%c", &arr[i]);
        getchar(); 
    }

    arr[size] = '\0';

    printf("Array elements: %s\n", arr);

    return 0;
}
