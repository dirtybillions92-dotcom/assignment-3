/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>

int countVowels(std::string str) {
    int count = 0;
    for(char c :str) {
        c = tolower(c);
    
    if(c== 'a'|| c=='e'||c=='i'||c=='o'||c=='u') {
        count++;    
    }
 }
  return count;
}

int main() {
    std::cout<<countVowels("hello")<<std::endl; //output:2
    return 0;
}