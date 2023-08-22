#ifndef JSON_HANDLER_H
#define JSON_HANDLER_H

#include <nlohmann/json.hpp>
#include <string>

class JSONHandler {
private:
    nlohmann::json jsonData;

public:
    JSONHandler();

    bool readFromFile(const std::string& filename);
    bool writeToFile(const std::string& filename) const;
    void add(const std::string& key, const nlohmann::json& value);
    nlohmann::json get(const std::string& key) const;
    void print() const;
};

#endif // JSON_HANDLER_H
