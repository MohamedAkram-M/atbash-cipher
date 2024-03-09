#include <iostream>
using namespace std;

void atbashEncrypt(){
    string message;
    cout << "Enter Your Message:  ";
    // Get Message from the user.
    getline(cin, message);
    cout << '\n';
    // Iterates through every character in the string to make it Uppercase.
    for (int i =0; i <= message.size(); i++){
        message[i] = toupper(message[i]);
    }
    // Initialize the basic alphabet
    string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // Initialize the cipher alphabet
    string reverseAlpha = "ZYXWVUTSRQPONMLKJIHGFEDCBA";
    string encryptMessage = "";         // string to store the encrypted message.

    for (int i =0; i <= message.length(); i++){
        // checks weather the character is a letter or not.
        if (isalpha(message[i])){
            for (int j = 0; j <= alpha.length(); j++){
                // if the character has the same index as the one in the alphabet change it to the encrypted alphabet.
                if (message[i] == alpha[j]){
                    // adds the encrypted character to the string.
                    encryptMessage.push_back(reverseAlpha[j]);
                    break;
                }
            }
        }
        // if the character is a space or a punctuation add it to the encrypted message unchanged.
        else if (isspace(message[i]) || ispunct(message[i])) {
            encryptMessage.push_back(message[i]) ;
        }
    }
    // Printing the encrypted Message.
    cout << "Encrypted Message: " << encryptMessage;



}
void atbashDecrypt(){
    string message;
    cout << "Enter Your Encrypted Message:  ";
    // Get Message from the user.
    getline(cin, message);
    cout << '\n';
    // Iterates through every character in the string to make it Uppercase.
    for (int i =0; i <= message.size(); i++){
        message[i] = toupper(message[i]);
    }
    // Initialize the basic alphabet
    string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // Initialize the cipher alphabet
    string reverseAlpha = "ZYXWVUTSRQPONMLKJIHGFEDCBA";
    string decryptMessage = "";     // string to store the decrypted message.
    for (int i =0; i <= message.length(); i++){
        // checks weather the character is a letter or not.
        if (isalpha(message[i])){
            for (int j = 0; j <= reverseAlpha.length(); j++){
                // if the character has the same index as the one in the cipher alphabet change it to the original alphabet.
                if (message[i] == reverseAlpha[j]){
                    // adds the decrypted character to the string.
                    decryptMessage.push_back(alpha[j]);
                    break;
                }
            }
        }
        else if (isspace(message[i]) || ispunct(message[i])) {
            // if the character is a space or a punctuation add it to the decrypted message unchanged.
            decryptMessage.push_back(message[i]) ;
        }
    }
    // Printing the decrypted Message.
    cout << "Decrypted Message: " << decryptMessage;



}
void atbashEncrypt_2(){
    string message;
    cout << "Enter Your Message:  ";
    // Get Message from the user.
    getline(cin, message);
    cout << '\n';
    // Iterates through every character in the string to make it Uppercase.
    for (int i =0; i <= message.size(); i++){
        message[i] = toupper(message[i]);
    }
    // Initialize the basic alphabet
    string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // Initialize the cipher alphabet
    string reverseAlpha = "MLKJIHGFEDCBAZYXWVUTSRQPON";
    string encryptMessage = "";         // string to store the encrypted message.
    for (int i =0; i <= message.length(); i++){
        // checks weather the character is a letter or not.
        if (isalpha(message[i])){
            for (int j = 0; j <= alpha.length(); j++){
                // if the character has the same index as the one in the alphabet change it to the encrypted alphabet.
                if (message[i] == alpha[j]){
                    // adds the encrypted character to the string.
                    encryptMessage.push_back(reverseAlpha[j]);
                    break;
                }
            }
        }
        // if the character is a space or a punctuation add it to the encrypted message unchanged.
        else if (isspace(message[i]) || ispunct(message[i])) {
            encryptMessage.push_back(message[i]) ;
        }
    }
    // Printing the encrypted Message.
    cout << "Encrypted Message: " << encryptMessage;



}
void atbashDecrypt_2(){
    string message;
    cout << "Enter Your Encrypted Message:  ";
    // Get Message from the user.
    getline(cin, message);
    cout << '\n';
    // Iterates through every character in the string to make it Uppercase.
    for (int i =0; i <= message.size(); i++){
        message[i] = toupper(message[i]);
    }
    // Initialize the basic alphabet
    string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // Initialize the cipher alphabet
    string reverseAlpha = "MLKJIHGFEDCBAZYXWVUTSRQPON";
    string decryptMessage = "";     // string to store the decrypted message.
    for (int i =0; i <= message.length(); i++){
        // checks weather the character is a letter or not.
        if (isalpha(message[i])){
            for (int j = 0; j <= reverseAlpha.length(); j++){
                // if the character has the same index as the one in the cipher alphabet change it to the original alphabet.
                if (message[i] == reverseAlpha[j]){
                    // adds the decrypted character to the string.
                    decryptMessage.push_back(alpha[j]);
                    break;
                }
            }
        }
        // if the character is a space or a punctuation add it to the decrypted message unchanged.
        else if (isspace(message[i]) || ispunct(message[i])) {
            decryptMessage.push_back(message[i]) ;
        }
    }
    // Printing the decrypted Message.
    cout << "Decrypted Message: " << decryptMessage;



}

int main() {
    atbashEncrypt();
    return 0;
}
