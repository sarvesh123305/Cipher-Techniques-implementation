#include<bits/stdc++.h>
using namespace std;
#define space 32
int main()
{
 char mono[20];
 char ch,hc;int ct=0;
 cout<<"Enter the plain text :";
 cin.getline(mono,20);
 for(int i=0;mono[i]!=0;i++)
    ct++;
 cout<<ct<<endl<<mono<<endl;

 srand(time(0));  // Initialize random number generator.

    for (int i = 0; i < ct; i++) {
        hc=mono[i];

    if(hc<=90)
        mono[i] = (rand()%(90 - 65 + 1)) + 65;
           else
             mono[i] = (rand() %
           (122 - 97 + 1)) + 97;
        cout<<mono[i];
    }
}


