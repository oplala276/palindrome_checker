#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Function to check if a string is palindrome using pointers
bool isPalindrome(const string& str) {
    string temp = str;
    transform(temp.begin(), temp.end(), temp.begin(), ::tolower); // Convert to lowercase for case-insensitive comparison

    const char* front = temp.c_str(); // Pointer to the beginning of the string
    const char* back = front + temp.size() - 1; // Pointer to the end of the string

    while (front < back) {
        if (*front != *back) {
            return false; // If characters don't match, it's not a palindrome
        }
        front++;
        back--;
    }
    return true; // If the loop completes, it's a palindrome
}

int main() {
    string word;

    cout << "Enter a word to check if it's a palindrome: ";
    cin >> word;

    if (isPalindrome(word)) {
        cout << "YES, IT IS PALINDROME" << endl;
    } else {
        cout << "NO, IT IS NOT A PALINDROME" << endl;
    }

    return 0;
}
