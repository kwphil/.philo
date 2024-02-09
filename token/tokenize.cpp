#include <string>
#include <optional>
#include <vector>

enum class TokenType {
    keyword,
    operator,
    int_lit,
    string_lit,
    char,
    semi
}

struct Token {
    TokenType type;
    std::optional<std::string> value;
}

std::vector<Token> tokenize(std::string input) {
    std::vector<Token> ret;

    for(int i = 0; i < input.length(); i++) {
        char c = input[i];

        if(std::isalpha(c)) {
            std::string currToken;
            for(char d : input.substr(i)) {
                if(isalphanum(d)) {
                    currToken.push_back(d);
                } else {
                    ret.push_back(currToken);
                    if(check::isKeyword(currToken)) {
                        ret[ret.size()] = TokenType::keyword;
                    }
                }
            }
        }
    }
}