#include <fstream>
#include <ios>
#include <iostream>

enum class Token {
  // Brackets
  LeftParen,
  RightParen,
  LeftBrace,
  RightBrace,
  LeftSquare,
  RightSquare,

  // Keywords
  Function,
  If,
  Else,
  And,
  Or,
  True,
  False,
  Print,
  Return,
  Eof,

  // Mathematics
  Plus,
  Minus,
  Slash,
  Star,
  Equal,

  // Comparision
  EqualEqual,
  Greater,
  GreaterEqual,
  Less,
  LessEqual,
  Bang,
  BangEqual,

  // Literals
  Identifier,
  String,
  Num,

  // Other Symbols
  Comma,
  Dot,
  Semi,
};

int main(int argc, char *argv[]) {
  std::cout << argv[1];

  std::fstream input(argv[1], std::ios::in);

  return 0;
}
