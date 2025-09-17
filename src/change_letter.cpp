#include "/Users/vladislavbaanov/Desktop/OOP_LAba_1/include/change_letter.h"
#include <string>
#include <iostream>


std::string changeLetter(std::string str_input){
    // std::cout << "Input your string with letters a/b/c" << std::endl;
    // std::cin >> str;
    std::string str = str_input;
    for(int i = 0; i < str.length(); i++){
        if (str[i] == 'a'){
            str[i] = 'b';
        } else if(str[i] == 'b'){
            str[i] = 'a';
        }
    }
    return str;
}
