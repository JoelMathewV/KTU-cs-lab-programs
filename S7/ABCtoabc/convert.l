%{
#include <stdio.h>
%}

%%
"abc" {printf("ABC");}
. {putchar(yytext[0]);}
%%

int main() {
    yylex();
    return 0; 
}

int yywrap() {
    return 1;
}