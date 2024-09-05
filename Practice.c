#include<stdio.h>
#include<string.h>
int dict();
void main()
{
    int DD1, DD2;
    char MM1[3], MM2[3];
    int YY1, YY2;

    printf("Enter 1st date (DD MMM YYYY): ");
    scanf("%d %s %d",&DD1,&MM1,&YY1);
    printf("Enter 2nd date (DD MMM YYYY): ");
    scanf("%d %s %d",&DD2,&MM2,&YY2);
    int monthnum1 = dict(strlwr(MM1));
    int monthnum2 = dict(strlwr(MM2));

    printf("%d %d", monthnum1,monthnum2);


    


}

int dict(char month)
{
    char Months[13] = {"jan", "feb", "mar", "apr", "may", "jun", "jul", "aug", "sep", "oct", "nov", "dec"};
    
    for(int i = 0; i < 12; i++)
    {
        if(strcmp(month, Months[i]) == 0)
        {
            return i + 1;
        }
    }

    
}
