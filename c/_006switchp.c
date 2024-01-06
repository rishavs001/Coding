# include<stdio.h>
int main()
{
    int day; //1-Mon, 2-Tue, 3-Wed & so on
    printf("Enter day (1 to 7) \n");
    scanf("%d",&day);

    switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Invalid choice");
        break;
    }
/*
    1. Cases can be in anyorder
    2. Nested switch is also possible
*/
    return 0;
}