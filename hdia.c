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
int vernam[20];
for (int i = 0; str[i] != 0; i++)
    Count++;
    int value;
 /* for (int i = 0; i < Count; i++) {
    value = int( str [i]);
    value -= 97;
     vernam[i]= value;
}*/
int ciphe[30];
 for(int i=0;i<Count;i++)
    {
        ciphe[i]=str[i]-'a'+onepad[i]-'a';
        if(ciphe[i]>25)
            ciphe[i]-=26;
    }
int cip[20],Sum[20];
for(int i=0;i<Count;i++)
   cout<<  ciphe[i]<<" ";


   /* for (int i = 0; i < Count; i++) {
    value = int( onepad [i]);
    value -= 97;
     cip[i]= value;
    }*/
    cout<<"\nKey : ";
    for(int i=0;i<Count;i++)
   cout<<  cip[i]<<" ";
  /* for(int i=0;i<Count;i++)
   {
       Sum[i]=cip[i]+vernam[i];
       if(Sum[i]>25)
        Sum[i]-=26;
   }*/
   char cipher[20];
   for (int i = 0; i < Count; i++) {
    cipher[i] = (char)(Sum[i] + 97);
  }
  cout<<endl;
  for(int i=0;i<Count;i++)
    cout<<cipher[i];
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
