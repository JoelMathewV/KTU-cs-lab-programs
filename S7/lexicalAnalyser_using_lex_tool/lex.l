%{ 
#include<stdio.h> 
%} 
delim [\t] 
ws {delim}+ 
letter [A-Za-z] 
digit [0-9] 
id {letter}({letter}|{digit})* 
num {digit}+(\.{digit}+)?(E[+|-]?{digit}+)? 
%% 
ws {printf("no action");} 
if|else|then|int {printf("%s is a keyword",yytext);} // TYPE 32 KEYWORDS 
{id} {printf("%s is a identifier",yytext);} 
{num} {printf(" it is a number");} 
%% 
main() 
{ 
yylex(); 
}
yywrap(){
    return 1;
}