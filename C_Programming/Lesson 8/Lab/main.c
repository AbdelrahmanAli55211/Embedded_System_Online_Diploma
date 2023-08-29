#include "stdio.h"
#include "string.h"
int main()
{
    int x;
    printf("Enter the lab number: ");
    fflush(stdout);
    scanf("%d",&x);
    switch(x)
    {
        //!average of weights
        case 1:
        {
            float arr[5];
            float sum=0,avg;
            float *pf=arr;
            printf("Enter the weights: ");
            fflush(stdout);
            for(int i=0;i<5;i++)
            {
                scanf("%f",pf);
                pf++;

            }
            pf=arr;
            printf("Printing the weights: \n");
            for(int i=0;i<5;i++)
            {
                printf("%f ",*(pf+i));
            }
            printf("\n");
            for(int i=0;i<5;i++)
            {
                sum+=*(pf);
                pf++;
            }
            printf("avg= %f",sum/5);
        }
        break;
       
    }

    return 0;
}