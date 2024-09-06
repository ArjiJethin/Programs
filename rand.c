#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    long long temp; 
    long long max = 999999999999;
    long long min = 100000000000;

    srand(time(0)); 
    temp = (rand() % max) + min; 

    printf("%lld\n", temp); 

    return 0;
}
