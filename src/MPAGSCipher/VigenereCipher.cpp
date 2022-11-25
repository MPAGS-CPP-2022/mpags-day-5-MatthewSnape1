#include "Alphabet.hpp"
#include "VigenereCipher.hpp"

#include <algorithm>
#include <string>

VigenereCipher::VigenereCipher(const std::string& key)
{
    this->setKey(key);
}

void VigenereCipher::setKey(const std::string& key)
{
    // Store the key
    key_ = key;

    // Make sure the key is uppercase
    
    // Remove non-alphabet characters

    // Check if the key is empty and replace with default if so

    // loop over the key

    // Find the letter position in the alphabet

    // Create a CaesarCipher using  this position as a key

    // Insert a std::pair of the letter and CaesarCipher into the lookup
}

std::string VigenereCipher::applyCipher(const std::string& inputText,
                            const CipherMode /*cipherMode*/) const
{

    // For each letter in input:

    // Find the corresponding letter in the key,
    // repeating/truncating as required

    // Find the Caesar cipher from thelookup

    // Run the (de)encryption

    // Add the result to the output

    return inputText;

}