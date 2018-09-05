#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  char str[80];
  char str2[80];
  cin.get(str, 80);
  cin.get();
  int count = 0;
  for (int i = 0; i < 80; i++){
    if(str[i] != '\0'){
      putchar (tolower(str[i]));
    }
  }
  cout << str << '\0' << endl;
  
  return 0;
}
