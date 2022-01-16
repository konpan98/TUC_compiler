%{
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include "cgen.h"
#include "pilib.h"

extern int yylex(void);
extern int lineNum;
	
%}

%union
{
  char* str;

}

%token <str> TK_ID 
%token <str> TK_INT 
%token <str> TK_FLOAT 
%token <str> TK_STRING 
%token KW_INT 
%token<str> KW_FALSE
%token KW_FOR 
%token KW_NIL 
%token KW_BEGIN 
%token KW_REAL 
%token KW_VAR 
%token KW_WHILE
%token KW_AND 
%token KW_STRING 
%token KW_CONST 
%token KW_BREAK 
%token KW_OR 
%token KW_BOOL 
%token KW_IF 
%token KW_CONTINUE 
%token KW_NOT 
%token<str> KW_TRUE 
%token KW_ELSE 
%token KW_FUNC 
%token KW_RETURN 
%token TK_POWER 
%token TK_EQUAL 
%token TK_NOTEQUAL 
%token TK_LESS  
%token TK_MORE 
%token  TK_WRTSTR
%token TK_WRTINT
%token  TK_WRTREAL
%token  TK_RDSTR
%token  TK_RDINT
%token TK_RDREAL


%start begin

%left KW_OR
%left KW_AND
%left '<' '>' TK_EQUAL TK_NOTEQUAL TK_LESS TK_MORE
%left '-' '+'
%left '*' '/' '%'
%right TK_POWER
%right KW_NOT

%type <str> const_declaration
%type <str> var_declaration
%type <str> func_declaration
%type <str> begin_func
%type <str> expr
//%type <str> booleans
%type <str> declarations
%type <str> arrays_func
%type <str> func_body
%type <str> func_args
%type <str> arg_decl
%type <str> code_body
%type <str> code
%type <str> statements
%type <str> return_stmt
%type <str> assignment	
%type <str> if_statements 
%type <str> for_statements 
%type <str> while_statements 
%type <str> function_call 
//%type <str> composite_stmts
%type <str> statements_body
%type <str> statements_code
%type <str> pi_functions
//%type <str> comp_statements
%type <str> stmt_code
%type <str> for_assignment
%type <str> array_assignment



%%

/*INITIAL SYMBOL */
begin: 
 %empty 
|begin const_declaration ';'	{ printf("%s\n",$2); }
|begin var_declaration ';'	    { printf("%s\n",$2); } 
|begin func_declaration ';'		{ printf("%s\n",$2); }
|begin begin_func 				{ printf("%s\n",$2); }
;

/* BEGIN FUNCTION */
begin_func:
KW_FUNC KW_BEGIN '(' ')' func_body  {$$ = template("int main() %s",$5);}
;

/*VARIABLE DECLARATIONS */

var_declaration: 
 KW_VAR declarations KW_INT    { $$ = template("int %s;\n", $2); }
|KW_VAR declarations KW_REAL   { $$ = template("double %s;\n", $2); }
|KW_VAR declarations KW_STRING { $$ = template("char* %s;\n", $2); }
|KW_VAR declarations KW_BOOL   { $$ = template("int %s;\n", $2); }
;

declarations:
 TK_ID               		     	 { $$ = template("%s", $1); }
|declarations ',' TK_ID          	 { $$ = template("%s, %s", $1, $3); }
|TK_ID '=' expr                  	 { $$ = template("%s = %s", $1, $3); }
|declarations ',' TK_ID '=' expr 	 { $$ = template("%s, %s = %s", $1, $3, $5); }
|TK_ID '=' KW_TRUE                   { $$ = template("%s = 1", $1); }
|declarations ',' TK_ID '=' KW_TRUE  { $$ = template("%s, %s = 1", $1, $3); }
|TK_ID '=' KW_FALSE                  { $$ = template("%s = 0", $1); }
|declarations ',' TK_ID '=' KW_FALSE { $$ = template("%s, %s = 0", $1, $3); }
|TK_ID '[' ']' 		    		 	 { $$ = template("*%s", $1); }
|TK_ID '[' expr ']'					 { $$ = template("%s[%s]", $1, $3);}
|declarations ',' TK_ID '[' expr ']' { $$ = template("%s, %s[%s]", $1, $3, $5);}
;

/*
booleans:
 TK_ID               		 	 { $$ = template("$s",$1); }
|booleans ',' TK_ID  		     { $$ = template("%s, %s",$1,$3); }
|TK_ID '=' KW_TRUE               { $$ = template("%s = 1",$1,$3); }
|booleans ',' TK_ID '=' KW_TRUE  { $$ = template("%s, %s = true",$1,$3,$5); }
|TK_ID '=' KW_FALSE              { $$ = template("%s = 0",$1,$3); }
|booleans ',' TK_ID '=' KW_FALSE { $$ = template("%s, %s = false",$1,$3,$5); }
;
*/


/*CONSTANT DECLARATIONS */


const_declaration:
 KW_CONST declarations KW_INT  	  { $$ = template("const int %s;\n",$2); }
|KW_CONST declarations KW_REAL    { $$ = template("const double %s;\n",$2); }
|KW_CONST declarations KW_STRING  { $$ = template("const char* %s;\n",$2); }
|KW_CONST declarations KW_BOOL        { $$ = template("const int %s;\n",$2); }
;


/*FUNCTION DECLARATIONS */
arrays_func:
 '[' ']' KW_INT    	{ $$ = template("int []"); }
|'[' ']' KW_BOOL   	{ $$ = template("int []"); }
|'[' ']' KW_REAL    { $$ = template("double []"); }
|'[' ']' KW_STRING  { $$ = template("char* []"); }
;

func_declaration:
 KW_FUNC TK_ID '(' func_args ')' KW_INT  func_body        { $$ = template("int %s(%s) %s\n",$2,$4,$7); }
|KW_FUNC TK_ID '(' func_args ')' KW_BOOL  func_body       { $$ = template("int %s(%s) %s\n",$2,$4,$7); }
|KW_FUNC TK_ID '(' func_args ')' KW_REAL  func_body       { $$ = template("double %s(%s) %s\n",$2,$4,$7); }
|KW_FUNC TK_ID '(' func_args ')' KW_STRING  func_body     { $$ = template("char* %s(%s) %s\n",$2,$4,$7); }
|KW_FUNC TK_ID '(' func_args ')' arrays_func  func_body   { $$ = template("%s %s(%s) %s\n",$6,$2,$4,$7); }
|KW_FUNC TK_ID '(' func_args ')'  func_body   			  { $$ = template("void %s(%s) %s\n",$2,$4,$6); }
;

func_args:
 arg_decl        		{ $$ = template("%s",$1); }
|func_args ',' arg_decl { $$ = template("%s, %s",$1,$3); }
;

arg_decl:
 %empty                  { $$ = ""; }
|TK_ID KW_INT            { $$ = template("int %s",$1); }
|TK_ID KW_BOOL           { $$ = template("int %s",$1); }
|TK_ID KW_REAL           { $$ = template("double %s",$1); }
|TK_ID KW_STRING         { $$ = template("char* %s",$1); }
|TK_ID arrays_func       { $$ = template("%s %s",$2,$1); }
|TK_ID 					 { $$ = template("%s",$1); }
|expr                    { $$ = template("%s",$1); }; //2 reduce/reduce conflicts
;

func_body:
'{' code_body '}'       { $$ = template("{\n%s}",$2); }
;

code_body:
 code 					{ $$ = template("%s",$1); }
|code_body code 	 	{ $$ = template("%s%s",$1,$2); }
;

code:
 var_declaration  ';'  { $$ = template("%s",$1); }
|const_declaration ';' { $$ = template("%s",$1); } 
|statements            { $$ = template("%s",$1); }
;


/* EXPRESSIONS */
expr:
 TK_ID		  		   { $$ = template("%s",$1); }
|TK_INT       	       { $$ = $1; }
|TK_FLOAT	  		   { $$ = $1; }
|TK_STRING    		   { $$ = $1; }
|'(' expr ')' 		   { $$ = template("(%s)", $2); }
|expr '+' expr 		   { $$ = template("%s + %s", $1, $3); }
|expr '-' expr 		   { $$ = template("%s - %s", $1, $3); }
|expr '*' expr 		   { $$ = template("%s * %s", $1, $3); }
|expr '/' expr 		   { $$ = template("%s / %s", $1, $3); }
|expr '%' expr 		   { $$ = template("%s %% %s", $1, $3); }
|KW_NOT expr   		   { $$ = template("!%s",$2); }
|expr KW_AND expr 	   { $$ = template("%s && %s",$1,$3); }
|expr KW_OR expr  	   { $$ = template("%s || %s",$1,$3); }
|expr TK_POWER	expr   { $$ = template("%s ^ %s)",$1,$3); }
|'+' expr              { $$ = template("+%s",$2); }
|'-' expr              { $$ = template("-%s",$2); }
|expr TK_EQUAL expr    { $$ = template("%s == %s",$1,$3); }
|expr TK_LESS expr     { $$ = template("%s <= %s",$1,$3); }
|expr '<' expr         { $$ = template("%s < %s",$1,$3); }
|expr '>' expr         { $$ = template("%s > %s",$1,$3); }
|expr TK_MORE expr     { $$ = template("%s >= %s",$1,$3); }
|expr TK_NOTEQUAL expr { $$ = template("%s != %s",$1,$3); }
|function_call         { $$ = template("%s",$1); }
|array_assignment      { $$ = template("%s",$1); }
;


/*  STATEMENTS */


/*comp_statements:
 statements      { $$ = template("%s",$1);}
|comp_statements statements { $$ = template("%s%s",$1,$2);}
;
*/
statements:
/* var_declaration     { $$ = template("%s",$1);}
| const_declaration  { $$ = template("%s",$1);}*/
assignment		 { $$ = template("%s",$1); }
|if_statements       { $$ = template("%s",$1); }
|for_statements      { $$ = template("%s",$1); }
|while_statements    { $$ = template("%s",$1); }
|KW_BREAK ';'        { $$ = template("break;\n"); }
|KW_CONTINUE ';'     { $$ = template("continue;"); }
|return_stmt  ';'    { $$ = template("%s",$1); }
|function_call  ';'  { $$ = template("%s;\n",$1); }
;



assignment:
 TK_ID '=' expr ';'				{ $$ = template("%s = %s;\n",$1,$3); }
|array_assignment '=' expr ';'  { $$ = template("%s = %s;\n",$1,$3); }
|TK_ID '=' KW_FALSE ';'			{ $$ = template("%s = 0;\n",$1); }
|TK_ID '=' KW_TRUE ';'			{ $$ = template("%s = 1;\n",$1); }
;

array_assignment:
TK_ID '[' expr ']'      { $$ = template("%s[%s]",$1,$3); }
;

/*if_statements:
 KW_IF '(' expr ')' comp_statements  { $$ = template("if(%s) \n %s",$3,$5); }
|KW_IF '(' expr ')' '{' comp_statements '}' ';'  { $$ = template("if(%s) { \n %s}\n",$3,$6); }
|KW_IF '(' expr ')'  comp_statements KW_ELSE comp_statements 	 { $$ = template("if(%s) \n %s \n else %s \n",$3,$5,$7); }
|KW_IF '(' expr ')' '{' comp_statements '}' ';' KW_ELSE comp_statements 	 { $$ = template("if(%s) {\n %s } else  %s \n",$3,$6,$10); }
|KW_IF '(' expr ')' '{' comp_statements '}' ';' KW_ELSE '{' comp_statements '}'	';' { $$ = template("if(%s) {\n %s } \n else {\n %s }\n",$3,$6,$11); }
|KW_IF '(' expr ')'  comp_statements  KW_ELSE '{' comp_statements '}' ';'	 { $$ = template("if(%s) \n %s  else {\n %s }\n",$3,$5,$8); }
;
*/

if_statements:
 KW_IF '(' expr ')' statements_body  							 { $$ = template("if(%s) \n%s",$3,$5); }
|KW_IF '(' expr ')'  statements_body KW_ELSE statements_body 	 { $$ = template("if(%s) \n%selse %s\n",$3,$5,$7); }
;

statements_body:
 statements     		 	   { $$ = template("%s",$1); }
|'{' statements_code '}'  ';'  { $$ = template("{\n%s}\n",$2); }
;

statements_code:
%empty     { $$ = "";}
|stmt_code { $$ = template("%s",$1); }
;

stmt_code: 
 statements             { $$ = template("%s",$1); }
|stmt_code  statements  { $$ = template("%s\n%s",$1,$2); }
;

for_statements:
KW_FOR '(' for_assignment ';'  expr ';' for_assignment ')'  statements_body   { $$ = template("for(%s; %s; %s) %s",$3,$5,$7,$9); }
;

for_assignment:
 TK_ID '=' expr 	{ $$ = template("%s = %s",$1,$3); }
 ;

while_statements:
KW_WHILE '(' expr ')'   statements_body    { $$ = template("while(%s) %s",$3,$5); }
;

return_stmt:
 %empty          { $$ = ""; }
|KW_RETURN   	 { $$ = template("return;\n"); }
|KW_RETURN expr  { $$ = template("return %s;\n",$2); }
;

function_call:
 TK_ID '(' func_args ')'  { $$ = template("%s(%s)",$1,$3); }
| pi_functions  		  { $$ = template("%s",$1); }	
;


pi_functions:
 TK_RDSTR '(' ')'        		{ $$ = template("readString()"); }
|TK_RDINT '(' ')'        		{ $$ = template("readInt()"); }
|TK_RDREAL '(' ')'        		{ $$ = template("readReal()"); }
|TK_WRTSTR '(' ')'        		{ $$ = template("writeString()"); }
|TK_WRTSTR '(' TK_ID ')'        { $$ = template("writeString(%s)",$3); }
|TK_WRTSTR '(' TK_STRING ')'    { $$ = template("writeString(%s)",$3); }
|TK_WRTINT '(' ')'        		{ $$ = template("writeInt()"); }
|TK_WRTINT '(' TK_ID ')'        { $$ = template("writeInt(%s)",$3); }
|TK_WRTINT '(' TK_INT ')'       { $$ = template("writeInt(%s)",$3); }
|TK_WRTREAL '(' ')'        		{ $$ = template("writeReal()"); }
|TK_WRTREAL '(' TK_ID ')'       { $$ = template("writeReal(%s)",$3); }
|TK_WRTREAL '(' TK_FLOAT ')'    { $$ = template("writeReal(%s)",$3); }
;

%%
int main () {
  puts(c_prologue);
  if ( yyparse() == 0 )
    ;//printf("\nAccepted!\n");
  else
    printf("\nRejected!\n");
}

