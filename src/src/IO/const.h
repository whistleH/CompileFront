#pragma once
#include <string>


namespace parser_config {
	const int ACCEPT = 10000;
	const int ERROR = -10000;
};

namespace Config {
	const std::string path_keyword = "./IO/keywords.txt";
	const std::string path_operator = "./IO/operator_symbol.txt";
	const std::string path_delimiter = "./IO/delimiter.txt";
	const std::string path_unstop = "./IO/unstop.txt";
	const std::string log_path = "./IO/parser.log";
	const std::string grammar_path = "./IO/grammar.txt";
	const std::string end = "$";
	const int end_int = -2;
};