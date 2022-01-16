/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "myanalyzer.y"

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include "cgen.h"
#include "pilib.h"

extern int yylex(void);
extern int lineNum;
	

#line 84 "myanalyzer.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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


#line 180 "myanalyzer.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MYANALYZER_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   676

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  117
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  225

#define YYUNDEFTOK  2
#define YYMAXUTOK   293


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    45,     2,     2,
      47,    48,    43,    42,    49,    41,     2,    44,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    46,
      39,    50,    40,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    51,     2,    52,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    53,     2,    54,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   104,   104,   105,   106,   107,   108,   113,   119,   120,
     121,   122,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   155,   156,   157,   158,   164,   165,   166,
     167,   171,   172,   173,   174,   175,   176,   180,   181,   185,
     186,   187,   188,   189,   190,   191,   192,   196,   200,   201,
     205,   206,   207,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   251,   252,   253,
     254,   255,   256,   257,   258,   264,   265,   266,   267,   271,
     285,   286,   290,   291,   295,   296,   300,   301,   305,   309,
     313,   317,   318,   319,   323,   324,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TK_ID", "TK_INT", "TK_FLOAT",
  "TK_STRING", "KW_INT", "KW_FALSE", "KW_FOR", "KW_NIL", "KW_BEGIN",
  "KW_REAL", "KW_VAR", "KW_WHILE", "KW_AND", "KW_STRING", "KW_CONST",
  "KW_BREAK", "KW_OR", "KW_BOOL", "KW_IF", "KW_CONTINUE", "KW_NOT",
  "KW_TRUE", "KW_ELSE", "KW_FUNC", "KW_RETURN", "TK_POWER", "TK_EQUAL",
  "TK_NOTEQUAL", "TK_LESS", "TK_MORE", "TK_WRTSTR", "TK_WRTINT",
  "TK_WRTREAL", "TK_RDSTR", "TK_RDINT", "TK_RDREAL", "'<'", "'>'", "'-'",
  "'+'", "'*'", "'/'", "'%'", "';'", "'('", "')'", "','", "'='", "'['",
  "']'", "'{'", "'}'", "$accept", "begin", "begin_func", "var_declaration",
  "declarations", "const_declaration", "arrays_func", "func_declaration",
  "func_args", "arg_decl", "func_body", "code_body", "code", "expr",
  "statements", "assignment", "array_assignment", "if_statements",
  "statements_body", "statements_code", "stmt_code", "for_statements",
  "for_assignment", "while_statements", "return_stmt", "function_call",
  "pi_functions", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,    60,
      62,    45,    43,    42,    47,    37,    59,    40,    41,    44,
      61,    91,    93,   123,   125
};
# endif

#define YYPACT_NINF (-83)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-102)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -83,    12,   -83,     3,     3,     5,   -83,   -35,   -31,   -25,
      -7,   134,   329,    -8,    -2,   -83,   -83,   -83,   190,    -1,
     -83,   -83,   -83,   -83,    44,   -83,   -83,   -83,   -83,   275,
       1,   -38,   -83,   -83,   -83,   -83,   297,   -83,    31,    35,
      39,    42,    52,    53,   297,   297,   297,   595,   -83,   -83,
     -83,   -83,   352,    26,   307,    32,   -83,   595,    48,   275,
     297,   -83,     4,    27,    45,    65,    72,    73,   124,   124,
     445,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   -83,   230,   297,   -83,   -83,
     -83,   -83,   169,   -83,    78,   275,   434,   -83,    47,   371,
      85,    88,   -83,    94,    96,   -83,    97,   100,   -83,   -83,
     -83,   -83,   -83,   631,   613,   121,    74,    74,    74,    74,
      74,    74,   124,   124,   121,   121,   121,   -83,   -83,   595,
     390,   232,    48,    48,    48,    48,    99,    48,   -83,   -83,
     -27,   108,   109,   111,   113,   118,   297,   130,   140,    70,
     -83,   -83,   -83,   137,   -83,   -83,   -83,   142,   143,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   252,   187,   297,
     -83,   297,   -83,   595,   -83,   -83,   -83,   -83,   297,   -83,
     -83,   145,   153,   538,   151,   162,   476,   507,   557,   -83,
     -83,   -83,   297,   297,   144,   144,   -83,   595,   576,   339,
     -83,   -83,   184,   187,   -83,   161,   339,   144,   170,   173,
     -83,   -83,   144,   -83,   -83
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     1,     0,     0,     0,     6,     0,     0,     0,
      12,     0,     0,     0,     0,     4,     3,     5,     0,     0,
       8,     9,    10,    11,     0,    23,    24,    25,    26,    39,
       0,    53,    54,    55,    56,    18,     0,    16,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    14,    76,    75,
     105,    20,     0,    13,    53,     0,    37,    46,     0,    39,
       0,    63,     0,     0,     0,     0,     0,     0,    68,    67,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    21,     0,     0,    40,    42,
      43,    41,     0,    44,     0,    39,   101,     7,     0,     0,
       0,     0,   109,     0,     0,   112,     0,     0,   115,   106,
     107,   108,    57,    64,    65,    66,    69,    74,    70,    73,
      71,    72,    59,    58,    60,    61,    62,    19,    17,    15,
       0,     0,     0,     0,     0,     0,     0,     0,    36,    38,
       0,     0,     0,     0,     0,     0,   102,     0,     0,   101,
      48,    52,    77,     0,    78,    79,    80,     0,     0,   104,
      89,   110,   111,   113,   114,   116,   117,    22,    27,    29,
      30,    28,    31,    33,    34,    32,    35,     0,     0,     0,
      81,     0,    82,   103,    50,    51,    47,    49,     0,    83,
      84,     0,     0,     0,     0,     0,     0,     0,     0,    87,
      88,    85,     0,     0,   101,   101,    86,    99,     0,    94,
      92,   100,    90,     0,    96,     0,    95,   101,     0,     0,
      97,    91,   101,    93,    98
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -83,   -83,   -83,   219,   218,   228,   136,   -83,   181,   146,
     -23,   -83,    93,   -18,   -77,   -83,   -82,   -83,    -5,   -83,
     -83,   -83,    30,   -83,   -83,   -79,   -83
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     6,   147,    11,   148,    93,     9,    55,    56,
      97,   149,   150,    57,   210,   152,    48,   154,   211,   215,
     216,   155,   195,   156,   157,    49,    50
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      47,    52,    31,    32,    33,    34,    10,   100,    13,    59,
     101,    15,     2,    60,   153,    16,    14,   158,    61,   151,
      59,    17,    36,   177,    60,     3,    68,    69,    70,     4,
     103,   104,    38,    39,    40,    41,    42,    43,     5,    29,
      44,    45,    99,    18,    19,    30,    46,    53,   106,    58,
     107,    51,   102,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   153,   129,   130,
     158,   138,   151,   140,    99,   105,    86,    87,    62,   141,
      94,    95,    63,     3,   142,   132,    64,     4,   143,    65,
     133,   144,   145,   108,   134,   159,    95,   146,   135,    66,
      67,    96,    73,    38,    39,    40,    41,    42,    43,   172,
     173,   174,   175,   109,   176,    80,    81,    82,    83,    84,
     110,   111,   153,   153,   186,   158,   158,   153,   183,   136,
     158,    96,   214,   161,   153,   153,   162,   158,   158,   220,
     153,    20,   163,   158,   164,   165,    21,   140,   166,    73,
      22,   131,    73,   141,    23,   178,   179,   180,   142,   193,
     181,   196,   143,   197,   182,   144,   145,    82,    83,    84,
     198,   146,    31,    32,    33,    34,   184,    38,    39,    40,
      41,    42,    43,    24,   207,   208,   185,   188,   189,   190,
     194,   199,    36,    31,    32,    33,    34,   209,    35,   200,
     212,   202,    38,    39,    40,    41,    42,    43,   203,   217,
      44,    45,   221,    36,    37,   219,    46,   224,   222,   223,
       7,   131,    12,    38,    39,    40,    41,    42,    43,     8,
     137,    44,    45,    31,    32,    33,    34,    46,   127,   168,
      98,   139,   187,   218,   169,     0,     0,     0,   170,     0,
       0,     0,   171,    36,   128,    31,    32,    33,    34,     0,
     191,     0,     0,    38,    39,    40,    41,    42,    43,     0,
       0,    44,    45,     0,     0,    36,   192,    46,    54,    32,
      33,    34,     0,     0,     0,    38,    39,    40,    41,    42,
      43,     0,     0,    44,    45,     0,     0,     0,    36,    46,
      31,    32,    33,    34,     0,     0,     0,     0,    38,    39,
      40,    41,    42,    43,    88,     0,    44,    45,     0,    89,
      36,     0,    46,    90,     0,     0,     0,    91,     0,     0,
      38,    39,    40,    41,    42,    43,    25,     0,    44,    45,
       0,    26,   140,     0,    46,    27,     0,     0,   141,    28,
       0,     0,     0,   142,    59,   -45,   -45,   143,    92,     0,
     144,   145,     0,     0,     0,     0,   146,    71,     0,     0,
       0,    72,    38,    39,    40,    41,    42,    43,    24,     0,
      73,    74,    75,    76,    77,  -101,    71,     0,     0,     0,
      72,    78,    79,    80,    81,    82,    83,    84,     0,    73,
      74,    75,    76,    77,    85,    71,     0,     0,     0,    72,
      78,    79,    80,    81,    82,    83,    84,     0,    73,    74,
      75,    76,    77,   160,     0,     0,     0,     0,     0,    78,
      79,    80,    81,    82,    83,    84,     0,   140,     0,     0,
       0,     0,   167,   141,     0,     0,     0,     3,   142,     0,
       0,     4,   143,     0,     0,   144,   145,     0,     0,     0,
      71,   146,     0,     0,    72,     0,     0,    38,    39,    40,
      41,    42,    43,    73,    74,    75,    76,    77,     0,     0,
       0,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      84,    71,     0,   112,     0,    72,     0,     0,     0,     0,
       0,     0,     0,     0,    73,    74,    75,    76,    77,     0,
       0,     0,     0,     0,     0,    78,    79,    80,    81,    82,
      83,    84,    71,     0,   204,     0,    72,     0,     0,     0,
       0,     0,     0,     0,     0,    73,    74,    75,    76,    77,
       0,     0,     0,     0,     0,     0,    78,    79,    80,    81,
      82,    83,    84,    71,     0,   205,     0,    72,     0,     0,
       0,     0,     0,     0,     0,     0,    73,    74,    75,    76,
      77,     0,    71,     0,     0,     0,    72,    78,    79,    80,
      81,    82,    83,    84,   201,    73,    74,    75,    76,    77,
       0,    71,     0,     0,     0,    72,    78,    79,    80,    81,
      82,    83,    84,   206,    73,    74,    75,    76,    77,     0,
      71,     0,     0,     0,    72,    78,    79,    80,    81,    82,
      83,    84,   213,    73,    74,    75,    76,    77,    71,     0,
       0,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      84,    73,    74,    75,    76,    77,     0,     0,     0,     0,
       0,     0,    78,    79,    80,    81,    82,    83,    84,    73,
      74,    75,    76,    77,     0,     0,     0,     0,     0,     0,
      78,    79,    80,    81,    82,    83,    84
};

static const yytype_int16 yycheck[] =
{
      18,    19,     3,     4,     5,     6,     3,     3,     3,    47,
       6,    46,     0,    51,    96,    46,    11,    96,    36,    96,
      47,    46,    23,    50,    51,    13,    44,    45,    46,    17,
       3,     4,    33,    34,    35,    36,    37,    38,    26,    47,
      41,    42,    60,    50,    51,    47,    47,     3,     3,    48,
       5,    52,    48,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,   149,    86,    87,
     149,    94,   149,     3,    92,    48,    50,    51,    47,     9,
      48,    49,    47,    13,    14,     7,    47,    17,    18,    47,
      12,    21,    22,    48,    16,    48,    49,    27,    20,    47,
      47,    53,    28,    33,    34,    35,    36,    37,    38,   132,
     133,   134,   135,    48,   137,    41,    42,    43,    44,    45,
      48,    48,   204,   205,    54,   204,   205,   209,   146,    51,
     209,    53,   209,    48,   216,   217,    48,   216,   217,   216,
     222,     7,    48,   222,    48,    48,    12,     3,    48,    28,
      16,    52,    28,     9,    20,    47,    47,    46,    14,   177,
      47,   179,    18,   181,    46,    21,    22,    43,    44,    45,
     188,    27,     3,     4,     5,     6,    46,    33,    34,    35,
      36,    37,    38,    49,   202,   203,    46,    50,    46,    46,
       3,    46,    23,     3,     4,     5,     6,    53,     8,    46,
     205,    50,    33,    34,    35,    36,    37,    38,    46,    25,
      41,    42,   217,    23,    24,    54,    47,   222,    48,    46,
       1,    52,     4,    33,    34,    35,    36,    37,    38,     1,
      94,    41,    42,     3,     4,     5,     6,    47,     8,     7,
      59,    95,   149,   213,    12,    -1,    -1,    -1,    16,    -1,
      -1,    -1,    20,    23,    24,     3,     4,     5,     6,    -1,
       8,    -1,    -1,    33,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,    -1,    -1,    23,    24,    47,     3,     4,
       5,     6,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    -1,    -1,    41,    42,    -1,    -1,    -1,    23,    47,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    38,     7,    -1,    41,    42,    -1,    12,
      23,    -1,    47,    16,    -1,    -1,    -1,    20,    -1,    -1,
      33,    34,    35,    36,    37,    38,     7,    -1,    41,    42,
      -1,    12,     3,    -1,    47,    16,    -1,    -1,     9,    20,
      -1,    -1,    -1,    14,    47,    48,    49,    18,    51,    -1,
      21,    22,    -1,    -1,    -1,    -1,    27,    15,    -1,    -1,
      -1,    19,    33,    34,    35,    36,    37,    38,    49,    -1,
      28,    29,    30,    31,    32,    46,    15,    -1,    -1,    -1,
      19,    39,    40,    41,    42,    43,    44,    45,    -1,    28,
      29,    30,    31,    32,    52,    15,    -1,    -1,    -1,    19,
      39,    40,    41,    42,    43,    44,    45,    -1,    28,    29,
      30,    31,    32,    52,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,    42,    43,    44,    45,    -1,     3,    -1,    -1,
      -1,    -1,    52,     9,    -1,    -1,    -1,    13,    14,    -1,
      -1,    17,    18,    -1,    -1,    21,    22,    -1,    -1,    -1,
      15,    27,    -1,    -1,    19,    -1,    -1,    33,    34,    35,
      36,    37,    38,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,    42,    43,    44,
      45,    15,    -1,    48,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,    42,    43,
      44,    45,    15,    -1,    48,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,    42,
      43,    44,    45,    15,    -1,    48,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    -1,    15,    -1,    -1,    -1,    19,    39,    40,    41,
      42,    43,    44,    45,    46,    28,    29,    30,    31,    32,
      -1,    15,    -1,    -1,    -1,    19,    39,    40,    41,    42,
      43,    44,    45,    46,    28,    29,    30,    31,    32,    -1,
      15,    -1,    -1,    -1,    19,    39,    40,    41,    42,    43,
      44,    45,    46,    28,    29,    30,    31,    32,    15,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,    42,    43,    44,
      45,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,    42,    43,    44,    45,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    42,    43,    44,    45
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    56,     0,    13,    17,    26,    57,    58,    60,    62,
       3,    59,    59,     3,    11,    46,    46,    46,    50,    51,
       7,    12,    16,    20,    49,     7,    12,    16,    20,    47,
      47,     3,     4,     5,     6,     8,    23,    24,    33,    34,
      35,    36,    37,    38,    41,    42,    47,    68,    71,    80,
      81,    52,    68,     3,     3,    63,    64,    68,    48,    47,
      51,    68,    47,    47,    47,    47,    47,    47,    68,    68,
      68,    15,    19,    28,    29,    30,    31,    32,    39,    40,
      41,    42,    43,    44,    45,    52,    50,    51,     7,    12,
      16,    20,    51,    61,    48,    49,    53,    65,    63,    68,
       3,     6,    48,     3,     4,    48,     3,     5,    48,    48,
      48,    48,    48,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,     8,    24,    68,
      68,    52,     7,    12,    16,    20,    51,    61,    65,    64,
       3,     9,    14,    18,    21,    22,    27,    58,    60,    66,
      67,    69,    70,    71,    72,    76,    78,    79,    80,    48,
      52,    48,    48,    48,    48,    48,    48,    52,     7,    12,
      16,    20,    65,    65,    65,    65,    65,    50,    47,    47,
      46,    47,    46,    68,    46,    46,    54,    67,    50,    46,
      46,     8,    24,    68,     3,    77,    68,    68,    68,    46,
      46,    46,    50,    46,    48,    48,    46,    68,    68,    53,
      69,    73,    73,    46,    69,    74,    75,    25,    77,    54,
      69,    73,    48,    46,    73
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    55,    56,    56,    56,    56,    56,    57,    58,    58,
      58,    58,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    60,    60,    60,    60,    61,    61,    61,
      61,    62,    62,    62,    62,    62,    62,    63,    63,    64,
      64,    64,    64,    64,    64,    64,    64,    65,    66,    66,
      67,    67,    67,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    69,    69,    69,
      69,    69,    69,    69,    69,    70,    70,    70,    70,    71,
      72,    72,    73,    73,    74,    74,    75,    75,    76,    77,
      78,    79,    79,    79,    80,    80,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     3,     3,     3,     2,     5,     3,     3,
       3,     3,     1,     3,     3,     5,     3,     5,     3,     5,
       3,     4,     6,     3,     3,     3,     3,     3,     3,     3,
       3,     7,     7,     7,     7,     7,     6,     1,     3,     0,
       2,     2,     2,     2,     2,     1,     1,     3,     1,     2,
       2,     2,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     2,     3,     3,     3,     2,     2,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     4,     4,     4,     4,     4,
       5,     7,     1,     4,     0,     1,     1,     2,     9,     3,
       5,     0,     1,     2,     4,     1,     3,     3,     3,     3,
       4,     4,     3,     4,     4,     3,     4,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 3:
#line 105 "myanalyzer.y"
                                { printf("%s\n",(yyvsp[-1].str)); }
#line 1601 "myanalyzer.tab.c"
    break;

  case 4:
#line 106 "myanalyzer.y"
                                    { printf("%s\n",(yyvsp[-1].str)); }
#line 1607 "myanalyzer.tab.c"
    break;

  case 5:
#line 107 "myanalyzer.y"
                                        { printf("%s\n",(yyvsp[-1].str)); }
#line 1613 "myanalyzer.tab.c"
    break;

  case 6:
#line 108 "myanalyzer.y"
                                                { printf("%s\n",(yyvsp[0].str)); }
#line 1619 "myanalyzer.tab.c"
    break;

  case 7:
#line 113 "myanalyzer.y"
                                    {(yyval.str) = template("int main() %s",(yyvsp[0].str));}
#line 1625 "myanalyzer.tab.c"
    break;

  case 8:
#line 119 "myanalyzer.y"
                               { (yyval.str) = template("int %s;\n", (yyvsp[-1].str)); }
#line 1631 "myanalyzer.tab.c"
    break;

  case 9:
#line 120 "myanalyzer.y"
                               { (yyval.str) = template("double %s;\n", (yyvsp[-1].str)); }
#line 1637 "myanalyzer.tab.c"
    break;

  case 10:
#line 121 "myanalyzer.y"
                               { (yyval.str) = template("char* %s;\n", (yyvsp[-1].str)); }
#line 1643 "myanalyzer.tab.c"
    break;

  case 11:
#line 122 "myanalyzer.y"
                               { (yyval.str) = template("int %s;\n", (yyvsp[-1].str)); }
#line 1649 "myanalyzer.tab.c"
    break;

  case 12:
#line 126 "myanalyzer.y"
                                         { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 1655 "myanalyzer.tab.c"
    break;

  case 13:
#line 127 "myanalyzer.y"
                                         { (yyval.str) = template("%s, %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1661 "myanalyzer.tab.c"
    break;

  case 14:
#line 128 "myanalyzer.y"
                                         { (yyval.str) = template("%s = %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1667 "myanalyzer.tab.c"
    break;

  case 15:
#line 129 "myanalyzer.y"
                                         { (yyval.str) = template("%s, %s = %s", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1673 "myanalyzer.tab.c"
    break;

  case 16:
#line 130 "myanalyzer.y"
                                     { (yyval.str) = template("%s = 1", (yyvsp[-2].str)); }
#line 1679 "myanalyzer.tab.c"
    break;

  case 17:
#line 131 "myanalyzer.y"
                                     { (yyval.str) = template("%s, %s = 1", (yyvsp[-4].str), (yyvsp[-2].str)); }
#line 1685 "myanalyzer.tab.c"
    break;

  case 18:
#line 132 "myanalyzer.y"
                                     { (yyval.str) = template("%s = 0", (yyvsp[-2].str)); }
#line 1691 "myanalyzer.tab.c"
    break;

  case 19:
#line 133 "myanalyzer.y"
                                     { (yyval.str) = template("%s, %s = 0", (yyvsp[-4].str), (yyvsp[-2].str)); }
#line 1697 "myanalyzer.tab.c"
    break;

  case 20:
#line 134 "myanalyzer.y"
                                                 { (yyval.str) = template("*%s", (yyvsp[-2].str)); }
#line 1703 "myanalyzer.tab.c"
    break;

  case 21:
#line 135 "myanalyzer.y"
                                                         { (yyval.str) = template("%s[%s]", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 1709 "myanalyzer.tab.c"
    break;

  case 22:
#line 136 "myanalyzer.y"
                                     { (yyval.str) = template("%s, %s[%s]", (yyvsp[-5].str), (yyvsp[-3].str), (yyvsp[-1].str));}
#line 1715 "myanalyzer.tab.c"
    break;

  case 23:
#line 155 "myanalyzer.y"
                                  { (yyval.str) = template("const int %s;\n",(yyvsp[-1].str)); }
#line 1721 "myanalyzer.tab.c"
    break;

  case 24:
#line 156 "myanalyzer.y"
                                  { (yyval.str) = template("const double %s;\n",(yyvsp[-1].str)); }
#line 1727 "myanalyzer.tab.c"
    break;

  case 25:
#line 157 "myanalyzer.y"
                                  { (yyval.str) = template("const char* %s;\n",(yyvsp[-1].str)); }
#line 1733 "myanalyzer.tab.c"
    break;

  case 26:
#line 158 "myanalyzer.y"
                                      { (yyval.str) = template("const int %s;\n",(yyvsp[-1].str)); }
#line 1739 "myanalyzer.tab.c"
    break;

  case 27:
#line 164 "myanalyzer.y"
                        { (yyval.str) = template("int []"); }
#line 1745 "myanalyzer.tab.c"
    break;

  case 28:
#line 165 "myanalyzer.y"
                        { (yyval.str) = template("int []"); }
#line 1751 "myanalyzer.tab.c"
    break;

  case 29:
#line 166 "myanalyzer.y"
                    { (yyval.str) = template("double []"); }
#line 1757 "myanalyzer.tab.c"
    break;

  case 30:
#line 167 "myanalyzer.y"
                    { (yyval.str) = template("char* []"); }
#line 1763 "myanalyzer.tab.c"
    break;

  case 31:
#line 171 "myanalyzer.y"
                                                          { (yyval.str) = template("int %s(%s) %s\n",(yyvsp[-5].str),(yyvsp[-3].str),(yyvsp[0].str)); }
#line 1769 "myanalyzer.tab.c"
    break;

  case 32:
#line 172 "myanalyzer.y"
                                                          { (yyval.str) = template("int %s(%s) %s\n",(yyvsp[-5].str),(yyvsp[-3].str),(yyvsp[0].str)); }
#line 1775 "myanalyzer.tab.c"
    break;

  case 33:
#line 173 "myanalyzer.y"
                                                          { (yyval.str) = template("double %s(%s) %s\n",(yyvsp[-5].str),(yyvsp[-3].str),(yyvsp[0].str)); }
#line 1781 "myanalyzer.tab.c"
    break;

  case 34:
#line 174 "myanalyzer.y"
                                                          { (yyval.str) = template("char* %s(%s) %s\n",(yyvsp[-5].str),(yyvsp[-3].str),(yyvsp[0].str)); }
#line 1787 "myanalyzer.tab.c"
    break;

  case 35:
#line 175 "myanalyzer.y"
                                                          { (yyval.str) = template("%s %s(%s) %s\n",(yyvsp[-1].str),(yyvsp[-5].str),(yyvsp[-3].str),(yyvsp[0].str)); }
#line 1793 "myanalyzer.tab.c"
    break;

  case 36:
#line 176 "myanalyzer.y"
                                                                  { (yyval.str) = template("void %s(%s) %s\n",(yyvsp[-4].str),(yyvsp[-2].str),(yyvsp[0].str)); }
#line 1799 "myanalyzer.tab.c"
    break;

  case 37:
#line 180 "myanalyzer.y"
                                { (yyval.str) = template("%s",(yyvsp[0].str)); }
#line 1805 "myanalyzer.tab.c"
    break;

  case 38:
#line 181 "myanalyzer.y"
                        { (yyval.str) = template("%s, %s",(yyvsp[-2].str),(yyvsp[0].str)); }
#line 1811 "myanalyzer.tab.c"
    break;

  case 39:
#line 185 "myanalyzer.y"
                         { (yyval.str) = ""; }
#line 1817 "myanalyzer.tab.c"
    break;

  case 40:
#line 186 "myanalyzer.y"
                         { (yyval.str) = template("int %s",(yyvsp[-1].str)); }
#line 1823 "myanalyzer.tab.c"
    break;

  case 41:
#line 187 "myanalyzer.y"
                         { (yyval.str) = template("int %s",(yyvsp[-1].str)); }
#line 1829 "myanalyzer.tab.c"
    break;

  case 42:
#line 188 "myanalyzer.y"
                         { (yyval.str) = template("double %s",(yyvsp[-1].str)); }
#line 1835 "myanalyzer.tab.c"
    break;

  case 43:
#line 189 "myanalyzer.y"
                         { (yyval.str) = template("char* %s",(yyvsp[-1].str)); }
#line 1841 "myanalyzer.tab.c"
    break;

  case 44:
#line 190 "myanalyzer.y"
                         { (yyval.str) = template("%s %s",(yyvsp[0].str),(yyvsp[-1].str)); }
#line 1847 "myanalyzer.tab.c"
    break;

  case 45:
#line 191 "myanalyzer.y"
                                         { (yyval.str) = template("%s",(yyvsp[0].str)); }
#line 1853 "myanalyzer.tab.c"
    break;

  case 46:
#line 192 "myanalyzer.y"
                         { (yyval.str) = template("%s",(yyvsp[0].str)); }
#line 1859 "myanalyzer.tab.c"
    break;

  case 47:
#line 196 "myanalyzer.y"
                        { (yyval.str) = template("{\n%s}",(yyvsp[-1].str)); }
#line 1865 "myanalyzer.tab.c"
    break;

  case 48:
#line 200 "myanalyzer.y"
                                        { (yyval.str) = template("%s",(yyvsp[0].str)); }
#line 1871 "myanalyzer.tab.c"
    break;

  case 49:
#line 201 "myanalyzer.y"
                                { (yyval.str) = template("%s%s",(yyvsp[-1].str),(yyvsp[0].str)); }
#line 1877 "myanalyzer.tab.c"
    break;

  case 50:
#line 205 "myanalyzer.y"
                       { (yyval.str) = template("%s",(yyvsp[-1].str)); }
#line 1883 "myanalyzer.tab.c"
    break;

  case 51:
#line 206 "myanalyzer.y"
                       { (yyval.str) = template("%s",(yyvsp[-1].str)); }
#line 1889 "myanalyzer.tab.c"
    break;

  case 52:
#line 207 "myanalyzer.y"
                       { (yyval.str) = template("%s",(yyvsp[0].str)); }
#line 1895 "myanalyzer.tab.c"
    break;

  case 53:
#line 213 "myanalyzer.y"
                                   { (yyval.str) = template("%s",(yyvsp[0].str)); }
#line 1901 "myanalyzer.tab.c"
    break;

  case 54:
#line 214 "myanalyzer.y"
                       { (yyval.str) = (yyvsp[0].str); }
#line 1907 "myanalyzer.tab.c"
    break;

  case 55:
#line 215 "myanalyzer.y"
                                   { (yyval.str) = (yyvsp[0].str); }
#line 1913 "myanalyzer.tab.c"
    break;

  case 56:
#line 216 "myanalyzer.y"
                           { (yyval.str) = (yyvsp[0].str); }
#line 1919 "myanalyzer.tab.c"
    break;

  case 57:
#line 217 "myanalyzer.y"
                           { (yyval.str) = template("(%s)", (yyvsp[-1].str)); }
#line 1925 "myanalyzer.tab.c"
    break;

  case 58:
#line 218 "myanalyzer.y"
                           { (yyval.str) = template("%s + %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1931 "myanalyzer.tab.c"
    break;

  case 59:
#line 219 "myanalyzer.y"
                           { (yyval.str) = template("%s - %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1937 "myanalyzer.tab.c"
    break;

  case 60:
#line 220 "myanalyzer.y"
                           { (yyval.str) = template("%s * %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1943 "myanalyzer.tab.c"
    break;

  case 61:
#line 221 "myanalyzer.y"
                           { (yyval.str) = template("%s / %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1949 "myanalyzer.tab.c"
    break;

  case 62:
#line 222 "myanalyzer.y"
                           { (yyval.str) = template("%s %% %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1955 "myanalyzer.tab.c"
    break;

  case 63:
#line 223 "myanalyzer.y"
                           { (yyval.str) = template("!%s",(yyvsp[0].str)); }
#line 1961 "myanalyzer.tab.c"
    break;

  case 64:
#line 224 "myanalyzer.y"
                           { (yyval.str) = template("%s && %s",(yyvsp[-2].str),(yyvsp[0].str)); }
#line 1967 "myanalyzer.tab.c"
    break;

  case 65:
#line 225 "myanalyzer.y"
                           { (yyval.str) = template("%s || %s",(yyvsp[-2].str),(yyvsp[0].str)); }
#line 1973 "myanalyzer.tab.c"
    break;

  case 66:
#line 226 "myanalyzer.y"
                       { (yyval.str) = template("%s ^ %s)",(yyvsp[-2].str),(yyvsp[0].str)); }
#line 1979 "myanalyzer.tab.c"
    break;

  case 67:
#line 227 "myanalyzer.y"
                       { (yyval.str) = template("+%s",(yyvsp[0].str)); }
#line 1985 "myanalyzer.tab.c"
    break;

  case 68:
#line 228 "myanalyzer.y"
                       { (yyval.str) = template("-%s",(yyvsp[0].str)); }
#line 1991 "myanalyzer.tab.c"
    break;

  case 69:
#line 229 "myanalyzer.y"
                       { (yyval.str) = template("%s == %s",(yyvsp[-2].str),(yyvsp[0].str)); }
#line 1997 "myanalyzer.tab.c"
    break;

  case 70:
#line 230 "myanalyzer.y"
                       { (yyval.str) = template("%s <= %s",(yyvsp[-2].str),(yyvsp[0].str)); }
#line 2003 "myanalyzer.tab.c"
    break;

  case 71:
#line 231 "myanalyzer.y"
                       { (yyval.str) = template("%s < %s",(yyvsp[-2].str),(yyvsp[0].str)); }
#line 2009 "myanalyzer.tab.c"
    break;

  case 72:
#line 232 "myanalyzer.y"
                       { (yyval.str) = template("%s > %s",(yyvsp[-2].str),(yyvsp[0].str)); }
#line 2015 "myanalyzer.tab.c"
    break;

  case 73:
#line 233 "myanalyzer.y"
                       { (yyval.str) = template("%s >= %s",(yyvsp[-2].str),(yyvsp[0].str)); }
#line 2021 "myanalyzer.tab.c"
    break;

  case 74:
#line 234 "myanalyzer.y"
                       { (yyval.str) = template("%s != %s",(yyvsp[-2].str),(yyvsp[0].str)); }
#line 2027 "myanalyzer.tab.c"
    break;

  case 75:
#line 235 "myanalyzer.y"
                       { (yyval.str) = template("%s",(yyvsp[0].str)); }
#line 2033 "myanalyzer.tab.c"
    break;

  case 76:
#line 236 "myanalyzer.y"
                       { (yyval.str) = template("%s",(yyvsp[0].str)); }
#line 2039 "myanalyzer.tab.c"
    break;

  case 77:
#line 251 "myanalyzer.y"
                         { (yyval.str) = template("%s",(yyvsp[0].str)); }
#line 2045 "myanalyzer.tab.c"
    break;

  case 78:
#line 252 "myanalyzer.y"
                     { (yyval.str) = template("%s",(yyvsp[0].str)); }
#line 2051 "myanalyzer.tab.c"
    break;

  case 79:
#line 253 "myanalyzer.y"
                     { (yyval.str) = template("%s",(yyvsp[0].str)); }
#line 2057 "myanalyzer.tab.c"
    break;

  case 80:
#line 254 "myanalyzer.y"
                     { (yyval.str) = template("%s",(yyvsp[0].str)); }
#line 2063 "myanalyzer.tab.c"
    break;

  case 81:
#line 255 "myanalyzer.y"
                     { (yyval.str) = template("break;\n"); }
#line 2069 "myanalyzer.tab.c"
    break;

  case 82:
#line 256 "myanalyzer.y"
                     { (yyval.str) = template("continue;"); }
#line 2075 "myanalyzer.tab.c"
    break;

  case 83:
#line 257 "myanalyzer.y"
                     { (yyval.str) = template("%s",(yyvsp[-1].str)); }
#line 2081 "myanalyzer.tab.c"
    break;

  case 84:
#line 258 "myanalyzer.y"
                     { (yyval.str) = template("%s;\n",(yyvsp[-1].str)); }
#line 2087 "myanalyzer.tab.c"
    break;

  case 85:
#line 264 "myanalyzer.y"
                                                { (yyval.str) = template("%s = %s;\n",(yyvsp[-3].str),(yyvsp[-1].str)); }
#line 2093 "myanalyzer.tab.c"
    break;

  case 86:
#line 265 "myanalyzer.y"
                                { (yyval.str) = template("%s = %s;\n",(yyvsp[-3].str),(yyvsp[-1].str)); }
#line 2099 "myanalyzer.tab.c"
    break;

  case 87:
#line 266 "myanalyzer.y"
                                        { (yyval.str) = template("%s = 0;\n",(yyvsp[-3].str)); }
#line 2105 "myanalyzer.tab.c"
    break;

  case 88:
#line 267 "myanalyzer.y"
                                        { (yyval.str) = template("%s = 1;\n",(yyvsp[-3].str)); }
#line 2111 "myanalyzer.tab.c"
    break;

  case 89:
#line 271 "myanalyzer.y"
                        { (yyval.str) = template("%s[%s]",(yyvsp[-3].str),(yyvsp[-1].str)); }
#line 2117 "myanalyzer.tab.c"
    break;

  case 90:
#line 285 "myanalyzer.y"
                                                                                         { (yyval.str) = template("if(%s) \n%s",(yyvsp[-2].str),(yyvsp[0].str)); }
#line 2123 "myanalyzer.tab.c"
    break;

  case 91:
#line 286 "myanalyzer.y"
                                                                 { (yyval.str) = template("if(%s) \n%selse %s\n",(yyvsp[-4].str),(yyvsp[-2].str),(yyvsp[0].str)); }
#line 2129 "myanalyzer.tab.c"
    break;

  case 92:
#line 290 "myanalyzer.y"
                                           { (yyval.str) = template("%s",(yyvsp[0].str)); }
#line 2135 "myanalyzer.tab.c"
    break;

  case 93:
#line 291 "myanalyzer.y"
                               { (yyval.str) = template("{\n%s}\n",(yyvsp[-2].str)); }
#line 2141 "myanalyzer.tab.c"
    break;

  case 94:
#line 295 "myanalyzer.y"
           { (yyval.str) = "";}
#line 2147 "myanalyzer.tab.c"
    break;

  case 95:
#line 296 "myanalyzer.y"
           { (yyval.str) = template("%s",(yyvsp[0].str)); }
#line 2153 "myanalyzer.tab.c"
    break;

  case 96:
#line 300 "myanalyzer.y"
                        { (yyval.str) = template("%s",(yyvsp[0].str)); }
#line 2159 "myanalyzer.tab.c"
    break;

  case 97:
#line 301 "myanalyzer.y"
                        { (yyval.str) = template("%s\n%s",(yyvsp[-1].str),(yyvsp[0].str)); }
#line 2165 "myanalyzer.tab.c"
    break;

  case 98:
#line 305 "myanalyzer.y"
                                                                              { (yyval.str) = template("for(%s; %s; %s) %s",(yyvsp[-6].str),(yyvsp[-4].str),(yyvsp[-2].str),(yyvsp[0].str)); }
#line 2171 "myanalyzer.tab.c"
    break;

  case 99:
#line 309 "myanalyzer.y"
                        { (yyval.str) = template("%s = %s",(yyvsp[-2].str),(yyvsp[0].str)); }
#line 2177 "myanalyzer.tab.c"
    break;

  case 100:
#line 313 "myanalyzer.y"
                                           { (yyval.str) = template("while(%s) %s",(yyvsp[-2].str),(yyvsp[0].str)); }
#line 2183 "myanalyzer.tab.c"
    break;

  case 101:
#line 317 "myanalyzer.y"
                 { (yyval.str) = ""; }
#line 2189 "myanalyzer.tab.c"
    break;

  case 102:
#line 318 "myanalyzer.y"
                 { (yyval.str) = template("return;\n"); }
#line 2195 "myanalyzer.tab.c"
    break;

  case 103:
#line 319 "myanalyzer.y"
                 { (yyval.str) = template("return %s;\n",(yyvsp[0].str)); }
#line 2201 "myanalyzer.tab.c"
    break;

  case 104:
#line 323 "myanalyzer.y"
                          { (yyval.str) = template("%s(%s)",(yyvsp[-3].str),(yyvsp[-1].str)); }
#line 2207 "myanalyzer.tab.c"
    break;

  case 105:
#line 324 "myanalyzer.y"
                                  { (yyval.str) = template("%s",(yyvsp[0].str)); }
#line 2213 "myanalyzer.tab.c"
    break;

  case 106:
#line 329 "myanalyzer.y"
                                        { (yyval.str) = template("readString()"); }
#line 2219 "myanalyzer.tab.c"
    break;

  case 107:
#line 330 "myanalyzer.y"
                                        { (yyval.str) = template("readInt()"); }
#line 2225 "myanalyzer.tab.c"
    break;

  case 108:
#line 331 "myanalyzer.y"
                                        { (yyval.str) = template("readReal()"); }
#line 2231 "myanalyzer.tab.c"
    break;

  case 109:
#line 332 "myanalyzer.y"
                                        { (yyval.str) = template("writeString()"); }
#line 2237 "myanalyzer.tab.c"
    break;

  case 110:
#line 333 "myanalyzer.y"
                                { (yyval.str) = template("writeString(%s)",(yyvsp[-1].str)); }
#line 2243 "myanalyzer.tab.c"
    break;

  case 111:
#line 334 "myanalyzer.y"
                                { (yyval.str) = template("writeString(%s)",(yyvsp[-1].str)); }
#line 2249 "myanalyzer.tab.c"
    break;

  case 112:
#line 335 "myanalyzer.y"
                                        { (yyval.str) = template("writeInt()"); }
#line 2255 "myanalyzer.tab.c"
    break;

  case 113:
#line 336 "myanalyzer.y"
                                { (yyval.str) = template("writeInt(%s)",(yyvsp[-1].str)); }
#line 2261 "myanalyzer.tab.c"
    break;

  case 114:
#line 337 "myanalyzer.y"
                                { (yyval.str) = template("writeInt(%s)",(yyvsp[-1].str)); }
#line 2267 "myanalyzer.tab.c"
    break;

  case 115:
#line 338 "myanalyzer.y"
                                        { (yyval.str) = template("writeReal()"); }
#line 2273 "myanalyzer.tab.c"
    break;

  case 116:
#line 339 "myanalyzer.y"
                                { (yyval.str) = template("writeReal(%s)",(yyvsp[-1].str)); }
#line 2279 "myanalyzer.tab.c"
    break;

  case 117:
#line 340 "myanalyzer.y"
                                { (yyval.str) = template("writeReal(%s)",(yyvsp[-1].str)); }
#line 2285 "myanalyzer.tab.c"
    break;


#line 2289 "myanalyzer.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 343 "myanalyzer.y"

int main () {
  puts(c_prologue);
  if ( yyparse() == 0 )
    ;//printf("\nAccepted!\n");
  else
    printf("\nRejected!\n");
}

