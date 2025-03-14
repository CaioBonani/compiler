#ifndef _GLOBAL_H_
#define _GLOBAL_H_

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#ifndef YYPARSER
#include "../YACC/parser.tab.h"
#define ENDFILE 0
#endif

#ifndef FALSE
#define FALSE 0
#endif

#ifndef TRUE
#define TRUE 1
#endif

#define MAXLEXEMA 40

extern int linha; 
extern int indPilha;
extern char pilha[4][MAXLEXEMA+1];

extern FILE* source;
extern int Error;

typedef int TokenType;

typedef enum {
    TIPO_INT,
    TIPO_VOID
} Tipagem;

typedef enum {
    Statement, 
    Expressao, 
    Nenhum
} TipoNo;
typedef enum {  
    IfT, 
    WhileT, 
    RetornoINTT, 
    RetornoVOIDT, 
    NuloDecl, 
    DeclVarT, 
    DeclVetorT, 
    DeclFuncT, 
    VarParametroT, 
    VetorParametroT, 
    ParametroVOIDT 
} StatementTipo;

typedef enum {
    OperandoT, 
    ConstanteT, 
    IdT, 
    VarDeclT, 
    FunCallT, 
    VetorParamT, 
    AtribuicaoT, 
    NuloEXP, 
    OperadorRelacionalT
} ExpressaoTipo;
struct noArvore {

    struct noArvore * filho[3];
    struct noArvore * irmao;

    int linha;
    char lexema[MAXLEXEMA+1];

    TipoNo tipono;
    StatementTipo statement;
    ExpressaoTipo expressao;
};
typedef struct noArvore NoArvore;

#endif