#include <iostream>
#include <vector>
#include <sstream>

std::vector<std::string> convertSentenceToVector(const std::string& sentence) {
    std::vector<std::string> words;
    std::istringstream iss(sentence);
    std::string word;
    
    while (iss >> word) {
        words.push_back(word);
    }
    
    return words;
}

int main() {
    std::string sentence;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);
    
    std::vector<std::string> words = convertSentenceToVector(sentence);
    
    std::cout << "Words in the sentence: ";
    for (const std::string& word : words) {
        std::cout << word << " ";
    }
    
    return 0;
}