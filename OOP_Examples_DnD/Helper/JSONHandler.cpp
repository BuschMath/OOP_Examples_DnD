#include "JSONHandler.h"
#include <iostream>
#include <fstream>
#include <iomanip>

// Constructor
JSONHandler::JSONHandler() {}

// Function to read JSON from a file
bool JSONHandler::readFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Failed to open file " << filename << '\n';
        return false;
    }
    file >> jsonData;
    return true;
}

// Function to write JSON to a file
bool JSONHandler::writeToFile(const std::string& filename) const {
    std::ofstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Failed to open file " << filename << '\n';
        return false;
    }
    file << std::setw(4) << jsonData; // Writing with indentation
    return true;
}

// Function to add a key-value pair to the JSON object
void JSONHandler::add(const std::string& key, const nlohmann::json& value) {
    jsonData[key] = value;
}

// Function to get a value by key from the JSON object
nlohmann::json JSONHandler::get(const std::string& key) const {
    return jsonData.at(key);
}

// Function to print the JSON object to the console
void JSONHandler::print() const {
    std::cout << std::setw(4) << jsonData << '\n';
}
