/* 
 * @copyright (c) 2008, Hedspi, Hanoi University of Technology
 * @author Huu-Duc Nguyen
 * @version 1.0
 */

#ifndef __TOKEN_H__
#define __TOKEN_H__

#define MAX_IDENT_LEN 15

#define KEYWORDS_COUNT 30

typedef enum
{
  TK_NONE,
  TK_IDENT,
  TK_NUMBER,
  TK_CHAR,
  TK_EOF,

  // Thêm token String
  TK_STRING,

  KW_PROGRAM,
  KW_CONST,
  KW_TYPE,
  KW_VAR,
  KW_INTEGER,
  KW_CHAR,
  KW_ARRAY,
  KW_OF,
  KW_FUNCTION,
  KW_PROCEDURE,
  KW_BEGIN,
  KW_END,
  KW_CALL,
  KW_IF,
  KW_THEN,
  KW_ELSE,
  KW_WHILE,
  KW_DO,
  KW_FOR,
  KW_TO,

  // Thêm keyword KW_FLOAT vào trong token.h
  KW_FLOAT,

  // Thêm keyword STRING
  KW_STRING,

  // Them keyword REPEAT / ULTIL
  KW_REPEAT,
  KW_UNTIL,

  // Add keyword RETURN
  KW_RETURN,

  // Thêm keyword SUM
  KW_SUM,

  // TODO: Bai3
  KW_SWITCH,
  KW_CASE,
  KW_DEFAULT,
  KW_BREAK,

  SB_SEMICOLON,
  SB_COLON,
  SB_PERIOD,
  SB_COMMA,
  SB_ASSIGN,
  SB_EQ,
  SB_NEQ,
  SB_LT,
  SB_LE,
  SB_GT,
  SB_GE,
  SB_PLUS,
  SB_MINUS,
  SB_TIMES,
  SB_SLASH,
  SB_LPAR,
  SB_RPAR,
  SB_LSEL,
  SB_RSEL,

  // TODO: Bai2 <Thêm mũ>
  SB_EXP

} TokenType;

typedef struct
{
  char string[MAX_IDENT_LEN + 1];
  int lineNo, colNo;
  TokenType tokenType;
  int value;            // --- Int value ---
  int flagNumber;       // --- flagNumber = 0 -> int value, flagNumber = 1 -> floatValue ---
  float fValue;         // --- Float value ---
  char stringNode[256]; // --- Thêm String ---
} Token;

TokenType checkKeyword(char *string);
Token *makeToken(TokenType tokenType, int lineNo, int colNo);
char *tokenToString(TokenType tokenType);

#endif
