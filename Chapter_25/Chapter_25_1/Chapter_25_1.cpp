#include <bitset>
#include <iostream>
#include <string>

int main(){

    using namespace std;

    bitset<4> fourBits; // 4 bits initialized at 0000
    cout << "Initial contents of fourBits: " << fourBits << endl;

    bitset<5> fiveBits("10101"); // 5 bits initialized at 10101
    cout << "Initial contents of fiveBits: " << fiveBits << endl;

    bitset<6> sixBits(0b10001); //  C++ 14 binary literal
    cout << "Initial contents of sixBits: " << sixBits << endl;

    bitset<8> eightBits(255); // 8 bits initialized to long int 255
    cout << "Initial contents of eightBits: " << eightBits << endl;

    // Instantiate one bitset as a copy of another
    bitset<8> eightBitsCopy(eightBits);

    return 0;
}