#include "token.h"

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

token_T* init(token_T* token,token_T* type_, char* value_)
{
    token->type = type_;
    token->value = value_;
}
token_T* repr(token_T* token) 
{
    if (token->value) {return (token->type && token->value);}
    return token->type; 
}
