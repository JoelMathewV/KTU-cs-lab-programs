%{
    #include <stdio.h>
%}
%%
int|float|for|if|else|while {printf("keyword");}
[a-zA-Z][a-zA-Z0-9]* {printf("identifier");}
%%
int main(){
    printf("enter ip");
    yylex();
    }
int yywrap(){
    return 1;
}