%{
    #include<stdio.h>
    int valid=1; 
%}
%token digit letter 

%%
start: letter s 
s: letter s | digit s | ;
%%

int yyerror(){
    printf("It is not a identifier");
    valid = 0;
    return 0;
}

int main(){
    printf("\nEnter a name ot tested for identifier");
    yyparse();
    if(valid){
        printf("\nIt is an identifier");
    }
}