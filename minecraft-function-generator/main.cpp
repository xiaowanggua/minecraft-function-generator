#include"parse.hpp"
#include<iostream>
int main() {
	std::string in;
	tokenList tl;
	std::getline(std::cin,in);
	//std::cout << in << std::endl;
	int wrong = 0;
	for (int i = 0;i<in.length(); i++) {
		char now = in[i];
		token temp;
		if (isdigit(now)){
			temp.type = NUM;
			temp.value = now;
			tl.tokens.push_back(temp);
			//std::cout << "find\"num\"" << std::endl;

		}
		else if(isalpha(now))
		{
			temp.type = WORD;
			temp.value = now;
			tl.tokens.push_back(temp);
			//std::cout << "find\"word\"" << std::endl;

		}
		else if (now==' ') {
			//std::cout << "find\"none\"" << std::endl;
		}
		else{
			bool find = false;
			for (int ii=0; ii < symbolMap.length(); ii++) {
				if (symbolMap[ii] == now) {
					temp.type = SYMBOL;
					temp.value = now;
					tl.tokens.push_back(temp);
					find = true;
					//std::cout << "find\"symbol\"" << std::endl;
					break;
				}
			}
			if (!find)
			{
				std::cout << "word not found" << std::endl;
				wrong = 1;
				break;
			}
			
		}
	}
	//½âÎö
	if (wrong == 0) {
		for (int i = 0; i < tl.tokens.size(); i++) {
			std::cout << "[" << "type:" << tl.tokens[i].type << "," << "value:" << tl.tokens[i].value << "" << "]" << std::endl;
		}
	}
}