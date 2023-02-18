#include<bits/stdc++.h>
using namespace std;
void removeSpaces(char *str)
{
    int count = 0;
    for (int i = 0; str[i]; i++)
        if (str[i] != ' ')
            str[count++] = str[i];
    str[count] = '\0';
}
void Encryption(char str[20],char onepad[20])
{
cout<<str<<endl;
int Count=0;
int vernam[20],ciphe[30];
for (int i = 0; str[i] != 0; i++)
    Count++;
 for(int i=0;i<Count;i++)
    {
        ciphe[i]=str[i]-'a'+onepad[i]-'a';
        if(ciphe[i]>25)
            ciphe[i]-=26;
    }
   string ciphertext="";
    for(int i=0;i<Count;i++)
    {
         ciphertext+=char(ciphe[i]+97);
    }
 cout<<"Ciphertext="<<ciphertext;
}
int main()
{
 char str[20],onepad[20];
 cout<<"Enter the plain text : ";
 cin.getline(str,20);
 removeSpaces(str);
cout<<"Enter the onepad : ";
cin.getline(onepad,20);
removeSpaces(onepad);
 Encryption(str,onepad);
}
