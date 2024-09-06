#include <stdio.h>
#include <string.h>

int main()
{
    char db[4][4][12] = {
                        {"ENG23CS0267", "ENG23CS5507", "ENG23CS3423", "ENG23CS2324"}, 
                        {"ENG23CS3242", "ENG23CS2432", "ENG23CS1241", "ENG23CS2342"},
                        {"ENG23CS2134", "ENG23CS1342", "ENG23CS4231", "ENG23CS3421"},
                        {"ENG23CS4231", "ENG23CS3421", "ENG23CS1342", "ENG23CS2134"}
                        };

    char key[12];
    int found = 0; // Flag to track if the key is found

    printf("Enter the key: ");
    scanf("%s", key);

    for(int i = 0; i < 4 && !found; i++) // Iterate over rows
    {
        for(int j = 0; j < 4; j++) // Iterate over columns
        {
            if(strcmp(key, db[i][j]) == 0)
            {
                printf("The given USN is present in the database\n");
                found = 1; // Set the flag to indicate that the key has been found
                break; // Exit the inner loop once found
            }
        }
    }

    if (!found)
    {
        printf("The given USN is not present in the database\n");
    }

    return 0;
}
