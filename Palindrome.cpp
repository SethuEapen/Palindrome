#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  //variables
  char str[80];
  char str2[80];
  char str3[80];
  int count = 0;
  for (int i = 0; i < 79; i++){//Variables INIT
    str[i] = 0;
    str2[i] = 0;
    str3[i] = 0;
  }
  cin.get(str, 80);//Reading in a string and setting it to str
  cin.get();
  for (int i = 0; i < 79; i++){//removeing charicters
    if(str[i] >= 97 && str[i] <= 122){//if lowecase add to str2
      str2[count] = str[i];
      count++;
    }
    else if(str[i] >= 65 && str[i] <= 90){//if uppercase make uppercase and add to str2
      str2[count] = str[i] + 32;
      count++;
    }
  }
  count = 0;//reINIT count variable
  for (int i = 79; i >= 0; i--){//runs through str2 backwards
    if (str2[i] != 0){//if str2[i] is not null add to str3
     str3[count] = str2[i];
     count++;
    }
  }//str3 becomes a reversed str2
  
  if (strcmp(str2, str3) == 0){//if str2 and str3 are the same
    cout << "Is a Palindrome" << endl;//print is a palindrome
  }
  else{//if not print not a palindrome
    cout << "Not a Palindrome" << endl;
  }

  
  return 0;
}
