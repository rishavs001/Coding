#include<stdio.h>
#include<math.h>
int main()
{
    int dob,mob,yob,dn=10,mn=9,yn=2022,aged,agem,agey;
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
    if(dn>=dob)
    {
        aged=dn-dob;
        if(mn>=mob)
        {
            agem=mn-mob;
            agey=yn-yob;
        }
        else if(mn<mob)
        {
            agem=mn-mob+12;
            yn=yn-1;
            agey=yn-yob;
        }
    }
    else if(dn<dob)
    {
        aged=dn-dob+30;
        mn=mn-1;
    if(mn>=mob)
        {
            agem=mn-mob;
            agey=yn-yob;
        }
        else if(mn<mob)
        {
            agem=mn-mob+12;
            yn=yn-1;
            agey=yn-yob;
        }
    }
    
    printf("\nAge is %d years, %d months and %d days",agey,agem,aged);
}