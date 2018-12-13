#include <stdio.h>
#include <string.h>

#define MAXLINE 255

int count(char s[])
{
    char temp[MAXLINE];
    strcpy(temp, s);
    const char* limits = " \n.,;!?";
    int res = 0;
    char *ptr = strtok(temp, limits);
    while(ptr)
    {
        if(ptr[0] == 'a') res++;
        ptr = strtok(NULL, limits);
    }
    return res;
}

int count(int arr[], int size)
{
    int res = 0;
    for(int i = 0; i < size; i++)
        if(arr[i]%2 == 0) res++;
    return res;
}

int main(void)
{
    printf("If you want to enter array of integer numbers press 'i', else press any other button: ");
    char sym;
    scanf("%c",&sym);
    if(sym == 'i')
    {
        int arr[MAXLINE];
        int size;
        printf("Enter size: ");
        scanf("%d",&size);
        printf("Enter array of integer numbers:\n");
        for(int i = 0; i < size; i++)
            scanf("%d",&arr[i]);
        printf("Amount of even numbers in the array = %d\n", count(arr, size));   
    }
    else
    {
        char arr[MAXLINE];
        printf("Enter sentence:\n");
	getchar();
        fgets(arr, MAXLINE, stdin);
        arr[strlen(arr)-1] = '\0';
        printf("Amount of words in the array that starts with 'a' = %d\n", count(arr));
    }
    return 0;   
}





