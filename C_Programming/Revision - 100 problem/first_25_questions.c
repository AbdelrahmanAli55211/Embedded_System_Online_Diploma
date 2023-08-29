#include "stdio.h"
#include "string.h"
#include "math.h"
#define maxi 20
void repeated_element(char *arr,int *max,char *ch)
{
    *max=0;
    int max2;
    for(int i=0;arr[i] !=0;i++ )
    {
        max2=0;
        for(int j=1;arr[j] != 0;j++)
        {
            if(arr[i]==arr[j])
            {
                max2++;
            }
        }
        if(max2>*max)
        {
            *max=max2;
            *ch=arr[i];
        }
    }
}
int max_zeroes(unsigned int num)
{
    int max=0,tmp,maxtmp,val=0;
    for(int c=31;c>=0;c--)
    {
        printf("%d",(num>>c)&1);
        if((num>>c)&1==1)
        {
            tmp=c-1;
            maxtmp=0;
            
            while(((num>>tmp)&1)==0)
            {
                maxtmp++;
                tmp--;
                
            }
            if(maxtmp>max && (tmp>=0) ) //?عشان من بعد اخر واحد شمال هيعد اصفار كتير عالشمال فلازم تتاكد انه التمب اكبر من الزيرو وده معناه انه مخدش الاصفار اللي عالشمال
            {
                max=maxtmp;
            }
        }
    }
    return max;
}
int big_diff(int *arr,int size)
{
    int max=0;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if((arr[j]-arr[i])>max)
            {
                max=arr[j]-arr[i];
            }
        }
    }
    return max;
}
void search_word(char *arr,char *word,int len_arr,int len_word)
{
    int i;
    for( i=0;i<len_arr;i++)
    {
        if(arr[i]==word[0])
        {
            int j=i,m=0;
            for(;j<i+len_word;j++,m++)
            {
                if(arr[j]!=word[m])
                {
                    break;
                }

            }
            if(j==i+len_word)
            {
                printf("%s exists",word);
                break;
            }
        }
    }
    if(i==len_arr)
    printf("%s doesnt exist",word);
}
void rev(char arr[], int n)
{
    char first[100], sec[100];
    int space;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ' ')
        {
            space = i;
            break;
        }
    }
    int s;
    for (s = 0; s < space; s++)
    {
        first[s] = arr[s];
    }
    first[s] = 0;
    int m = 0;
    int j;
    for (int j = space + 1; j < n; j++)
    {

        sec[m] = arr[j];
        m++;
    }
    sec[m] = 0;
    strcat(sec, " ");
    strcat(sec, first);
    strcpy(arr, sec);
    printf("%s", arr);
}
char *longest_word(char arr[], int size)
{
    static char longest[20];
    int max = 0, count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != ' ' && (i != size - 1))
        {
            count++;
        }
        else
        {
            if (i == size - 1)
            {
                count++;
                i++;
            }

            if (count > max)
            {
                max = count;
                int m = 0;
                for (int j = i - max; j < i; j++)
                {
                    longest[m] = arr[j];
                    m++;
                }
                longest[m] = '\0';
            }
            count = 0;
        }
    }
    return longest;
}
void swap_after_zero(int arr[], int size)
{
    int p1, p2, tmp;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            p1 = i;
            for (int j = i + 1; j < size; j++)
            {
                if (arr[j] == 0)
                {
                    p2 = j;
                    break;
                }
            }
            break;
        }
    }
    p1++;
    p2++;
    for (int i = 0; i < 3; i++)
    {
        tmp = arr[p1];
        arr[p1] = arr[p2];
        arr[p2] = tmp;
        p1++;
        p2++;
    }
}
void swap_array(int *a, int *b)
{
    int tmp;
    for (int i = 0; i < maxi; i++)
    {
        tmp = a[i];
        a[i] = b[i];
        b[i] = tmp;
    }
}
void reverse_array(int arr[], int size)
{
    for (int i = 0; (size % 2 == 0) ? (i <= size / 2) : (i < size / 2); i++)
    {
        int tmp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = tmp;
    }
}
unsigned char add_char(unsigned char x, unsigned char y)
{
    return x + y;
}
void finding_max_min(int arr[], int size, int *max, int *min, int *inmax, int *inmin)
{
    int vmax = arr[0], vmin = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > vmax)
            vmax = arr[i];
        if (arr[i] < vmin)
            vmin = arr[i];
    }
    *max = vmax;
    *min = vmin;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == vmax)
            *inmax = i;
        if (arr[i] == vmin)
            *inmin = i;
    }
}
int search_arr(int (*arr)[], int size, int num)
{
    for (int i = 0; i < 5; i++)
    {
        if ((*arr)[i] == num)
            return i;
    }
}
int fact_rec(int num)
{
    static int fact = 1;
    fact *= num;
    num--;
    if (num != 0)
    {
        fact_rec(num);
        return fact;
    }
}
int sum_without_loop(int num)
{
    static int sum = 0;
    sum += num;
    num--;
    if (num != 0)
    {
        sum_without_loop(num);
    }
    return sum;
}
void binary_rep(int num)
{
    for (int i = 31; i >= 0;)
    {
        if ((i == 31) && ((num & (1 << i)) == 0))
        {
            int j;
            for (int j = 8 * 4 - 2; j >= 0; j--)
            {
                if (num & (1 << j))
                {
                    i = j;
                    break;
                }
            }
        }
        else
        {
            if (num & (1 << i))
                printf("%d", 1);
            else
                printf("%d", 0);
            i--;
        }
    }
}
int count_ones(int num)
{
    int sum = 0;
    for (int i = 0; i < 8 * 4; i++)
    {
        if (num & (1 << i))
            sum++;
    }
    return sum;
}
void check_base(int num)
{
    int c = 0;
    for (int i = 0; i < 8 * 4; i++)
    {
        if (num & (1 << i))
            c++;
    }
    if (c == 1)
        printf("num is base 2");
    else
        printf("not base 2");
}
int reverse_dig(int num)
{
    int copy_num = num, num_dig = 0;
    double new_num = 0;
    while (copy_num != 0)
    {

        copy_num /= 10;
        num_dig++;
    }
    num_dig--;

    while (num != 0)
    {
        new_num += (num % 10) * pow(10, num_dig);
        num_dig--;
        num /= 10;
        printf("%lf\n", new_num);
    }
    return new_num;
}
int sum_dig(int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int nearest_10th(int num)
{
    int least = (num / 10) * 10;
    int most = least + 10;
    if ((num - least) == (most - num))
        return 0;
    return ((num - least) < (most - num)) ? least : most;
}
void prime_intervals(int num1, int num2)
{

    for (int i = num1; i <= num2; i++)
    {
        int sum = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
                sum++;
        }
        if (sum == 2 || i == 1)
            printf("%d  ", i);
    }
}
int prime(int num)
{
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
            sum++;
    }
    if (sum == 2 || num == 1)
        return 0;
    else
        return 1;
}
double square1(double num)
{
    for (double i = 0; i <= num; i++)
    {
        if (i * i >= num)
            for (double j = i - 1; j <= i; j += 0.001)
            {
                if (j * j >= num)
                    return j - 0.001;
            }
    }
}
int square2(double num)
{
    for (int i = 0; i <= num; i++)
    {
        if (i * i >= num)
            return i - 1;
    }
}
int main()
{
    int prob_num;
    printf("Enter the problem number: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &prob_num);
    switch (prob_num)
    {
    case 1: //! Function take an integer and return square root
    {
        double num;
        char choice;
        printf("Entert the number and the return type (d,i): ");
        fflush(stdout);
        scanf("%lf %c", &num, &choice);
        printf("%lf", num);
        (choice == 'd') ? printf("\nresult= %lf", square1(num)) : printf("\nresult= %d", square2(num));
    }
    break;
    case 2:
    {
        int num;
        printf("Enter the number: ");
        fflush(stdout);
        scanf("%d", &num);
        int result = prime(num);
        (result == 0) ? printf("Prime") : printf("Not Prime");
    }
    break;
    case 3:
    {
        int num1, num2;
        printf("Enter the two intervals: ");
        fflush(stdout);
        scanf("%d %d", &num1, &num2);
        prime_intervals(num1, num2);
    }
    break;
    case 4:
    {
        int result, num;
        printf("Enter a number: ");
        fflush(stdout);
        scanf("%d", &num);
        result = nearest_10th(num);
        (result == 0) ? printf("They are both near!") : printf("%d", result);
    }
    break;
    case 5:
    {
        int num;
        printf("Enter the number: ");
        fflush(stdout);
        scanf("%d", &num);
        printf("%d", sum_dig(num));
    }
    break;
    case 6:
    {
        int num;
        printf("Enter the number: ");
        fflush(stdout);
        scanf("%d", &num);
        printf("Reverse: %d", reverse_dig(num));
    }
    break;
    //! check if the number is base 2
    case 7:
    {
        int num;
        printf("Enter the number: ");
        fflush(stdout);
        scanf("%d", &num);
        check_base(num);
    }
    break;
    //! count number of ones in a number
    case 8:
    {
        int num;
        printf("Enter the number: ");
        fflush(stdout);
        scanf("%d", &num);
        printf("%d", count_ones(num));
    }
    break;
    //! printing the binary of a number without printing the zeroes on the left
    case 9:
    {
        int num;
        printf("Enter the number: ");
        fflush(stdout);
        scanf("%d", &num);
        binary_rep(num);
    }
    break;
    //! sum of numbers between 1 and 100 without a loop (هنستخدم الريكرشن)
    case 11:
    {
        int sum = sum_without_loop(100);
        printf("sum= %d", sum);
    }
    break;
    //! calculate the factorial using recursion
    case 12:
    {
        int num;
        printf("Enter the number: ");
        fflush(stdout);
        scanf("%d", &num);
        printf("The factorial of %d is %d", num, fact_rec(num));
    }
    break;
    //! search a number in an array
    case 13:
    {
        int arr[5] = {1, 2, 3, 4, 5}, size = 5;
        printf("index: %d", search_arr(&arr, 5, 2));
    }
    break;
    //! return the maximum and the minimum in an array and thier index
    case 14:
    {
        int arr[5] = {2, 1, 5, 3, 4}, max, min, inmax, inmin;
        finding_max_min(arr, 5, &max, &min, &inmax, &inmin);
        printf("The max= %d and it's indix= %d\nThe minimum= %d and it's indix= %d", max, inmax, min, inmin);
    }
    break;
    //! function to add two unsigned char
    case 15:
    {
        unsigned char x = 1, y = 2;
        printf("result= %u", add_char(x, y)); //? there will be an overflow if the result is > 255
    }
    break;
    //! reversing the elements of array without second array
    case 16:
    {
        int arr[5] = {2, 1, 5, 3, 4};
        reverse_array(arr, 5);
        for (int i = 0; i < 5; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    break;
    //! swap 2 arrays with different size(عدد عنصار مختلفه بس خلي السايز الكبير واحد ليهم هما الاتنين)
    case 17:
    {
        int arr1[maxi] = {1, 2, 3, 4, 5}, arr2[maxi] = {7, 8, 9};
        swap_array(arr1, arr2);
        for (int i = 0; i < 3; i++)
        {
            printf("%d ", arr1[i]);
        }
        printf("\n");
        for (int i = 0; i < 5; i++)
        {
            printf("%d ", arr2[i]);
        }
    }
    break;
    //! array with unknown size , swap the first 3 elements after the first zero with the first 3 elements after the 2nd zero
    case 19:
    {
        int arr[maxi] = {1, 2, 0, 5, 6, 7, 3, 4, 0, 10, 19, 23, 4, 5};
        swap_after_zero(arr, 14);
        for (int i = 0; i < 14; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    break;
    case 20:
    {
        char str[] = "my name is mohamed", *p;
        p = longest_word(str, strlen(str));
        printf("%s", p);
    }
    break;
    //! swap 2 names in a string- هنا انا عملتها باستخدام اراي تانيه بس ازاي اقدر اعملها من غير ما استخدم اراي تانيه دي معرفش
    case 21:
    {
        char arr[100];
        printf("enter your name: ");
        fflush(stdout);fflush(stdin);
        gets(arr);
        int n = strlen(arr);
        rev(arr, n);
    }
    break;
    case 22:
    {
        char sen[]="hello iam there for you";
        char word[]="iam";
        int len1=strlen(sen);
        int len2=strlen(word);
        search_word(sen,word,len1,len2);
    }
    break;
    //! return biggest diff between 2 elements in an array and the smallest must come first
    case 23:
    {
        int arr[5]={10,2,6,7,4};
        printf("max diff= %d",big_diff(arr,5));
    }
    break;
    case 24:
    {
        unsigned int num;
        printf("Enter a number: ");
        fflush(stdout);
        scanf("%d",&num);
        printf("Max zeroes= %d\n",max_zeroes(num));
    }
    break;
    //! Finding the most repeated element in an array of char
    case 25:
    {
        char name[]="Abdelrahman Ali Gouda Mohamed";
        int max;
        char ch;
        repeated_element(name,&max,&ch);
        printf("The most repeated element is '%c' with %d times",ch,max);
    }
    break;
    }
    return 0;
}