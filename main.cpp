/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>

double average(std::vector<int>nums) {
    int sum = 0;
    for(int num:nums) {
        sum += num;
    }
    return static_cast<double>(sum)/nums.size();
}

int main() {
    std::vector<int>nums={1,2,3,4,5};
    std::cout << average(nums) << std::endl; //output:3.0

    return 0;
}