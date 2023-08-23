#ifdef ACON_TOKEN_H
#define ACON_TOKEN_H
typedef struct Token_struct
{
    char* value;
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
token_T* init(token_T* type_, value);

token_T* repr();

#endif