// file handling 

// read mode 
// #include<stdio.h>
// int main()
// {
//     FILE *abc;
//     char data[50];
    
//     abc = fopen("abc.txt","r");
//     fscanf(abc, "%s",data);
//     printf("%s",data);
//     fclose(abc);
// }



// write mode

// #include<stdio.h>
// int main()
// {
//     FILE *xyz;
//     xyz = fopen("abc.txt","w");
//     fprintf(xyz, "gaddari krbe");
//     fclose(xyz);
// }







// append mode

// #include<stdio.h>
// int main()
// {
//     FILE *xyz;
//     xyz = fopen("abc.txt","a");
//     fprintf(xyz, " chavi");
//     fclose(xyz);
// }

// =================================================

// bal.txt             12000
// pin.txt             1234


#include<stdio.h>

int readPin()
{
    int a;
    FILE *file;
    file = fopen("pin.txt","r");
    fscanf(file, "%d",&a);
    fclose(file);
    return a;    
}

int readBal()
{
    int a;
+-    FILE *file;
    file = fopen("bal.txt","r");
    fscanf(file, "%d",&a);
    fclose(file);
    return a;    
}

void writePin(int a)
{
    FILE *file;
    file = fopen("pin.txt","w");
    fprintf(file,"%d",a);
    fclose(file);
}

void writeBal(int a)
{
    FILE *file;
    file = fopen("bal.txt","w");
    fprintf(file,"%d",a);
    fclose(file);
}


int main()
{
    int choice, pin, bal, amount, upin, npin, cpin;
    
    printf("Press 1 : withdraw\n");
    printf("Press 2 : check balance\n");
    printf("Press 3 : change pin\n");
    printf("Press 4 : deposit\n");
    printf("Enter your choice = ");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:
            printf("Enter a pin = ");
            scanf("%d",&upin);
            pin = readPin();
            if(pin == upin)
            {
                printf("Enter a amount = ");
                scanf("%d",&amount);
                bal = readBal();
                if(bal>=amount)
                {
                    printf("Transaction successful\n");
                    bal = bal - amount;
                    printf("current balace = %d",bal);
                    writeBal(bal);
                }
                else
                {
                    printf("Low balance\n");
                }
            }
            else
            {
                printf("Wrong pin");
            }
            break;
            
        case 2:
            
    }
    
    
    printf("Thanks for using our service");
}

// =======================================================



// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter a number = ");
//     scanf("%d",&a);
    
//     if(a==0)
//     {
//         printf("Even number");
//     }
//     else if(a==1)
//     {
//         printf("Odd number");
//     }
//     else if(a==2)
//     {
//         printf("Even number");
//     }
//     .
//     .
//     .
//     else if(a==1000)
//     {
//         printf("Even number");
//     }
//     else
//     {
//         printf("Out of limit");
//     }
// }





















