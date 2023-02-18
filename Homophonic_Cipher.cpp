#include<bits/stdc++.h>
using namespace std;
void Convert(int ct,char homo[20])   // ASCII values are considered in the function
{
    char ch;   //abcd
    for(int i=0;i<ct;i++)           //Encrypting character by character
    {
        ch=homo[i];
        int d;                      //Variable for making a set of 4 characters for each character
        int num= (rand()%4) + 1;    //Random function for choosing 1 value from given set

        switch(num)
        {
          case 1:d=3;
                 break;
          case 2:d=7;
                 break;
          case 3:d=15;
                 break;
          case 4:d=17;
                 break;
        }
       if(isupper(ch))                  //Checking if letter is capital
          ch=char(int(ch+d-65)%26 +65); //if letter exceeds z then it starts count again from a . Formula is made from ASCII value
       else
          ch=char(int(ch+d-97)%26 +97); //Checking if letter is small

        cout<<ch;

    }
}

int Count(char homo[20],int *ct)
{
    int z=*ct;
    for(int i=0;homo[i]!=0;i++)
    z++;
    *ct=z;
}
int main()
{
 char homo[20];
 int ct=0;
 cout<<"Enter the plain text :";
 cin.getline(homo,20);
 Count(homo,&ct);  // Function for counting the length of the string
 cout<<"Plain Text : "<<homo<<endl;
 srand(time(0));   // Initialize random number generator
 cout<<"Cipher Text : ";
 Convert(ct,homo); // Function for Encryption
}




























