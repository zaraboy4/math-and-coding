#include <iostream>
#include <cmath>

int getModifiedNum(int* arr) {
    int number[4];
    for (int i = 0; i < 4; ++i) {
        *(number + i) = *(arr + i);
    }
    std::swap(*number, *(number + 1));
    int num = 0;
    for (int i = 0; i < 4; ++i) {
        num = num * 10 + *(number + i);
    }
    return num;
}

int main() {
    int digits[10];
    int numbers[10];
    for (int i = 0; i < 10; ++i) 
        *(digits + i) = i;
    
    int k = 0, num;
    double s;
    for (int i = 0; i < 7; ++i) {
        num = getModifiedNum(digits + i);
        s = sqrt(num);
        if (std::floor(s) == s) {
            *(numbers + k++) = num;
        }
    }

    std::cout << "result: ";
    for (int i = 0; i < k; ++i) {
        std::cout << *(numbers + i) << ' ';
    }
}