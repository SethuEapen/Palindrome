#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  char str[80];
  char str2[80];
  char str3[80];
  for (int i = 0; i < 80; i++){
    str[i] = 0;
    str2[i] = 0;
    str3[i] = 0;
  }
  cin.get(str, 80);
  cin.get();
  int count = 0;
  for (int i = 0; i < 80; i++){
    if(str[i] >= 97 && str[i] <= 122){
      str2[count] = str[i];
      cout << str[i] << endl;
      count++;
    }
    else if(str[i] >= 65 && str[i] <= 90){
      str2[count] = str[i] + 32;
      cout << str[i] + 32 << endl;
      count++;
    }
  }
  count = 0;
  for (int i = 80; i > 0; i--){
    
  }
  
  cout << str2 << endl;
  
  return 0;
}
