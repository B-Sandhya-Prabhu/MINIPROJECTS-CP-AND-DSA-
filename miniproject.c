//miniproject-Caesar_cipher
#include <stdio.h>
#include <string.h>
void main()
{
    
    char c[20],a[20];
    int as,en,n,i,asc,j,m,op;
    printf("\n encode:1\ndecode:2 \n Enter the operation: ");//check for the operation
    scanf("%d",&op);
    //encryption function
    if(op==1)
    {
    printf("\nenter a msg : ");
    scanf("%s",c);
   
    printf("\nEnter the number of shift: ");
    scanf("%d",&n);
    for(i=0;i<strlen(c);i++)
    {
        as=(int)c[i]+n;//convert the code into ASCII value and then shift the characters by number of shift 
        printf("%c",as);
    }
    }
    //decryption function 
    else if(op==2)
    {
    printf("\nenter the code : ");
    scanf("%s",a);
    printf("\nEnter the number of shift :  ");
    scanf("%d",&m);
    for(j=0;j<strlen(a);j++)
    {
        asc=(int)a[j]-m;//convert the code into ASCII value amd them shift the characters by number of shift
        printf("%c ",asc);
    }
    }
    else 
    {
        printf("\nInvalid");
    }
 
}
