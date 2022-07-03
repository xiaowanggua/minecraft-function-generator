#pragma once
#include <vector>
#include <string>
typedef struct token{
	int type;
	std::string value;
};
typedef struct tokenList{
	std::vector<token> tokens;
	int cur = 0;
};
enum {
	NUM = 1,
	SYMBOL = 2,
	KEYWORD = 3,
	WORD = 4,
	SPLIT =5
};
const std::string symbolMap = "+-*/=()";

class parse {
public:
	parse(std::string codes) {

	}
};