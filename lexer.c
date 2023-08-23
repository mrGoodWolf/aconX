#include "lexer.h"
#include "token.h"
#include <stdio.h>
typedef struct LEXER_STRUCT
{
  char* src;
  size_t src_size;
  char c;
  unsigned int i;
  int pos;
  token_T* current_char;
} lexer_T;
typedef struct Token_struct
{
    char* value;
    char* type;
    enum
    {
        TT_ID,
        TT_INT,
        TT_FLOAT,
        TT_PLUS,
        TT_MINUS,
        TT_MUL,
        TT_DIV,
        TT_LPAR,
        TT_RPAR,

    }types;
}token_T;
typedef struct node {

    int val;

    struct node * next;

}node_T;


lexer_T* lexer_init(lexer_T* lexer,char* src)
{
    lexer->src = src;
    lexer->pos = -1;
    lexer->current_char = NULL;
    lexer->advance = advance(lexer);
}

lexer_T* advance(lexer_T* lexer)
{

}
token_T* make_tokens(token_T* token)
{
     int tokens = {0};



     return tokens;
}