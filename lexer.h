#ifdef ACON_LEXER_H
#define ACON_LEXER_H
#include "token.h"
typedef struct LEXER_STRUCT
{
  char* src;
  size_t src_size;
  char c;
  unsigned int i;
} lexer_T;
lexer_T* lexer_init(char* src);

lexer_T* advance(lexer_T* lexer);

token_T* make_tokens(token_T* token);
#endif