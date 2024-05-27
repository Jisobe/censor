#include <iostream>
#include <string>

int main(void){

  std::string word = "broccoli";
  std::string text = "The broccoli was very broccoli broccoli";
  int count = 0;

  for (int i = 0; i < text.size(); i++){
    if (text[i] == word[0]){
      for (int j = 0; j < word.size(); j++){
        if (text[i+j] == word[j]){
          count++;
        }
      }
    }
    if(count == word.size()){
      for (int x = i; x < i+ word.size(); x++){
        text[x] = '*';
      }
    }
  
    count = 0;
  }

  std::cout << text;

}