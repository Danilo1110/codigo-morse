#include <iostream>
#include <sstream>
#include <windows.h>

using namespace std;

void Insertar(string&);
void Morse(string);

void Menu()
{
   std::cout<<"\t============ CODIGO MORSE =============\n\n";
   std::cout<<"\t________________________________________\n";
   std::cout<<"\t|A .-    |  B -... |  C -.-. |  D -..  |\n";
   std::cout<<"\t|E .     |  F ..-. |  G --.  |  H .... |\n";
   std::cout<<"\t|I ..    |  J .--- |  K -.-  |  L .-.. |\n";
   std::cout<<"\t|M --    |  N -.   |  O ---  |  P .--. |\n";
   std::cout<<"\t|Q --.-  |  R .-.  |  S ...  |  T -    |\n";
   std::cout<<"\t|U ..-   |  V ...- |  W .--  |  X -..- |\n";
   std::cout<<"\t|Y -.--  |  Z --.. |         |         |\n";
   std::cout<<"\t________________________________________\n";
}

int main()
{
   string String = "";
   Menu();
   Insertar(String);
   Morse(String);
   std::cin.get();
   return 0;
}

void Insertar(string &String){
 std::cout<<"\nIngresa el codigo: ";
 getline(cin,String);
}
void Morse(string String){
 string token;
 istringstream iss(String);
 std::cout<<"\nLa frase escrita es: ";
 stringstream morse;
 while ( getline(iss, token, ' ') ){
  if(strcmp(token.c_str(),".-")== 0)
   cout << "A";
  else if(strcmp(token.c_str(),"-...")== 0)
   cout << "B";
  else if(strcmp(token.c_str(),"-.-.")== 0)
   cout << "C";
  else if(strcmp(token.c_str(),"-..")== 0)
   cout << "D";
  else if(strcmp(token.c_str(),".")== 0)
   cout << "E";
  else if(strcmp(token.c_str(),"..-.")== 0)
   cout << "F";
  else if(strcmp(token.c_str(),"--.")== 0)
   cout << "G";
  else if(strcmp(token.c_str(),"....")== 0)
   cout << "H";
  else if(strcmp(token.c_str(),"..")== 0)
   cout << "I";
  else if(strcmp(token.c_str(),".---")== 0)
   cout << "J";
  else if(strcmp(token.c_str(),"-.-")== 0)
   cout << "K";
  else if(strcmp(token.c_str(),".-..")== 0)
   cout << "L";
  else if(strcmp(token.c_str(),"--")== 0)
   cout << "M";
  else if(strcmp(token.c_str(),"-.")== 0)
   cout << "N";
  else if(strcmp(token.c_str(),"---")== 0)
   cout << "O";
  else if(strcmp(token.c_str(),".--.")== 0)
   cout << "P";
  else if(strcmp(token.c_str(),"--.-")== 0)
   cout << "Q";
  else if(strcmp(token.c_str(),".-.")== 0)
   cout << "R";
  else if(strcmp(token.c_str(),"...")== 0)
   cout << "S";
  else if(strcmp(token.c_str(),"-")== 0)
   cout << "T";
  else if(strcmp(token.c_str(),"..-")== 0)
   cout << "U";
  else if(strcmp(token.c_str(),"...-")== 0)
   cout << "V";
  else if(strcmp(token.c_str(),".--")== 0)
   cout << "W";
  else if(strcmp(token.c_str(),"-..-")== 0)
   cout << "X";
  else if(strcmp(token.c_str(),"-.--")== 0)
   cout << "Y";
  else if(strcmp(token.c_str(),"--..")== 0)
   cout << "Z";
 }
 if(iss.fail());
}
