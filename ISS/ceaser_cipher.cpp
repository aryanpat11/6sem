#include <iostream>
using namespace std;

string encrypt(string text, int key) {
    string result = "";

    // Iterate through each character in the text
    for (int i = 0; i < text.length(); i++) {
        if (isalpha(text[i])) {
            // Convert the character to uppercase
            char ch = toupper(text[i]);

            // Apply the Caesar cipher shift
            char shifted = ((ch - 'A' + key) % 26) + 'A';

            // Add the shifted character to the result
            result += shifted;
        } else {
            // Add non-alphabetic characters as they are
            result += text[i];
        }
    }

    return result;
}

string decrypt(string text, int key) {
    // Inverse of the encryption operation
    // Simply subtract the key to shift back
    return encrypt(text, 26 - key);
}

int main() {
    string plaintext;
    int key;

    cout << "Enter the plaintext: ";
    getline(cin, plaintext);

    cout << "Enter the key (a number between 1 and 25): ";
    cin >> key;

    // Encrypt the plaintext
    string ciphertext = encrypt(plaintext, key);
    cout << "Ciphertext: " << ciphertext << endl;

    // Decrypt the ciphertext
    string decryptedText = decrypt(ciphertext, key);
    cout << "Decrypted text: " << decryptedText << endl;

    return 0;
}
