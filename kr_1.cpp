#include <iostream>

int main(int argc, const char * argv[]) {
    int input=1,count=0;
    while (input%5!=0) {
        std::cout << "vvedite chislo:";
        std::cin >> input;
        if (input%7==1) {
            count ++;
        }
    }
    std::cout << "Kolichestvo chisel:" << count;
    return 0;
}
