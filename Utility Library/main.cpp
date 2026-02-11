#include <iostream>
#include "clsUtility.h"  // Make sure this file is in the same folder
#include "clsDate.h"  // Needed if you want to test Swap with clsDate

using namespace std;

int main()
{
    // 1. Initialize random number generator
    clsUtility::Srand();

    // 2. Generate a random number between 1 and 10
    int randNum = clsUtility::RandomNumber(1, 10);
    cout << "Random Number: " << randNum << endl;

    // 3. Generate a random character (capital letter)
    char randomChar = clsUtility::GetRandomCharacter(clsUtility::CapitalLetter);
    cout << "Random Character: " << randomChar << endl;

    // 4. Generate a random word with 5 lowercase letters
    string randomWord = clsUtility::GenerateWord(clsUtility::SamallLetter, 5);
    cout << "Random Word: " << randomWord << endl;

    // 5. Generate a random key (default: 4 blocks of 4 capital letters)
    string randomKey = clsUtility::GenerateKey();
    cout << "Random Key: " << randomKey << endl;

    // 6. Generate and print 3 random keys with mixed characters
    clsUtility::GenerateKeys(3);

    // 7. Fill an array with random numbers
    int numbers[100];
    clsUtility::FillArrayWithRandomNumbers(numbers, 10, 1, 50);
    cout << "Random Numbers Array: ";
    for (int i = 0; i < 10; i++)
        cout << numbers[i] << " ";
    cout << endl;

    // 8. Fill an array with random words
    string words[100];
    clsUtility::FillArrayWithRandomWords(words, 5, clsUtility::SamallLetter, 4);
    cout << "Random Words Array: ";
    for (int i = 0; i < 5; i++)
        cout << words[i] << " ";
    cout << endl;

    // 9. Swap two integers
    int a = 5, b = 10;
    cout << "Before Swap: a=" << a << ", b=" << b << endl;
    clsUtility::Swap(a, b);
    cout << "After Swap: a=" << a << ", b=" << b << endl;

    // 10. Shuffle an array of numbers
    clsUtility::ShuffleArray(numbers, 10);
    cout << "Shuffled Numbers Array: ";
    for (int i = 0; i < 10; i++)
        cout << numbers[i] << " ";
    cout << endl;

    // 11. Print tabs
    cout << "Tabs Example:" << clsUtility::Tabs(3) << "Text after tabs" << endl;

    // 12. Encrypt and decrypt a text
    string text = "Hello";
    string encrypted = clsUtility::EncryptText(text, 3);
    string decrypted = clsUtility::DecryptText(encrypted, 3);
    cout << "Original: " << text << ", Encrypted: " << encrypted << ", Decrypted: " << decrypted << endl;

    // 13. Convert a number to text
    int number = 12345;
    string numberText = clsUtility::NumberToText(number);
    cout << "Number to Text: " << numberText << endl;

    return 0;
}
