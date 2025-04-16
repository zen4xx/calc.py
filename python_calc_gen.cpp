#include <fstream>
#include <iostream>
#include <string>


int main(){
    unsigned int n;
    std::cout << "Enter the num of lines: ";
    std::cin >> n;

    std::ofstream file;
    file.open("calc.py", std::ios::out);
    if(file.is_open()){
        file << "a = int(input('Enter the firs num: '))\n";
        file << "b = int(input('Enter the second num: '))\n";
        file << "c = input('Enter the sign + or - : ')\n";
        file << "\n";
        //plus
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j){
                file << "if a == " + std::to_string(i) + " and b == " + std::to_string(j) + " and c == '+':\n";
                file << "   print(" + std::to_string(i + j) << ")\n";
            }
        }
        //minus
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j){
                file << "if a == " + std::to_string(i) + " and b == " + std::to_string(j) + " and c == '-':\n";
                file << "   print(" + std::to_string(i - j) << ")\n";
            }
        }
    }
    else return 1;
    file.close();
}