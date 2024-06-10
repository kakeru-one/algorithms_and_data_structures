#include <bits/stdc++.h>
using namespace std;

bool judge_lowercase(char charactor){
  if(charactor >= 'a' && charactor <= 'z'){
    return true;
  }
  return false;
};

int main() {
  string chars;
  cin >> chars;

  int uppercase_counter = 0;
  int lowercase_counter = 0;

  for (int i = 0; i < chars.size(); i++)
  {
    if (judge_lowercase(chars[i])) {
      lowercase_counter++;
    } else {
      uppercase_counter++;
    }
  }

  if (uppercase_counter > lowercase_counter) {
    for (int i = 0; i < chars.size(); i++)
    {
      chars[i] = toupper(chars[i]);
    }
  } else {
    for (int i = 0; i < chars.size(); i++)
    {
      chars[i] = tolower(chars[i]);
    }
  }
  
  cout << chars << endl;
}