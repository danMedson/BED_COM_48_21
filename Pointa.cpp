
#include <iostream>

void SwapNumbers(int* varA, int* varB) {
    int temp = *varA;
    *varA = *varB;
    *varB = temp;
}

int main() {
    int varA = 25;
    int varB = 100;

    std::cout << "Before swapping: varA = " << varA << ", varB = " << varB << std::endl;

    SwapNumbers(&varA, &varB);

    std::cout << "After swapping: varA = " << varA << ", varB = " << varB << std::endl;

    return 0;
}
