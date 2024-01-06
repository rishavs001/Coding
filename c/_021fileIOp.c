/*
    File is a structure that needs to be created for opening a file.
    File opening modes:
        "r"= open to read
        "rb"= open to read in binary
        "w"= open to write    // erases the earlier contents....also creates file if doesn't exist
        "wb"= open to write in binary
        "a"= open to append   // add content to file
*/

#include<stdio.h>

void method1();
void method2();
void method3();
void method4();
void method5();
void method6();

int main()
{
    //Comment off the method you want to use
    //method1();
    //method2();
    //method3();
    //method4();
    //method5();
    //method6();
    return 0;
}

void method1()
{
    //Search if a file is present is not
    FILE *fptr;     //pointer declaration
    fptr =fopen("_021Test.txt","r");    //fptr =fopen("FILE NAME",MODE");
    if (fptr == NULL)
    {
        printf("File doesn't exist \n");
    }
    else
    fclose(fptr);
}
void method2()
{
    //Write in the file
   FILE *fptr;
    fptr =fopen("_021Test.txt","w");
    
    fprintf(fptr,"%c", 'A');
    fprintf(fptr,"%c", 'P');
    fprintf(fptr,"%c", 'P');
    fprintf(fptr,"%c", 'L');
    fprintf(fptr,"%c", 'E');
    fclose(fptr);
}

void method3()
{
    //Read from a file
    FILE *fptr;
    fptr =fopen("_021Test.txt","r");

    char ch;
    fscanf(fptr,"%c",&ch);
    printf("Character= %c \n", ch);
    fscanf(fptr,"%c",&ch);
    printf("Character= %c \n", ch);
    fscanf(fptr,"%c",&ch);
    printf("Character= %c \n", ch);
    fscanf(fptr,"%c",&ch);
    printf("Character= %c \n", ch);
    fscanf(fptr,"%c",&ch);
    printf("Character= %c \n", ch);

    fclose(fptr);
}

void method4()
{
    //Append the file
   FILE *fptr;
    fptr =fopen("_021Test.txt","a");
    
    fprintf(fptr,"%c", 'M');
    fprintf(fptr,"%c", 'A');
    fprintf(fptr,"%c", 'N');
    fprintf(fptr,"%c", 'G');
    fprintf(fptr,"%c", 'O');
    fclose(fptr);
}

void method5()
{
    //fgetc(ptr)  
    //fputc('A',fptr)
   FILE *fptr;
    fptr =fopen("_021Test.txt","r");
    printf("%c \n", fgetc(fptr));
    printf("%c \n", fgetc(fptr));
    printf("%c \n", fgetc(fptr));
    printf("%c \n", fgetc(fptr));
    printf("%c \n", fgetc(fptr));
    fclose(fptr);

    fptr =fopen("_021Test.txt","w");
    fputc('M',fptr);
    fputc('A',fptr);
    fputc('N',fptr);
    fputc('G',fptr);
    fputc('O',fptr);
    fclose(fptr);

}

void method6()
{
    //End of File
    FILE *fptr;
    fptr =fopen("_021Test.txt","r");
    char ch;
    ch=fgetc(fptr);
    while(ch != EOF)
    {
        printf("%c",ch);
        ch=fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);

}