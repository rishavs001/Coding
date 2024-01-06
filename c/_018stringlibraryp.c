/*
    strlen(str);    <-- string length without '\0'
    strcpy(newStr,oldStr);    <--copies value from old to new string
    strcat(firstStr,secStr);    <-- concatenates first string with second string
    strcmp(firstStr,secStr);    <-- compares  2 strings and returns value
                0->string equal
                positive-> first > second (ASCII)
                negative-> first < second (ASCII)

*/

#include<stdio.h>

void slice(char str[],int n, int m);  // Extract a indexed portion out of the Sentence
void checkstr(char str[], char check);  // Check if a character is present in the string or not
int main()
{
    char str[100]="HelloWorld";
    char check='e';   // character to be checked
    slice(str,3,6);
    checkstr(str,check);
    return 0;
}

void slice(char str[],int n, int m)
{
    char newstr[100];
    int j=0;
    for(int i=n; i<=m; i++ ,j++)
    {
        newstr[j]=str[i];
            
    }
    newstr[j]='\0';
    puts(newstr);
}

void checkstr(char str[], char check)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == check)
        {
            printf("Character is present");
            return;
        }
    }
    printf("Character not present");
    
}