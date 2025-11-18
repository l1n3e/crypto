// Playfair Cipher Encryption and Decryption in C++

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class PlayfairCipher {
private:
    string key;
    char grid[5][5];

    void createGrid() {
        // Remove duplicates and keep only letters
        string uniqueKey;
        for (char c : key) {
            if (isalpha(c)) {
                c = toupper(c);
                if (uniqueKey.find(c) == string::npos && c != 'J') {
                    uniqueKey += c;
                }
            }
        }

        // Fill grid with the key
        int index = 0;
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (index < uniqueKey.length()) {
                    grid[i][j] = uniqueKey[index++];
                } else {
                    grid[i][j] = 'A';
                }
            }
        }
    }

    void getPosition(char letter, int &row, int &col) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (grid[i][j] == letter) {
                    row = i;
                    col = j;
                    return;
                }
            }
        }
    }

public:
    PlayfairCipher(const string &k) : key(k) {
        createGrid();
    }

    string encrypt(const string &plaintext) {
        string ciphertext = "";
        string preparedText = plaintext;
        // Preprocessing (pairing letters, etc.)
        // ... (Implementation of encryption goes here)
        return ciphertext;
    }

    string decrypt(const string &ciphertext) {
        string plaintext = "";
        // Preprocessing and decryption logic goes here
        // ... (Implementation of decryption goes here)
        return plaintext;
    }
};

int main() {
    PlayfairCipher cipher("MYSECRETKEY");
    string plaintext = "HELLO PLAYFAIR";
    string encrypted = cipher.encrypt(plaintext);
    cout << "Encrypted: " << encrypted << endl;
    string decrypted = cipher.decrypt(encrypted);
    cout << "Decrypted: " << decrypted << endl;
    return 0;
}