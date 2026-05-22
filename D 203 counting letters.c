#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number of names entered: ");
    scanf("%d",&n);
    char arr[n][20];
    printf("Enter all the names: ");

    for(int i = 0; i <n; i++)
    {
        scanf("%s", arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        int count=0;

        for(int j=0;arr[i][j]!='\0';j++)
        {
            count++;
        }
        printf("The name %s has %d letters.",arr[i],count);
    }
}
