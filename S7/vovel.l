%{
    #include <stdio.h>
    int v = 0;
%}
%%
[aeiouAEIOU] {}
. {v++;}
%%
main(){
    printf("enter ip");
    yylex();
    printf("consonent: %d", v);
    }
int yywrap(){
    return 1;
}