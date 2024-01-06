#include<stdio.h>
int main()
{
    int dob,mob,yob,dn,mn,yn,aged,agem,agey;
    printf("Enter current date : ");
    scanf("%d",&dn);
    printf("Enter current month : ");
    scanf("%d",&mn);
    printf("Enter current year : ");
    scanf("%d",&yn);
    printf("Enter date of birth: ");
    scanf("%d",&dob);
    printf("Enter month of birth: ");
    scanf("%d",&mob);
    printf("Enter year of birth: ");
    scanf("%d",&yob);
    if(dn<dob)
    {
        dn=dn+30;
        mn=mn-1;
    }
    if(mn<mob)
        {
            mn=mn+12;
            yn=yn-1;
        }
    aged=dn-dob;
    agem=mn-mob;
    agey=yn-yob;
    printf("Age is %d years, %d months and %d days",agey,agem,aged);
    return 0;
}