#include <bits/stdc++.h>

using namespace std;
void removeSpaces(char * str) {
  int Count = 0;
  for (int i = 0; str[i]; i++)
    if (str[i] != ' ')
      str[Count++] = str[i];
  str[Count] = '\0';
}

string Encryption(char in [20]) {
  char ascesd[20], desend[20];
  int Count = 0, i = 0, j = 0;
  for (int i = 0; in [i] != 0; i++)
    Count++;
  cout << "Count" << Count << endl << "Input" << in ;
  while (i <= Count) {
    ascesd[j] = in [i];
    j++;
    i = i + 2;
  }
  cout << "\nRow 1 : " << endl;
  for (int k = 0; k < j; k++)         //comehome
    cout << ascesd[k];
  i = 1, j = 0;
  while (i <= Count) {
    desend[j] = in [i];
    j++;
    i = i + 2;
  }
  cout << "\nRow 2 : " << endl;
  for (int k = 0; k < j; k++)
    cout << desend[k];
  strcat(ascesd, desend);
  return ascesd;

}
int main() {
  char sentence[20];
  cout << "Enter plain text : ";
  cin.getline(sentence, 20);
  removeSpaces(sentence);
  string encrypt = Encryption(sentence);
  cout << endl << "Result :" << encrypt;

}
