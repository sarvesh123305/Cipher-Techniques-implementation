#include <iostream>
using namespace std;

class Ceasor
{
  int key=3;
  char msg[50],a;

  public :
  void get()
  {
      cout<<"Enter the plain text :" ;
      cin.getline(msg,40);
  }
  void set()
  {
      for(int i=0;msg[i]!='\0';++i)
      {
          a=msg[i];
          if(a>='a' && a<='z')  //For ignoring white spaces
          {
          a+=key;
          if(a>'z')
          a=a-'z'+'a'-1; //If character exceeds letter z then it will again continue from a
          }
          else if(a>='A' && a<='Z')//For ignoring white spaces
           {
               a+=key;
               if(a>'Z')
          a=a-'Z'+'A'-1; //If character exceeds letter Z then it will again continue from A
           }
          msg[i]=a;
      }
  }
  void disp()
  {
      cout<<endl<<"The cipher text is :"<<msg<<"\n\n";
  }
};

int main()
{
    Ceasor C;
    C.get();
    C.set();
    C.disp();
    return 0;
}
































