%{
  #include <stdio.h>
  #include <math.h>
  #include <string.h>
  #include "myanalyzer.tab.h"
  #include "cgen.h"



  int lineNum = 1;
%}

IDENTIFIER [a-zA-Z_][0-9a-zA-Z_]*
DIGIT   [0-9]
INTEGER ([0]|([1-9]{DIGIT}*))
DECIMAL ([+-]?"."{INTEGER})|([+-]?{INTEGER}("."{INTEGER}?)?)
REAL   {DECIMAL}([eE][+-]?{INTEGER})?
escape_characters ("\n"|"\t"|"\r"|"\\"|"\"")
common_characters ("."|","|" "|[a-z]|[A-Z]|[0-9]|"-"|"+"|"*"|"/"|":"|"_"|"$"|"!"|"#"|"@"|"&"|"~"|"^"|"("|")")
STRING  ("\"")({common_characters}|{escape_characters})*("\"")

%x comment 

%%


int			  {return KW_INT;}
false 		{return KW_FALSE;}
for    		{return KW_FOR;}
nil    		{return KW_NIL;}
begin     {return KW_BEGIN;}
real      {return KW_REAL;}
var 			{return KW_VAR;}
while  		{return KW_WHILE;}	
and  			{return KW_AND;}
string    {return KW_STRING;}
const  		{return KW_CONST;}
break 		{return KW_BREAK;}
or 				{return KW_OR;}
bool 			{return KW_BOOL;}
if 				{return KW_IF;}
continue  {return KW_CONTINUE;}
not 			{return KW_NOT;}
true 			{return KW_TRUE;}
else      {return KW_ELSE;}
func      {return KW_FUNC;}
return 		{return KW_RETURN;}

"readString"  return TK_RDSTR;
"readInt"     return TK_RDINT;
"readReal"    return TK_RDREAL;
"writeString" return TK_WRTSTR;
"writeInt"    return TK_WRTINT;
"writeReal"   return TK_WRTREAL;


{IDENTIFIER} {yylval.str = strdup(yytext); 
                return TK_ID; }

{INTEGER}   {yylval.str = strdup(yytext); 
				return TK_INT;}


{STRING}    {yylval.str = strdup(yytext);
             return TK_STRING;}

{REAL}      {yylval.str = strdup(yytext);
				return TK_FLOAT;}




"+" 			return '+';
"-" 			return '-';
"*" 			return '*';
"/" 			return '/';
"%" 			return '%';
"**" 			return TK_POWER;
"==" 			return TK_EQUAL;
"!=" 			return TK_NOTEQUAL;
"<" 			return '<';
"<=" 			return TK_LESS;
">" 			return '>';
">="			return TK_MORE;
"="				return '=';



";" 			return ';';
")" 			return ')';
"(" 			return '(';
"," 			return ',';
"[" 			return '[';
"]" 			return ']';
"{" 			return '{';
"}" 			return '}';





"//"[^\n]*  		//printf("Line %d: line comment: %s\n", lineNum, yytext);/* eat line comments */

"/*"                    { BEGIN(comment);  }

<comment>[^*\n]*        /* eat anything that's not a '*' */
<comment>"*"+[^*/\n]*   /* eat up '*'s not followed by '/'s */
<comment>\n             ++lineNum;
<comment>"*"+"/"        { BEGIN(INITIAL);  }

[ \r\t]		/* eat whitespace */
\n 					 ++lineNum;

<<EOF>> 	return EOF;
.           { printf("Line %d Lexical Error: Unrecognized literal %s\n", lineNum, yytext); }


%%

