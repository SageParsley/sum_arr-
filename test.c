#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 10
int sum(int ar[],int n);
int main()
{
    int marbles[SIZE] = {30,15,4,39,8,17,19,36,21,20};
    long answer;
    answer = sum(marbles,SIZE);
    printf("The total number of marbles is %ld.\n",answer);
    printf("The size of marbles is %zd bytes.\n",sizeof marbles);
    system("pause");
    return 0;
}
int sum(int ar[],int n)
{
    int i;
    int total = 0;
    for(i = 0; i < n; i++)
    {
        total += ar[i];
    }
    printf("The size of ar is %zd bytes.\n",sizeof ar);
}