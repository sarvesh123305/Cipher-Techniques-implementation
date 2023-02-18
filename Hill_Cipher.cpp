#include<bits/stdc++.h>

using namespace std;
void Display(int Count, int Matrix[3][1]) {  //Function For Dislaying matrix
  for (int i = 0; i < Count; i++)
    cout << endl << Matrix[i][0];
    cout<<endl;
}
void KeyPrint(int Count, int key[3][3]) {   //Function For printing key
  for (int i = 0; i < Count; i++) {
    cout << endl;
    for (int j = 0; j < Count; j++)
      cout << key[i][j] << "  ";
  }
  cout<<endl;
}

string Encryption(int Ct, char in [20]) {   // Function For Encryption
  int Count = Ct;
  int hill[Count][1];
  int value = 0;
  for (int i = 0; i < Count; i++) {         //Representing A-Z as 0-25
    value = (int( in [i])) - 97;
    hill[i][0] = value;
  }
  cout<<"\n1. Encryption \n";          //1
  cout << "\nPlain Text :\n";          //2
  Display(Count, hill);                //3
  int key[3][3] = {
    {
      6,
      24,
      1
    },
    {
      13,
      16,
      10
    },
    {
      20,
      17,
      15
    }
  };
  cout << "\n\nKey:\n";
  KeyPrint(Count, key);
  int Multi[3][1];
  for (int i = 0; i < 3; i++) {              //Multiplication of matrices
    for (int j = 0; j < 3; j++) {
      Multi[i][j] = 0;
      for (int k = 0; k < 3; k++)
        Multi[i][j] += hill[k][0] * key[i][k];
    }
  }
  cout << "\nMultiplication :\n";
  Display(Count, Multi);
  int Modulo[3][1];
  for (int i = 0; i < 3; i++) {
    Modulo[i][0] = Multi[i][0] % 26;         //Modulo Operation of matrix
  }

  cout << "\nModulo :\n";
  Display(Count, Modulo);

  string result="";
  char cipher[2];
  for (int i = 0; i < 3; i++) {
    result+= ((char)(Modulo[i][0] + 97));   //Printing alphabets which were considered as A-Z(0-25)
  }
  return result;
}

string Decryption(int Ct, string encrypt) {  //Function For Decryption
  int Count = Ct;
  int Decrypt[Count][1];
  for (int i = 0; i < Count; i++){
        Decrypt[i][0] = (int( encrypt [i])) - 97;
   }                                      //Representing A-Z as 0-25
  cout << "\n2. Decryption \n\nCipher Text :\n";
  Display(Count, Decrypt);
  int key[3][3] = {
    {
      8,
      5,
      10
    },
    {
      21,
      8,
      21
    },
    {
      21,
      12,
      8
    }
  };
  cout<<"\nInverse of Key :\n";
  KeyPrint(Count, key);
  int Multi[3][1];
  for (int i = 0; i < 3; i++) {        //Multiplication of matrices
    for (int j = 0; j < 3; j++) {
      Multi[i][j] = 0;
      for (int k = 0; k < 3; k++)
        Multi[i][j] += Decrypt[k][0] * key[i][k];
    }
  }

  cout << "\nMultiplication :\n";
  Display(Count, Multi);
  int Modulo[3][1];                   //Modulo operation of matrix
  for (int i = 0; i < 3; i++) {
    Modulo[i][0] = Multi[i][0] % 26;
  }

  cout << "\nModulo :\n";
  Display(Count, Modulo);
  char plain[2];
  string result = "";
  for (int i = 0; i < 3; i++) {      //Printing alphabets which were considered as A-Z(0-25)
    plain[i] = (char)(Modulo[i][0] + 97);
  }

  result = (string) plain;
  return plain;

}
int main() {
  char in [20];
  int Count = 0;
  cout << "Enter the plain text :";
  cin >> in ;
  for (int i = 0; in [i] != 0; i++)
    Count++;
  string encrypt = Encryption(Count, in );
  cout << "\nCipher Text :" << encrypt<<endl;
  string decrypt = Decryption(Count, encrypt);
  cout << "\nPlain Text :" << decrypt;

  return 0;
}






















