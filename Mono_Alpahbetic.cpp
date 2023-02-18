#include<bits/stdc++.h>

using namespace std;
void Encryption(int ct, char mono[20]) // ASCII values are considered in the function
{
  char ch, hc;
  for (int i = 0; i < ct; i++) {
    hc = mono[i];

    if (hc <= 90) // Checking if the plain text is in Capital letter
      mono[i] = (rand() % (90 - 65 + 1)) + 65; // Generates random number within the range A-Z(65-90)
    else // Checking if the plain text is in small letter
      mono[i] = (rand() % (122 - 97 + 1)) + 97; // Generates random number within the range a-z(97-122)
    cout << mono[i];

  }
}
void Count(char mono[20], int * ct) {
  int z = * ct;
  for (int i = 0; mono[i] != 0; i++)
    z++;
  * ct = z;
}
int main() {
  char mono[20];
  int ct = 0;
  cout << "Enter the plain text :";
  cin.getline(mono, 20);
  Count(mono, & ct); // Function for counting the length of the string
  cout << "Plain Text : " << mono << endl;
  srand(time(0)); // Initialize random number generator
  cout << "Cipher Text : ";
  Encryption(ct, mono); // Function for Encryption
}
