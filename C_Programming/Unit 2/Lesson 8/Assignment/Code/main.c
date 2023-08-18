#include "stdio.h"
#include "string.h"
struct emp
{
    char name[25];
    int id;
};
int main()
{
    int prob_num;
    printf("Enter the problem number: ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&prob_num);
    switch(prob_num)
    {
        //! Handling the pointers
        case 1:
        {
            int m=29,*ab;
            printf("Address of m= 0x%x \nvalue of m=%d",&m,m);
            ab=&m;
            printf("\nNow ab is assigned with the address of m\n");
            printf("Address of pointer ab=0x%x \ncontent of pointer ab =%d\n",ab,*ab);
            *ab=34;
            printf("now m is assigned with 34!\n");
            printf("Address of pointer ab=0x%x \ncontent of pointer ab =%d\n",ab,*ab);
            *ab=7;
            printf("the pointer ab is assigned with 7 now!\n");
            printf("Address of m= 0x%x \nvalue of m=%d",&m,m);


        }
        break;
        case 2:
        {
            char alph[27];
            char *pc=alph;
            char ch='A';
            for(int i=0;i<27;i++,ch++,pc++)
            {
                *pc=ch;
            }
            pc=alph;
            for(int i=0;i<26;i++,pc++)
            {
                printf("%c  ",*pc);
            }
        }
        break;
        case 3:
        {
            char name[25];
            char *pc;
            printf("Enter the string: ");
            fflush(stdin);fflush(stdout);
            gets(name);
            int size=strlen(name);
            pc=&name[size-1];
            for(int i=size-1;i>=0;i--,pc--)
            {
                printf("%c",*pc);
            }
        }
        break;
        case 4:
        {
            int arr[25];
            int size;
            int* ptr;
            printf("Enter the number of elements you want to enter(max 25): ");
            fflush(stdin);fflush(stdout);
            scanf("%d",&size);
            printf("Enter the element: ");
            fflush(stdin);fflush(stdout);
            ptr=arr;
            for(int i=0;i<size;i++,ptr++)
            {
                scanf("%d",ptr);
            }
            ptr--;
            printf("Reverse:\n");
            for(int i=size-1;i>=0;i--,ptr--)
            {
                printf("%d\n",*ptr);
            }
                
        
        }
        break;
        case 5:
        {
            struct emp emp1={"Ahmed",1};
             struct emp emp2={"Omar",2};
              struct emp emp3={"Shady",3};
            struct emp* arr[3]={&emp1,&emp2,&emp3};
            struct emp* (*p)[3];
            p=arr;
            for(int i=0;i<3;i++)
            {
                printf("Name: %s , ID= %d\n",(**p+i)->name,(**p+i)->id);
                
            }
           
        }
    }
}