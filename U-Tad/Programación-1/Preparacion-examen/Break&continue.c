#include<stdio.h>

int     main()
{
    int num = 0; 
    while(num < 7); 
    {
        num++; 
        if (num == 2)
        {
            break;; 
        }
        printf("%i\n",num);
        num++; 
    }
    return 0;
}