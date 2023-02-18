#include<bits/stdc++.h>

using namespace std;
void removeSpaces(char * str) {
  int count = 0;
  for (int i = 0; str[i]; i++)
    if (str[i] != ' ')
      str[count++] = str[i];
  str[count] = '\0';
}
int Col(char * str, int Ct, char input[20], int i) {
  int j = 0;
  while (i < Ct) {
    str[j] = input[i];
    j++;                        //comehometomorrow
    i = i + 6;                  //c
  }
  return j;
}
void display(char str[5], int Count) {
  for (int i = 0; i < Count; i++)
    cout << str[i];

}

string Encryption(char input[20], int Ct) {
  int Count = Ct;
  char str1[5], str2[5], str3[5], str4[5], str5[5], str6[5];
  cout << input;
  int s1 = Col(str1, Count, input, 0);
  cout << "\nCol 1 : ";
  display(str1, s1);
  int s2 = Col(str2, Count, input, 1);
  cout << "\nCol 2 : ";
  display(str2, s2);
  int s3 = Col(str3, Count, input, 2);
  cout << "\nCol 3 : ";
  display(str3, s3);
  int s4 = Col(str4, Count, input, 3);
  cout << "\nCol 4 : ";
  display(str4, s4);
  int s5 = Col(str5, Count, input, 4);
  cout << "\nCol 5 : ";
  display(str5, s5);
  int s6 = Col(str6, Count, input, 5);
  cout << "\nCol 6 : ";
  display(str6, s6);

  cout << "\nThese all are represented as columns , the order for encryption be as : 4,6,1,2,5 and 3 ";
  cout << "\nCipher text : ";
  display(str4, s4);
  display(str6, s6);
  display(str1, s1);
  display(str2, s2);
  display(str5, s5);
  display(str3, s3);
}
int main() {
  char input[20];
  cout << "Enter the plain text :";
  cin.getline(input, 20);
  removeSpaces(input);
  int Count = 0;
  for (int i = 0; input[i] != 0; i++)
    Count++;
  cout << "Count : " << Count << endl;
  Encryption(input, Count);
  return 0;
}
