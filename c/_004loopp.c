# include<stdio.h>
int main()
{
int i;
//FOR LOOP
    for(i=1;i<=5;i++)
    {
        printf("%d For Loop \n",i);
    }
//WHILE LOOP
    i=0;
    while (i<=5)
    {
    printf("%d While Loop \n",i);
    i++;
    }
//DO-WHILE LOOP (atleast 1 iteration)
    i=0;
    do
    {
        printf("%d Do while Loop \n",i);
        i++;
    } while (i<=5);
    

    return 0;
}