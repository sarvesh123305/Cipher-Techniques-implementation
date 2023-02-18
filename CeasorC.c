#include <stdio.h>

int main()
{
    char msg[50]="",b,cipher[50]="";
    int key=3;
    printf("Enter plain text :");
    gets(msg);
        for(int i=0; msg[i]!='\0';i++)
    {
        b=msg[i];

        b=b+key;
        if(b>'z'){
        b=b-'z'+'a'-1;
        }
        cipher[i]=b;
}

    printf("The cipher text is : %s",cipher);
    return 0;
}
