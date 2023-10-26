%{
    #include <stdio.h>
%}
%%
int|float|for|if|else|while {printf("keyword");}
[a-zA-Z][a-zA-Z0-9]* {printf("identifier");}
%%
main(){
    printf("enter ip");
    yylex();
    // printf("consonent: %d", v);
    }
int yywrap(){
    return 1;
}