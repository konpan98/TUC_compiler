/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_MYANALYZER_TAB_H_INCLUDED
# define YY_YY_MYANALYZER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TK_ID = 258,
    TK_INT = 259,
    TK_FLOAT = 260,
    TK_STRING = 261,
    KW_INT = 262,
    KW_FALSE = 263,
    KW_FOR = 264,
    KW_NIL = 265,
    KW_BEGIN = 266,
    KW_REAL = 267,
    KW_VAR = 268,
    KW_WHILE = 269,
    KW_AND = 270,
    KW_STRING = 271,
    KW_CONST = 272,
    KW_BREAK = 273,
    KW_OR = 274,
    KW_BOOL = 275,
    KW_IF = 276,
    KW_CONTINUE = 277,
    KW_NOT = 278,
    KW_TRUE = 279,
    KW_ELSE = 280,
    KW_FUNC = 281,
    KW_RETURN = 282,
    TK_POWER = 283,
    TK_EQUAL = 284,
    TK_NOTEQUAL = 285,
    TK_LESS = 286,
    TK_MORE = 287,
    TK_WRTSTR = 288,
    TK_WRTINT = 289,
    TK_WRTREAL = 290,
    TK_RDSTR = 291,
    TK_RDINT = 292,
    TK_RDREAL = 293
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "myanalyzer.y"

  char* str;


#line 101 "myanalyzer.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MYANALYZER_TAB_H_INCLUDED  */
