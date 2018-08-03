/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUM = 258,
     ID = 259,
     PLUS = 260,
     MUL = 261,
     DIV = 262,
     MOD = 263,
     ASGN = 264,
     READ = 265,
     WRITE = 266,
     MINUS = 267,
     NEWLINE = 268,
     LT = 269,
     GT = 270,
     DEQ = 271,
     NEQ = 272,
     ELSE = 273,
     IF = 274,
     THEN = 275,
     ENDIF = 276,
     ENDWHILE = 277,
     WHILE = 278,
     DO = 279,
     START = 280,
     END = 281,
     DECL = 282,
     ENDDECL = 283,
     INT = 284,
     STR = 285,
     LE = 286,
     GE = 287,
     NOT = 288,
     AND = 289,
     OR = 290,
     MAIN = 291,
     RETURN = 292,
     ALLOC = 293,
     FREE = 294,
     INIT = 295,
     BRK = 296,
     CONTINUE = 297,
     BRKP = 298,
     TYPE = 299,
     ENDTYPE = 300,
     NILL = 301,
     DEQNILL = 302,
     NEQNILL = 303,
     STRVAL = 304,
     EXPOSCALL = 305
   };
#endif
/* Tokens.  */
#define NUM 258
#define ID 259
#define PLUS 260
#define MUL 261
#define DIV 262
#define MOD 263
#define ASGN 264
#define READ 265
#define WRITE 266
#define MINUS 267
#define NEWLINE 268
#define LT 269
#define GT 270
#define DEQ 271
#define NEQ 272
#define ELSE 273
#define IF 274
#define THEN 275
#define ENDIF 276
#define ENDWHILE 277
#define WHILE 278
#define DO 279
#define START 280
#define END 281
#define DECL 282
#define ENDDECL 283
#define INT 284
#define STR 285
#define LE 286
#define GE 287
#define NOT 288
#define AND 289
#define OR 290
#define MAIN 291
#define RETURN 292
#define ALLOC 293
#define FREE 294
#define INIT 295
#define BRK 296
#define CONTINUE 297
#define BRKP 298
#define TYPE 299
#define ENDTYPE 300
#define NILL 301
#define DEQNILL 302
#define NEQNILL 303
#define STRVAL 304
#define EXPOSCALL 305




/* Copy the first part of user declarations.  */
#line 1 "abstree.y"
 
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "abstree.h"
    #include "symboltable.h"
    #include "symboltable.c"
    #include "aa.c"
    #include "codegen.c"
    #include "userdtype.c"
    #include "typecheck.h"
    #include "typecheck.c"

    int yylex();
    void yyerror(char const *s);
    struct ASTNode *head1,*head;
    int result;
    FILE * fp;
    extern FILE *yyin;
    extern int yylineno;
    struct Fieldlist *ftemp;
    struct Typetable *declarationType ,*FdeclarationType,*functype,*temp1,*temp2;
    struct Gsymbol *Gtemp;
    struct Lsymbol *Ltemp;
    struct Paramstruct *Argtemp1, *Argtemp2;
    int indicator = 0; //for no.of arguments passed
    int declcount = 0,defcount = 0,exprcount = 0;
    int init_counter=0, f_counter=0;	//to check whether initialize is called or not.
    int wr=0;


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 33 "abstree.y"
{
    struct ASTNode *nptr;
}
/* Line 193 of yacc.c.  */
#line 231 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 244 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   540

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  107
/* YYNRULES -- Number of states.  */
#define YYNSTATES  247

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      56,    57,     2,     2,    58,     2,    59,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    53,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    54,     2,    55,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,     2,    52,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    12,    16,    17,    20,    22,    27,
      30,    32,    36,    40,    41,    43,    46,    50,    52,    57,
      62,    66,    73,    80,    82,    84,    86,    88,    90,    92,
      94,    96,    98,   100,   104,   105,   108,   110,   112,   115,
     125,   129,   130,   132,   135,   139,   141,   145,   154,   159,
     163,   167,   170,   172,   177,   185,   191,   200,   206,   215,
     226,   235,   242,   249,   254,   259,   265,   271,   277,   282,
     287,   295,   302,   305,   308,   311,   315,   319,   321,   325,
     327,   331,   335,   339,   343,   347,   351,   355,   359,   363,
     367,   371,   375,   379,   383,   386,   390,   392,   394,   397,
     399,   401,   406,   411,   415,   418,   421,   424
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      61,     0,    -1,    62,    67,    77,    83,    -1,    62,    67,
      83,    -1,    44,    63,    45,    -1,    -1,    63,    64,    -1,
      64,    -1,     4,    51,    65,    52,    -1,    65,    66,    -1,
      66,    -1,    71,     4,    53,    -1,    27,    68,    28,    -1,
      -1,    69,    -1,    68,    69,    -1,    72,    70,    53,    -1,
       4,    -1,     4,    54,     3,    55,    -1,     4,    56,    74,
      57,    -1,    70,    58,     4,    -1,    70,    58,     4,    54,
       3,    55,    -1,    70,    58,     4,    56,    74,    57,    -1,
      29,    -1,    30,    -1,     4,    -1,    29,    -1,    30,    -1,
       4,    -1,    29,    -1,    30,    -1,     4,    -1,    75,    -1,
      74,    58,    75,    -1,    -1,    73,    76,    -1,     4,    -1,
      78,    -1,    77,    78,    -1,    72,     4,    56,    74,    57,
      51,    79,    84,    52,    -1,    27,    80,    28,    -1,    -1,
      81,    -1,    80,    81,    -1,    73,    82,    53,    -1,     4,
      -1,    82,    58,     4,    -1,    72,    36,    56,    57,    51,
      79,    84,    52,    -1,    25,    86,    85,    26,    -1,    25,
      85,    26,    -1,    37,    91,    53,    -1,    86,    87,    -1,
      87,    -1,     4,     9,    91,    53,    -1,     4,    54,    91,
      55,     9,    91,    53,    -1,    10,    56,     4,    57,    53,
      -1,    10,    56,     4,    54,    91,    55,    57,    53,    -1,
      11,    56,    91,    57,    53,    -1,    19,    56,    91,    57,
      20,    86,    21,    53,    -1,    19,    56,    91,    57,    20,
      86,    18,    86,    21,    53,    -1,    23,    56,    91,    57,
      24,    86,    22,    53,    -1,     4,     9,    38,    56,    57,
      53,    -1,    88,     9,    38,    56,    57,    53,    -1,    88,
       9,    88,    53,    -1,    88,     9,    91,    53,    -1,    39,
      56,     4,    57,    53,    -1,    39,    56,    88,    57,    53,
      -1,    10,    56,    88,    57,    53,    -1,     4,     9,    46,
      53,    -1,    88,     9,    46,    53,    -1,     4,     9,    50,
      56,    90,    57,    53,    -1,     4,     9,    40,    56,    57,
      53,    -1,    41,    53,    -1,    42,    53,    -1,    43,    53,
      -1,     4,    59,     4,    -1,    88,    59,     4,    -1,    91,
      -1,    89,    58,    91,    -1,    91,    -1,    90,    58,    91,
      -1,    91,     5,    91,    -1,    91,    12,    91,    -1,    91,
       6,    91,    -1,    91,     7,    91,    -1,    91,     8,    91,
      -1,    91,    14,    91,    -1,    91,    31,    91,    -1,    91,
      15,    91,    -1,    91,    32,    91,    -1,    91,    16,    91,
      -1,    91,    17,    91,    -1,    91,    34,    91,    -1,    91,
      35,    91,    -1,    33,    91,    -1,    56,    91,    57,    -1,
      88,    -1,     3,    -1,    12,     3,    -1,    49,    -1,     4,
      -1,     4,    54,    91,    55,    -1,     4,    56,    89,    57,
      -1,     4,    56,    57,    -1,     4,    47,    -1,     4,    48,
      -1,    88,    47,    -1,    88,    48,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    96,    96,   100,   106,   109,   114,   115,   118,   123,
     124,   127,   136,   139,   144,   145,   148,   153,   159,   163,
     170,   174,   178,   187,   188,   189,   198,   199,   200,   211,
     212,   213,   224,   225,   226,   229,   232,   238,   239,   242,
     307,   308,   311,   312,   315,   318,   322,   328,   360,   363,
     368,   379,   386,   391,   405,   410,   414,   418,   438,   443,
     448,   453,   458,   471,   482,   492,   496,   505,   515,   519,
     531,   547,   552,   556,   559,   564,   569,   597,   601,   612,
     616,   629,   633,   637,   641,   645,   649,   653,   657,   661,
     665,   669,   673,   677,   681,   685,   688,   691,   695,   700,
     705,   709,   713,   739,   743,   747,   751,   755
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "ID", "PLUS", "MUL", "DIV", "MOD",
  "ASGN", "READ", "WRITE", "MINUS", "NEWLINE", "LT", "GT", "DEQ", "NEQ",
  "ELSE", "IF", "THEN", "ENDIF", "ENDWHILE", "WHILE", "DO", "START", "END",
  "DECL", "ENDDECL", "INT", "STR", "LE", "GE", "NOT", "AND", "OR", "MAIN",
  "RETURN", "ALLOC", "FREE", "INIT", "BRK", "CONTINUE", "BRKP", "TYPE",
  "ENDTYPE", "NILL", "DEQNILL", "NEQNILL", "STRVAL", "EXPOSCALL", "'{'",
  "'}'", "';'", "'['", "']'", "'('", "')'", "','", "'.'", "$accept",
  "program", "TypeDefBlock", "TypeDefList", "TypeDef", "FieldDeclList",
  "FieldDecl", "gdeclaration", "GDeclList", "GDecl", "Gidlist",
  "FieldType", "TypeName", "FType", "ParamList", "Param", "fvlist",
  "fdeflist", "fdef", "LdeclBlock", "ldlist", "ldec", "lvlist",
  "mainblock", "Body", "Retstmt", "Slist", "Stmt", "FIELD", "exprlist",
  "exprlist_exposcall", "Expr", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   123,   125,    59,    91,    93,    40,    41,    44,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    61,    62,    62,    63,    63,    64,    65,
      65,    66,    67,    67,    68,    68,    69,    70,    70,    70,
      70,    70,    70,    71,    71,    71,    72,    72,    72,    73,
      73,    73,    74,    74,    74,    75,    76,    77,    77,    78,
      79,    79,    80,    80,    81,    82,    82,    83,    84,    84,
      85,    86,    86,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    88,    88,    89,    89,    90,
      90,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     3,     3,     0,     2,     1,     4,     2,
       1,     3,     3,     0,     1,     2,     3,     1,     4,     4,
       3,     6,     6,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     0,     2,     1,     1,     2,     9,
       3,     0,     1,     2,     3,     1,     3,     8,     4,     3,
       3,     2,     1,     4,     7,     5,     8,     5,     8,    10,
       8,     6,     6,     4,     4,     5,     5,     5,     4,     4,
       7,     6,     2,     2,     2,     3,     3,     1,     3,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     3,     1,     1,     2,     1,
       1,     4,     4,     3,     2,     2,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     0,    13,     0,     0,     7,     1,     0,     0,
       0,     4,     6,    28,    26,    27,     0,    14,     0,     0,
       0,    37,     3,    25,    23,    24,     0,    10,     0,    12,
      15,    17,     0,     0,     0,    38,     2,     8,     9,     0,
       0,    34,    16,     0,    34,     0,    11,     0,    31,    29,
      30,     0,     0,    32,    20,     0,     0,    18,    36,    35,
      19,     0,     0,    34,     0,    41,    33,     0,     0,    41,
       0,     0,    21,    22,     0,     0,     0,    42,     0,     0,
       0,    45,     0,    40,    43,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,     0,    47,
      39,    44,     0,     0,     0,     0,     0,     0,     0,     0,
      97,   100,     0,     0,    99,     0,    96,     0,     0,    72,
      73,    74,    49,     0,    51,     0,     0,    46,     0,     0,
       0,     0,     0,     0,    75,     0,     0,     0,     0,     0,
     104,   105,     0,     0,    98,    94,     0,   106,   107,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,     0,     0,    48,     0,     0,    96,     0,
      76,     0,     0,    68,     0,    53,     0,     0,     0,     0,
       0,     0,     0,     0,   103,     0,    77,    95,    81,    83,
      84,    85,    82,    86,    88,    90,    91,    87,    89,    92,
      93,     0,     0,     0,    69,    63,    64,     0,     0,     0,
      79,     0,     0,    55,    67,    57,     0,     0,   101,   102,
       0,    65,    66,     0,    61,    71,     0,     0,     0,     0,
       0,     0,    78,    62,    70,    80,    54,     0,     0,     0,
       0,    56,     0,    58,    60,     0,    59
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     5,     6,    26,    27,     9,    16,    17,
      32,    28,    18,    51,    52,    53,    59,    20,    21,    71,
      76,    77,    82,    22,    79,    95,    96,    97,   116,   185,
     209,   117
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -196
static const yytype_int16 yypact[] =
{
     -39,    16,    92,    -4,    33,    23,  -196,  -196,    67,    67,
      75,  -196,  -196,  -196,  -196,  -196,     5,  -196,    99,     0,
      67,  -196,  -196,  -196,  -196,  -196,    15,  -196,   111,  -196,
    -196,    45,    32,    65,    68,  -196,  -196,  -196,  -196,   121,
     134,    84,  -196,   180,    84,   120,  -196,   142,  -196,  -196,
    -196,   202,   -26,  -196,    71,    93,   166,  -196,  -196,  -196,
    -196,    84,   215,    84,   168,   201,  -196,   176,    97,   201,
      84,   207,  -196,  -196,   207,   229,     9,  -196,   411,   182,
     183,  -196,    88,  -196,  -196,    21,   181,   185,   192,   193,
      74,   194,   209,   210,   219,   212,   411,  -196,     2,  -196,
    -196,  -196,   232,    62,    74,   257,   271,    74,    74,    74,
    -196,    35,   273,    74,  -196,    74,    81,   296,   274,  -196,
    -196,  -196,  -196,   251,  -196,    60,   275,  -196,   224,   225,
     240,   226,   327,   239,  -196,    63,    85,   151,   164,   195,
    -196,  -196,    74,    13,  -196,   117,   208,  -196,  -196,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,  -196,    86,   116,  -196,   236,   243,   351,   340,
    -196,   228,   248,  -196,    74,  -196,   297,    74,   256,   263,
     266,   300,   298,   252,  -196,   104,   496,  -196,   508,   173,
     173,   173,   508,   117,   117,   175,   304,   117,   117,   508,
     508,   270,   272,   267,  -196,  -196,  -196,   276,   284,   136,
     496,    74,   283,  -196,  -196,  -196,   457,   457,  -196,  -196,
      74,  -196,  -196,   287,  -196,  -196,   307,    74,   371,   269,
     390,   416,   496,  -196,  -196,   496,  -196,   310,   457,   311,
     312,  -196,   452,  -196,  -196,   313,  -196
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -196,  -196,  -196,  -196,   331,  -196,   324,  -196,  -196,   335,
    -196,  -196,     6,    11,   -34,   292,  -196,  -196,   347,   299,
    -196,   293,  -196,   350,   308,   277,  -195,   -95,   -78,  -196,
    -196,  -101
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_int16 yytable[] =
{
      98,   124,   132,   133,    33,     1,   137,   138,   139,    13,
      55,   125,   145,    48,   146,    19,   110,   111,    98,    23,
       4,   230,   231,     8,   169,   112,    19,     4,   136,    68,
     103,    60,    61,    29,    14,    15,    34,    83,    49,    50,
     164,   183,   186,   242,    24,    25,   113,   168,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   126,   114,   110,   111,   110,   111,    37,    11,   115,
     184,    13,   112,   210,   112,   104,   212,   110,   111,    23,
     105,    75,   140,   141,    10,    42,   112,    75,    48,   142,
      43,   143,     7,   113,   105,   113,    14,    15,   166,    40,
     128,    41,   129,    31,    24,    25,   167,   113,   130,   114,
     228,   114,   131,    49,    50,    39,   115,   177,   115,   232,
     178,    44,   105,   114,    45,    62,   235,    63,   147,   148,
     115,    -1,    -1,   156,   157,   124,   124,    47,    98,    98,
     126,   101,   179,   201,   126,   105,   102,   124,    -1,    -1,
      64,    61,    98,    98,    73,    61,   149,   150,   151,   152,
      98,   219,   220,   153,    98,   154,   155,   156,   157,   149,
     150,   151,   152,   202,    46,   126,   153,    56,   154,   155,
     156,   157,   158,   159,    54,   160,   161,   154,   155,   156,
     157,   156,   157,   226,   227,   158,   159,    57,   160,   161,
     149,   150,   151,   152,   158,   159,    58,   153,   180,   154,
     155,   156,   157,   149,   150,   151,   152,    65,    67,    69,
     153,   181,   154,   155,   156,   157,   158,   159,    70,   160,
     161,    72,    78,    81,    99,   100,   127,   106,   122,   158,
     159,   107,   160,   161,   149,   150,   151,   152,   108,   109,
     118,   153,   182,   154,   155,   156,   157,   149,   150,   151,
     152,   134,   119,   120,   153,   187,   154,   155,   156,   157,
     158,   159,   121,   160,   161,   135,   144,   165,   163,   170,
     171,   172,   174,   158,   159,   207,   160,   161,   149,   150,
     151,   152,   203,   173,   176,   153,   204,   154,   155,   156,
     157,   149,   150,   151,   152,   208,   211,   218,   153,   213,
     154,   155,   156,   157,   158,   159,   214,   160,   161,   215,
     216,   157,   217,   221,   223,   222,   237,   158,   159,   224,
     160,   161,   149,   150,   151,   152,    12,   225,   229,   153,
     233,   154,   155,   156,   157,   149,   150,   151,   152,   162,
      38,    30,   153,    66,   154,   155,   156,   157,   158,   159,
     234,   160,   161,   241,   243,   244,   246,    35,    74,    84,
      36,   158,   159,   123,   160,   161,   149,   150,   151,   152,
     175,     0,    80,   153,     0,   154,   155,   156,   157,     0,
       0,     0,     0,   206,    85,     0,     0,     0,   147,   148,
      86,    87,   158,   159,   205,   160,   161,     0,   238,    88,
     126,   239,     0,    89,     0,    85,     0,     0,     0,     0,
      85,    86,    87,     0,   236,     0,    86,    87,     0,    91,
      88,    92,    93,    94,    89,    88,     0,     0,   240,    89,
       0,     0,     0,     0,     0,     0,     0,     0,    90,     0,
      91,     0,    92,    93,    94,    91,    85,    92,    93,    94,
       0,    85,    86,    87,     0,     0,     0,    86,    87,     0,
       0,    88,     0,   245,     0,    89,    88,     0,     0,     0,
      89,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    91,     0,    92,    93,    94,    91,     0,    92,    93,
      94,   149,   150,   151,   152,     0,     0,     0,   153,     0,
     154,   155,   156,   157,   150,   151,   152,     0,     0,     0,
       0,     0,   154,   155,   156,   157,     0,   158,   159,     0,
     160,   161,     0,     0,     0,     0,     0,     0,     0,   158,
     159
};

static const yytype_int16 yycheck[] =
{
      78,    96,   103,   104,     4,    44,   107,   108,   109,     4,
      44,     9,   113,     4,   115,     9,     3,     4,    96,     4,
       4,   216,   217,    27,   125,    12,    20,     4,   106,    63,
       9,    57,    58,    28,    29,    30,    36,    28,    29,    30,
     118,   142,   143,   238,    29,    30,    33,   125,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,    59,    49,     3,     4,     3,     4,    52,    45,    56,
      57,     4,    12,   174,    12,    54,   177,     3,     4,     4,
      59,    70,    47,    48,    51,    53,    12,    76,     4,    54,
      58,    56,     0,    33,    59,    33,    29,    30,    38,    54,
      38,    56,    40,     4,    29,    30,    46,    33,    46,    49,
     211,    49,    50,    29,    30,     4,    56,    54,    56,   220,
      57,    56,    59,    49,    56,    54,   227,    56,    47,    48,
      56,    14,    15,    16,    17,   230,   231,     3,   216,   217,
      59,    53,    57,    57,    59,    59,    58,   242,    31,    32,
      57,    58,   230,   231,    57,    58,     5,     6,     7,     8,
     238,    57,    58,    12,   242,    14,    15,    16,    17,     5,
       6,     7,     8,    57,    53,    59,    12,    57,    14,    15,
      16,    17,    31,    32,     4,    34,    35,    14,    15,    16,
      17,    16,    17,    57,    58,    31,    32,    55,    34,    35,
       5,     6,     7,     8,    31,    32,     4,    12,    57,    14,
      15,    16,    17,     5,     6,     7,     8,    51,     3,    51,
      12,    57,    14,    15,    16,    17,    31,    32,    27,    34,
      35,    55,    25,     4,    52,    52,     4,    56,    26,    31,
      32,    56,    34,    35,     5,     6,     7,     8,    56,    56,
      56,    12,    57,    14,    15,    16,    17,     5,     6,     7,
       8,     4,    53,    53,    12,    57,    14,    15,    16,    17,
      31,    32,    53,    34,    35,     4,     3,    26,     4,     4,
      56,    56,    56,    31,    32,    57,    34,    35,     5,     6,
       7,     8,    56,    53,    55,    12,    53,    14,    15,    16,
      17,     5,     6,     7,     8,    57,     9,    55,    12,    53,
      14,    15,    16,    17,    31,    32,    53,    34,    35,    53,
      20,    17,    24,    53,    57,    53,    57,    31,    32,    53,
      34,    35,     5,     6,     7,     8,     5,    53,    55,    12,
      53,    14,    15,    16,    17,     5,     6,     7,     8,    53,
      26,    16,    12,    61,    14,    15,    16,    17,    31,    32,
      53,    34,    35,    53,    53,    53,    53,    20,    69,    76,
      20,    31,    32,    96,    34,    35,     5,     6,     7,     8,
      53,    -1,    74,    12,    -1,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    53,     4,    -1,    -1,    -1,    47,    48,
      10,    11,    31,    32,    53,    34,    35,    -1,    18,    19,
      59,    21,    -1,    23,    -1,     4,    -1,    -1,    -1,    -1,
       4,    10,    11,    -1,    53,    -1,    10,    11,    -1,    39,
      19,    41,    42,    43,    23,    19,    -1,    -1,    22,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      39,    -1,    41,    42,    43,    39,     4,    41,    42,    43,
      -1,     4,    10,    11,    -1,    -1,    -1,    10,    11,    -1,
      -1,    19,    -1,    21,    -1,    23,    19,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    41,    42,    43,    39,    -1,    41,    42,
      43,     5,     6,     7,     8,    -1,    -1,    -1,    12,    -1,
      14,    15,    16,    17,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    14,    15,    16,    17,    -1,    31,    32,    -1,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    44,    61,    62,     4,    63,    64,     0,    27,    67,
      51,    45,    64,     4,    29,    30,    68,    69,    72,    72,
      77,    78,    83,     4,    29,    30,    65,    66,    71,    28,
      69,     4,    70,     4,    36,    78,    83,    52,    66,     4,
      54,    56,    53,    58,    56,    56,    53,     3,     4,    29,
      30,    73,    74,    75,     4,    74,    57,    55,     4,    76,
      57,    58,    54,    56,    57,    51,    75,     3,    74,    51,
      27,    79,    55,    57,    79,    73,    80,    81,    25,    84,
      84,     4,    82,    28,    81,     4,    10,    11,    19,    23,
      37,    39,    41,    42,    43,    85,    86,    87,    88,    52,
      52,    53,    58,     9,    54,    59,    56,    56,    56,    56,
       3,     4,    12,    33,    49,    56,    88,    91,    56,    53,
      53,    53,    26,    85,    87,     9,    59,     4,    38,    40,
      46,    50,    91,    91,     4,     4,    88,    91,    91,    91,
      47,    48,    54,    56,     3,    91,    91,    47,    48,     5,
       6,     7,     8,    12,    14,    15,    16,    17,    31,    32,
      34,    35,    53,     4,    88,    26,    38,    46,    88,    91,
       4,    56,    56,    53,    56,    53,    55,    54,    57,    57,
      57,    57,    57,    91,    57,    89,    91,    57,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    57,    57,    56,    53,    53,    53,    57,    57,    90,
      91,     9,    91,    53,    53,    53,    20,    24,    55,    57,
      58,    53,    53,    57,    53,    53,    57,    58,    91,    55,
      86,    86,    91,    53,    53,    91,    53,    57,    18,    21,
      22,    53,    86,    53,    53,    21,    53
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 96 "abstree.y"
    {
			                                            fclose(intermediate);
			                                            exit(1);
                        								}
    break;

  case 3:
#line 100 "abstree.y"
    {
		                                            fclose(intermediate);
		                                            exit(1);
                                    			 }
    break;

  case 4:
#line 106 "abstree.y"
    {

                                            }
    break;

  case 5:
#line 109 "abstree.y"
    {
                                            
                                            }
    break;

  case 8:
#line 118 "abstree.y"
    { 
	                                    TInstall((yyvsp[(1) - (4)].nptr) -> name,0,Fhead); //size is initialized to 0. actual size is calculated in TInstall 
                               		}
    break;

  case 11:
#line 127 "abstree.y"
    {
	                                if(FLookup((yyvsp[(2) - (3)].nptr) -> name,Fhead) != NULL)
	                                {
	                                    yyerror("Re-declaration of field element\n");
	                                    exit(1);
	                                }
						            FInstall(declarationType,(yyvsp[(2) - (3)].nptr) -> name);
								}
    break;

  case 12:
#line 136 "abstree.y"
    {
                                            start();
                                        }
    break;

  case 13:
#line 139 "abstree.y"
    {
                                            start();
                                        }
    break;

  case 14:
#line 144 "abstree.y"
    {}
    break;

  case 15:
#line 145 "abstree.y"
    {}
    break;

  case 16:
#line 148 "abstree.y"
    {
                                   
                                }
    break;

  case 17:
#line 153 "abstree.y"
    {
                            
                            verify((yyvsp[(1) - (1)].nptr),1,0,0,NULL);
                            GInstall((yyvsp[(1) - (1)].nptr) -> name,declarationType,1,NULL);                                
                            
                        }
    break;

  case 18:
#line 159 "abstree.y"
    {
                         verify((yyvsp[(1) - (4)].nptr),1,0,0,NULL);
                         install_id((yyvsp[(1) - (4)].nptr),(yyvsp[(3) - (4)].nptr),declarationType);
                        }
    break;

  case 19:
#line 163 "abstree.y"
    {
                                declcount++; //  to keep track of number of functions declared
                                verify((yyvsp[(1) - (4)].nptr),1,0,0,NULL);
                                GInstall((yyvsp[(1) - (4)].nptr) -> name,declarationType,-1, Phead);
                                Phead = NULL;
                                Ptail = NULL;
                            }
    break;

  case 20:
#line 170 "abstree.y"
    {
                            verify((yyvsp[(3) - (3)].nptr),1,0,0,NULL);
                            GInstall((yyvsp[(3) - (3)].nptr) -> name,declarationType,1,NULL);
                          }
    break;

  case 21:
#line 174 "abstree.y"
    {
                                    verify((yyvsp[(3) - (6)].nptr),1,0,0,NULL);
                                    install_id((yyvsp[(3) - (6)].nptr),(yyvsp[(5) - (6)].nptr),declarationType);
                                  }
    break;

  case 22:
#line 178 "abstree.y"
    {
                                            declcount++; //  to keep track of number of functions declared
                                            verify((yyvsp[(3) - (6)].nptr),1,0,0,NULL);
                                            GInstall((yyvsp[(3) - (6)].nptr) -> name,declarationType,-1, Phead);
                                            Phead = NULL;
                                            Ptail = NULL;
                                          }
    break;

  case 23:
#line 187 "abstree.y"
    {declarationType = TLookup("integer");}
    break;

  case 24:
#line 188 "abstree.y"
    {declarationType = TLookup("string");}
    break;

  case 25:
#line 189 "abstree.y"
    {
                        declarationType = TLookup((yyvsp[(1) - (1)].nptr) -> name);
                        if(declarationType == NULL)
                        {
                            declarationType = TLookup("dummy");
                        }
                    }
    break;

  case 26:
#line 198 "abstree.y"
    {declarationType = TLookup("integer");}
    break;

  case 27:
#line 199 "abstree.y"
    {declarationType = TLookup("string");}
    break;

  case 28:
#line 200 "abstree.y"
    {
                        declarationType = TLookup((yyvsp[(1) - (1)].nptr) -> name);
                        if(declarationType == NULL)
                        {
                            yyerror("Unknown user-defined type\n");
                            exit(1);
                        
                        }
                    }
    break;

  case 29:
#line 211 "abstree.y"
    {FdeclarationType = TLookup("integer");}
    break;

  case 30:
#line 212 "abstree.y"
    {FdeclarationType = TLookup("string");}
    break;

  case 31:
#line 213 "abstree.y"
    {
                   FdeclarationType = TLookup((yyvsp[(1) - (1)].nptr) -> name);
                        
                    if(FdeclarationType == NULL)
                    {
                        yyerror("Unknown user-defined type\n");
                        exit(1);
                    }
                }
    break;

  case 32:
#line 224 "abstree.y"
    {}
    break;

  case 33:
#line 225 "abstree.y"
    {}
    break;

  case 35:
#line 229 "abstree.y"
    {}
    break;

  case 36:
#line 232 "abstree.y"
    {
                                        verify((yyvsp[(1) - (1)].nptr),0,0,1,NULL);
                                        PInstall((yyvsp[(1) - (1)].nptr) -> name,FdeclarationType); 
                                    }
    break;

  case 37:
#line 238 "abstree.y"
    {}
    break;

  case 38:
#line 239 "abstree.y"
    {}
    break;

  case 39:
#line 242 "abstree.y"
    {  
                                                                defcount++; //  to keep track of number of functions defined

                                                                Gtemp = GLookup((yyvsp[(2) - (9)].nptr) -> name);

                                                                if(Gtemp == NULL)
                                                                {
                                                                    printf("Function not declared in GST\n");
                                                                    exit(1);
                                                                }

                                                                //storing arguments in LST

                                                                Argtemp1 = Phead;
                                                                Argtemp2 = Gtemp -> paramlist;

                                                                while((Argtemp1 != NULL)&&(Argtemp2 != NULL))
                                                                {
                                                                    if (strcmp(Argtemp1 -> name,Argtemp2 -> name) == 0)
                                                                    {
                                                                        if (Argtemp1 -> type != Argtemp2 -> type)
                                                                        {
                                                                            printf("Conflict in argument types \n");
                                                                            exit(1);
                                                                        }
                                                                    }
                                                                    else
                                                                    {
                                                                        printf("Conflict in argument names \n");
                                                                        exit(1);
                                                                    }

                                                                    Argtemp1 = Argtemp1 -> next;
                                                                    Argtemp2 = Argtemp2 -> next;
                                                                }

                                                                if((Argtemp1 != NULL)||(Argtemp2 != NULL))
                                                                {
                                                                    printf("Unequal number of arguments \n");
                                                                    exit(1);
                                                                }

                                                                (yyvsp[(2) - (9)].nptr) -> Lentry = Lhead;

                                                                fprintf(intermediate, "F%d:\n",Gtemp -> binding);
                                                                fprintf(intermediate, "PUSH BP\n");
                                                                fprintf(intermediate, "MOV BP,SP\n");

                                                                Ltemp = Lhead;

                                                                while(Ltemp != NULL)
                                                                {                                                               
                                                                    fprintf(intermediate, "PUSH R0\n");
                                                                    Ltemp = Ltemp -> next;
                                                                }                                                               

                                                                codegen((yyvsp[(8) - (9)].nptr));

                                                                Phead = NULL;
                                                                Ptail = NULL;
                                                                Lhead = NULL;
                                                                Ltail = NULL;
                                                            }
    break;

  case 40:
#line 307 "abstree.y"
    {}
    break;

  case 41:
#line 308 "abstree.y"
    {}
    break;

  case 42:
#line 311 "abstree.y"
    {}
    break;

  case 43:
#line 312 "abstree.y"
    {}
    break;

  case 44:
#line 315 "abstree.y"
    {}
    break;

  case 45:
#line 318 "abstree.y"
    {
                            verify((yyvsp[(1) - (1)].nptr),0,1,0,NULL);
                            LInstall((yyvsp[(1) - (1)].nptr) -> name,FdeclarationType);
                         }
    break;

  case 46:
#line 322 "abstree.y"
    {
                            verify((yyvsp[(3) - (3)].nptr),0,1,0,NULL);
                            LInstall((yyvsp[(3) - (3)].nptr) -> name,FdeclarationType);
                        }
    break;

  case 47:
#line 329 "abstree.y"
    {
                                if(declcount != defcount)
                                {
                                    yyerror("All functions declared need to be defined\n");
                                    exit(1);
                                }
                                if(declarationType != TLookup("integer"))
                                {
                                    yyerror("Main return type should be of integer type\n");
                                    exit(1);
                                }

                                fprintf(intermediate, "MAIN:\n");
                                fprintf(intermediate, "PUSH BP\n");
                                fprintf(intermediate, "MOV BP,SP\n");

                                Ltemp = Lhead;

                                while(Ltemp != NULL)
                                {                                                                
                                    fprintf(intermediate, "PUSH R0\n");
                                    Ltemp = Ltemp -> next;
                                }

                                codegen((yyvsp[(7) - (8)].nptr));

                                Lhead = NULL;
                                Ltail = NULL;
                            }
    break;

  case 48:
#line 360 "abstree.y"
    {
                                    (yyval.nptr) = TreeCreate(TLookup("void"), DEFAULT, NULL,NULL,NULL,(yyvsp[(2) - (4)].nptr),(yyvsp[(3) - (4)].nptr),NULL);
                                }
    break;

  case 49:
#line 363 "abstree.y"
    {
                                    (yyval.nptr) = TreeCreate(TLookup("void"), DEFAULT, NULL,NULL,NULL,NULL,(yyvsp[(2) - (3)].nptr),NULL);
                                }
    break;

  case 50:
#line 368 "abstree.y"
    {   
                                if(declarationType == (yyvsp[(2) - (3)].nptr) -> type) 
                                    (yyval.nptr) = TreeCreate((yyvsp[(2) - (3)].nptr)->type, NODE_RET,NULL,NULL,NULL,NULL,(yyvsp[(2) - (3)].nptr),NULL);
                                else
                                {
                                    yyerror("return type do not match with the function return type\n");
                                    exit(1);
                                }
                            }
    break;

  case 51:
#line 379 "abstree.y"
    {
                            head = (struct ASTNode *)malloc(sizeof(struct ASTNode ));
                            head -> nodetype = DEFAULT;
                            head -> ptr1 = (yyvsp[(1) - (2)].nptr);
                            head -> ptr2 = (yyvsp[(2) - (2)].nptr);
                            (yyval.nptr) = head;
                        }
    break;

  case 52:
#line 386 "abstree.y"
    {
                            (yyval.nptr) = (yyvsp[(1) - (1)].nptr);
                        }
    break;

  case 53:
#line 391 "abstree.y"
    {
                                    type_assign((yyvsp[(1) - (4)].nptr),NULL,0,0,0,0,0);
                                    if(((yyvsp[(1) - (4)].nptr) -> nodetype == NODE_FIELD) || ((yyvsp[(3) - (4)].nptr) -> nodetype == NODE_FIELD))
                                    {
                                    	head = get_last((yyvsp[(1) - (4)].nptr));
                                    	head1 = get_last((yyvsp[(3) - (4)].nptr));
                                    	type_comp(head -> type, head1 -> type , 'a');
                                    }
                                    else
                                    {
                                    	type_comp((yyvsp[(1) - (4)].nptr) -> type, (yyvsp[(3) - (4)].nptr) -> type , 'a');
                                    }
                                    (yyval.nptr) = TreeCreate(TLookup("void"), NODE_ASGN,NULL,NULL,NULL,(yyvsp[(1) - (4)].nptr),(yyvsp[(3) - (4)].nptr),NULL);  
                                }
    break;

  case 54:
#line 405 "abstree.y"
    {
                                            type_assign_arr((yyvsp[(1) - (7)].nptr),(yyvsp[(3) - (7)].nptr),0);
                                            type_comp((yyvsp[(1) - (7)].nptr)-> type,(yyvsp[(6) - (7)].nptr) -> type,'a'); 
                                            (yyval.nptr) = TreeCreate(TLookup("void"), NODE_ARRAY_ASGN,NULL,NULL,NULL,(yyvsp[(1) - (7)].nptr),(yyvsp[(3) - (7)].nptr),(yyvsp[(6) - (7)].nptr)); 
                                          }
    break;

  case 55:
#line 410 "abstree.y"
    {
                                 type_assign((yyvsp[(3) - (5)].nptr),NULL,0,0,0,0,1);
                                 (yyval.nptr) = TreeCreate(TLookup("void"), NODE_READ,NULL,NULL,NULL,NULL,(yyvsp[(3) - (5)].nptr),NULL); 
                                }
    break;

  case 56:
#line 414 "abstree.y"
    {
                                                type_assign_arr((yyvsp[(3) - (8)].nptr),(yyvsp[(5) - (8)].nptr),0);
                                                (yyval.nptr) = TreeCreate(TLookup("void"), NODE_ARRAY_READ,NULL,NULL,NULL,NULL,(yyvsp[(3) - (8)].nptr),(yyvsp[(5) - (8)].nptr)); 
                                            }
    break;

  case 57:
#line 418 "abstree.y"
    {
                                    if((yyvsp[(3) - (5)].nptr) -> type == TLookup("integer") || (yyvsp[(3) - (5)].nptr) -> type == TLookup("string"))
                                    {
                                        (yyval.nptr) = TreeCreate(TLookup("void"), NODE_WRITE,NULL,NULL,NULL,NULL,(yyvsp[(3) - (5)].nptr),NULL);
                                    }
                                    else
                                    {
                                        head = get_last((yyvsp[(3) - (5)].nptr));
                                        if(head -> type == TLookup("integer") || head -> type == TLookup("string"))
                                        {
                                            (yyval.nptr) = TreeCreate(TLookup("void"), NODE_WRITE,NULL,NULL,NULL,NULL,(yyvsp[(3) - (5)].nptr),NULL);
                                        }
                                        else
                                        {
                                            yyerror("Cannot write a udt type\n");
                                            exit(1);
                                        }
                                    }
                                    
                                }
    break;

  case 58:
#line 439 "abstree.y"
    { 
                               		type_comp((yyvsp[(3) - (8)].nptr) -> type, TLookup("boolean"),'i');
                                    (yyval.nptr) = TreeCreate(TLookup("void"), NODE_IF,NULL,NULL,NULL,(yyvsp[(3) - (8)].nptr),(yyvsp[(6) - (8)].nptr),NULL); 
                               }
    break;

  case 59:
#line 444 "abstree.y"
    { 
                               		type_comp((yyvsp[(3) - (10)].nptr) -> type, TLookup("boolean"),'e');
                                    (yyval.nptr) = TreeCreate(TLookup("void"), NODE_IF_ELSE,NULL,NULL,NULL,(yyvsp[(3) - (10)].nptr),(yyvsp[(6) - (10)].nptr),(yyvsp[(8) - (10)].nptr)); 
                                }
    break;

  case 60:
#line 449 "abstree.y"
    { 
                               		type_comp((yyvsp[(3) - (8)].nptr) -> type, TLookup("boolean"),'w');
                                    (yyval.nptr) = TreeCreate(TLookup("void"), NODE_WHILE,NULL,NULL,NULL,(yyvsp[(3) - (8)].nptr),(yyvsp[(6) - (8)].nptr),NULL); 
                                }
    break;

  case 61:
#line 453 "abstree.y"
    {
        								type_assign((yyvsp[(1) - (6)].nptr),NULL,1,0,1,0,0);
                                        head = TreeCreate(TLookup("integer"),NODE_ALLOC,NULL,NULL,NULL,NULL,NULL,NULL);
                                        (yyval.nptr) = TreeCreate(TLookup("void"), NODE_ASGN,NULL,NULL,NULL,(yyvsp[(1) - (6)].nptr),head,NULL);
                                    }
    break;

  case 62:
#line 458 "abstree.y"
    {
                                            head = get_last((yyvsp[(1) - (6)].nptr));
                                            if(head -> type == TLookup("integer") || head -> type == TLookup("string") )
                                            {
                                               yyerror("Cannot ALLOC to string or integer variable\n");
                                                    exit(1);
                                            }
                                            else
                                            {
                                                head = TreeCreate(TLookup("integer"),NODE_ALLOC,NULL,NULL,NULL,NULL,NULL,NULL);
                                                (yyval.nptr) = TreeCreate(TLookup("void"), NODE_ASGN,NULL,NULL,NULL,(yyvsp[(1) - (6)].nptr),head,NULL);        
                                            }
                                        }
    break;

  case 63:
#line 471 "abstree.y"
    {
                                            head = get_last((yyvsp[(1) - (4)].nptr));
                                            head1 = get_last((yyvsp[(3) - (4)].nptr));
                                            if(head1 -> type == head -> type)
                                                (yyval.nptr) = TreeCreate(TLookup("void"), NODE_ASGN,NULL,NULL,NULL,(yyvsp[(1) - (4)].nptr),(yyvsp[(3) - (4)].nptr),NULL);        
                                            else
                                            {
                                                yyerror("conflicting assignment types in field1\n");
                                                exit(1);
                                            }
                                        }
    break;

  case 64:
#line 482 "abstree.y"
    {
                                            head = get_last((yyvsp[(1) - (4)].nptr));
                                            if((yyvsp[(3) - (4)].nptr) -> type == head -> type)
                                                (yyval.nptr) = TreeCreate(TLookup("void"), NODE_ASGN,NULL,NULL,NULL,(yyvsp[(1) - (4)].nptr),(yyvsp[(3) - (4)].nptr),NULL);        
                                            else
                                            {
                                                yyerror("conflicting assignment types in field2\n");
                                                exit(1);
                                            }
                                        }
    break;

  case 65:
#line 492 "abstree.y"
    {
                                            type_assign((yyvsp[(3) - (5)].nptr),NULL,1,1,0,0,0);
                                            (yyval.nptr) = TreeCreate(TLookup("void"),NODE_FREE,NULL,NULL,NULL,NULL,(yyvsp[(3) - (5)].nptr),NULL); 
                                        }
    break;

  case 66:
#line 496 "abstree.y"
    {
                                            head = get_last((yyvsp[(3) - (5)].nptr));
                                            if(head -> type == TLookup("integer") || head -> type == TLookup("string"))
                                            {
                                                yyerror("cannot FREE non-udt\n");
                                                exit(1);
                                            }
                                            (yyval.nptr) = TreeCreate(TLookup("void"),NODE_FREE,NULL,NULL,NULL,NULL,(yyvsp[(3) - (5)].nptr),NULL); 
	                                    }
    break;

  case 67:
#line 505 "abstree.y"
    {
                                            head = get_last((yyvsp[(3) - (5)].nptr));
                                            
                                            if(head -> type != TLookup("integer") && head -> type != TLookup("string") )
                                            {
                                                yyerror("cannot READ a udt type\n");
                                                exit(1);
                                            }
                                            (yyval.nptr) = TreeCreate(TLookup("void"),NODE_READ,NULL,NULL,NULL,NULL,(yyvsp[(3) - (5)].nptr),NULL); 
	                                    }
    break;

  case 68:
#line 515 "abstree.y"
    {
			                                type_assign((yyvsp[(1) - (4)].nptr),NULL,1,0,0,0,0);
			                                (yyval.nptr) = TreeCreate(TLookup("void"), NODE_ASGN,NULL,NULL,NULL,(yyvsp[(1) - (4)].nptr),(yyvsp[(3) - (4)].nptr),NULL);
			        					}
    break;

  case 69:
#line 519 "abstree.y"
    {
                                head = get_last((yyvsp[(1) - (4)].nptr));
                                
                                if(head -> type == TLookup("integer") || head -> type == TLookup("string")
                                    || head -> type == TLookup("array_integer") || head -> type == TLookup("array_string"))
                                {
                                    yyerror("cannot assign null to a non-udt\n");
                                    exit(1);
                                }
								(yyval.nptr) = TreeCreate(TLookup("void"), NODE_ASGN,NULL,NULL,NULL,(yyvsp[(1) - (4)].nptr),(yyvsp[(3) - (4)].nptr),NULL); 
						    }
    break;

  case 70:
#line 531 "abstree.y"
    {

                                                        if((exprcount < 1) || (exprcount >4))
                                                        {
                                                           yyerror("Incorrect number of arguments to exposcall function\n");
                                                           exit(1);
                                                        }

                                                        type_comp(NULL,(yyvsp[(5) - (7)].nptr) -> type,'x');
                                                        type_assign((yyvsp[(1) - (7)].nptr),NULL,0,0,0,0,0);
                                                        type_comp((yyvsp[(1) - (7)].nptr) -> type,NULL,'x');

                                                        head1 = TreeCreate(TLookup("void"), NODE_EXPOSCALL,"exposcall",NULL,NULL,NULL,NULL,(yyvsp[(5) - (7)].nptr));
                                                        (yyval.nptr) = TreeCreate(TLookup("void"), NODE_ASGN,NULL,NULL,NULL,(yyvsp[(1) - (7)].nptr),head1,NULL);

													}
    break;

  case 71:
#line 547 "abstree.y"
    {
                                        head = TreeCreate(TLookup("void"), NODE_INIT,NULL,NULL,NULL,NULL,NULL,NULL);
        								(yyval.nptr) = TreeCreate(TLookup("void"), NODE_ASGN,NULL,NULL,NULL,(yyvsp[(1) - (6)].nptr),head,NULL); 
							         }
    break;

  case 72:
#line 552 "abstree.y"
    {
                            (yyval.nptr) = TreeCreate(TLookup("void"), NODE_BRK, NULL,NULL,NULL,NULL,NULL,NULL);
                        }
    break;

  case 73:
#line 556 "abstree.y"
    {
                            (yyval.nptr) = TreeCreate(TLookup("void"), NODE_CONTINUE, NULL,NULL,NULL,NULL,NULL,NULL);
                        }
    break;

  case 74:
#line 559 "abstree.y"
    {
                        (yyval.nptr) = TreeCreate(TLookup("void"), NODE_BRKP, NULL,NULL,NULL,NULL,NULL,NULL);
                    }
    break;

  case 75:
#line 564 "abstree.y"
    {
                            (yyvsp[(1) - (3)].nptr) -> nodetype = NODE_FIELD;
                            type_assign((yyvsp[(1) - (3)].nptr),(yyvsp[(3) - (3)].nptr),1,0,0,1,0);
                            (yyval.nptr) = (yyvsp[(1) - (3)].nptr);
                        }
    break;

  case 76:
#line 569 "abstree.y"
    {
                            head1 = head = get_last((yyvsp[(1) - (3)].nptr));
                            
                            temp1 = head -> type;
                            if(temp1 != TLookup("string") && temp1 != TLookup("integer")
                                && temp1 != TLookup("array_integer") && temp1 != TLookup("array_string"))
                            {
                                ftemp = FLookup((yyvsp[(3) - (3)].nptr) -> name,temp1 -> fields);
                                if(ftemp != NULL)
                                {
                                    (yyvsp[(3) - (3)].nptr) -> type = ftemp -> type;
                                    head -> ptr2 = (yyvsp[(3) - (3)].nptr);
                                    (yyval.nptr) = (yyvsp[(1) - (3)].nptr);
                                }
                                else
                                {
                                    yyerror("Un-declared field variable\n");
                                    exit(1);
                                }
                            }
                            else
                            {
                                yyerror("Illegal access of identifier\n");
                                exit(1);
                            }
                        }
    break;

  case 77:
#line 597 "abstree.y"
    {
                                    exprcount = 1;
                                    (yyval.nptr) = (yyvsp[(1) - (1)].nptr);
                                }
    break;

  case 78:
#line 601 "abstree.y"
    {
                                    indicator = 1;
                                    exprcount++;
                                    head = (struct ASTNode*) malloc(sizeof(struct ASTNode));
                                    head -> nodetype = NODE_EXPR;
                                    head -> ptr1 = (yyvsp[(3) - (3)].nptr);
                                    head -> ptr2 = (yyvsp[(1) - (3)].nptr);
                                    (yyval.nptr) = head;
                                }
    break;

  case 79:
#line 612 "abstree.y"
    {
                                exprcount = 1;
                                (yyval.nptr) = (yyvsp[(1) - (1)].nptr);
                            }
    break;

  case 80:
#line 616 "abstree.y"
    {
                                                    indicator = 1;
                                                    exprcount++;
                                                    head = (yyvsp[(1) - (3)].nptr);

                                                    while(head -> ptr1 != NULL)
                                                        head = head -> ptr1;

                                                    head -> ptr1 = (yyvsp[(3) - (3)].nptr);
                                                    (yyval.nptr) = (yyvsp[(1) - (3)].nptr);
                                                    }
    break;

  case 81:
#line 629 "abstree.y"
    {
                                type_comp((yyvsp[(1) - (3)].nptr)->type,(yyvsp[(3) - (3)].nptr)->type,'+');
                                (yyval.nptr) = TreeCreate(TLookup("integer"), NODE_PLUS , NULL,NULL, NULL, (yyvsp[(1) - (3)].nptr), (yyvsp[(3) - (3)].nptr), NULL);
                            }
    break;

  case 82:
#line 633 "abstree.y"
    {
                                type_comp((yyvsp[(1) - (3)].nptr)->type,(yyvsp[(3) - (3)].nptr)->type,'-');
                                (yyval.nptr) = TreeCreate(TLookup("integer"), NODE_MINUS , NULL,NULL , NULL, (yyvsp[(1) - (3)].nptr), (yyvsp[(3) - (3)].nptr), NULL);                                
                            }
    break;

  case 83:
#line 637 "abstree.y"
    {
                                type_comp((yyvsp[(1) - (3)].nptr)->type,(yyvsp[(3) - (3)].nptr)->type,'*');
                                (yyval.nptr) = TreeCreate(TLookup("integer"), NODE_MUL , NULL,NULL , NULL, (yyvsp[(1) - (3)].nptr), (yyvsp[(3) - (3)].nptr), NULL);                                
                            }
    break;

  case 84:
#line 641 "abstree.y"
    {
                                type_comp((yyvsp[(1) - (3)].nptr)->type,(yyvsp[(3) - (3)].nptr)->type,'/');
                                (yyval.nptr) = TreeCreate(TLookup("integer"), NODE_DIV , NULL,NULL , NULL, (yyvsp[(1) - (3)].nptr), (yyvsp[(3) - (3)].nptr), NULL);                                
                            }
    break;

  case 85:
#line 645 "abstree.y"
    {
                                type_comp((yyvsp[(1) - (3)].nptr)->type,(yyvsp[(3) - (3)].nptr)->type,'%');
                                (yyval.nptr) = TreeCreate(TLookup("integer"), NODE_MOD , NULL,NULL , NULL, (yyvsp[(1) - (3)].nptr), (yyvsp[(3) - (3)].nptr), NULL);
                            }
    break;

  case 86:
#line 649 "abstree.y"
    {
                                type_comp((yyvsp[(1) - (3)].nptr)->type,(yyvsp[(3) - (3)].nptr)->type,'<');
                                (yyval.nptr) = TreeCreate(TLookup("boolean"), NODE_LT , NULL, NULL, NULL, (yyvsp[(1) - (3)].nptr), (yyvsp[(3) - (3)].nptr), NULL);
                            }
    break;

  case 87:
#line 653 "abstree.y"
    {
                                type_comp((yyvsp[(1) - (3)].nptr)->type,(yyvsp[(3) - (3)].nptr)->type,'#');
                                (yyval.nptr) = TreeCreate(TLookup("boolean"), NODE_LE , NULL, NULL, NULL, (yyvsp[(1) - (3)].nptr), (yyvsp[(3) - (3)].nptr), NULL);
                            }
    break;

  case 88:
#line 657 "abstree.y"
    {
                                type_comp((yyvsp[(1) - (3)].nptr)->type,(yyvsp[(3) - (3)].nptr)->type,'>');
                                (yyval.nptr) = TreeCreate(TLookup("boolean"), NODE_GT , NULL, NULL, NULL, (yyvsp[(1) - (3)].nptr), (yyvsp[(3) - (3)].nptr), NULL);
                            }
    break;

  case 89:
#line 661 "abstree.y"
    {
                                type_comp((yyvsp[(1) - (3)].nptr)->type,(yyvsp[(3) - (3)].nptr)->type,'$');
                                (yyval.nptr) = TreeCreate(TLookup("boolean"), NODE_GE , NULL, NULL, NULL, (yyvsp[(1) - (3)].nptr), (yyvsp[(3) - (3)].nptr), NULL);
                            }
    break;

  case 90:
#line 665 "abstree.y"
    {
                                type_comp((yyvsp[(1) - (3)].nptr)->type,(yyvsp[(3) - (3)].nptr)->type,'d');
                                (yyval.nptr) = TreeCreate(TLookup("boolean"), NODE_DEQ, NULL, NULL, NULL, (yyvsp[(1) - (3)].nptr), (yyvsp[(3) - (3)].nptr), NULL);
                            }
    break;

  case 91:
#line 669 "abstree.y"
    {
                                type_comp((yyvsp[(1) - (3)].nptr)->type,(yyvsp[(3) - (3)].nptr)->type,'n');
                                (yyval.nptr) = TreeCreate(TLookup("boolean"), NODE_NEQ, NULL, NULL, NULL, (yyvsp[(1) - (3)].nptr), (yyvsp[(3) - (3)].nptr), NULL);
                            }
    break;

  case 92:
#line 673 "abstree.y"
    {
                                type_comp((yyvsp[(1) - (3)].nptr)->type,(yyvsp[(3) - (3)].nptr)->type,'&');
                                (yyval.nptr) = TreeCreate(TLookup("boolean"), NODE_AND, NULL, NULL, NULL, (yyvsp[(1) - (3)].nptr), (yyvsp[(3) - (3)].nptr), NULL);
                            }
    break;

  case 93:
#line 677 "abstree.y"
    {
                                type_comp((yyvsp[(1) - (3)].nptr)->type,(yyvsp[(3) - (3)].nptr)->type,'|');
                                (yyval.nptr) = TreeCreate(TLookup("boolean"), NODE_OR, NULL, NULL, NULL, (yyvsp[(1) - (3)].nptr), (yyvsp[(3) - (3)].nptr), NULL);
                            }
    break;

  case 94:
#line 681 "abstree.y"
    {
                                type_comp((yyvsp[(2) - (2)].nptr)->type,NULL,'!');
                                (yyval.nptr) = TreeCreate(TLookup("boolean"), NODE_NOT, NULL, NULL, NULL, NULL, (yyvsp[(2) - (2)].nptr), NULL);
                            }
    break;

  case 95:
#line 685 "abstree.y"
    {
                                (yyval.nptr) = (yyvsp[(2) - (3)].nptr);
                            }
    break;

  case 96:
#line 688 "abstree.y"
    {
                                (yyval.nptr) = (yyvsp[(1) - (1)].nptr);
                            }
    break;

  case 97:
#line 691 "abstree.y"
    {
                                (yyval.nptr) = (yyvsp[(1) - (1)].nptr);
				(yyval.nptr)->type = TLookup("integer");
                            }
    break;

  case 98:
#line 695 "abstree.y"
    {
                                (yyvsp[(2) - (2)].nptr) -> value.intval = ((yyvsp[(2) - (2)].nptr) -> value.intval)*-1;   //negating the value
                                (yyval.nptr) = (yyvsp[(2) - (2)].nptr);
				(yyval.nptr)->type = TLookup("integer");
                            }
    break;

  case 99:
#line 700 "abstree.y"
    {
                                
        						(yyval.nptr) = (yyvsp[(1) - (1)].nptr);
							(yyval.nptr)->type = TLookup("string");
        					}
    break;

  case 100:
#line 705 "abstree.y"
    {
				    			type_assign((yyvsp[(1) - (1)].nptr),NULL,0,0,0,0,0);
				    			(yyval.nptr) = (yyvsp[(1) - (1)].nptr);
				            }
    break;

  case 101:
#line 709 "abstree.y"
    {
								type_assign_arr((yyvsp[(1) - (4)].nptr),(yyvsp[(3) - (4)].nptr),0);
								(yyval.nptr) = TreeCreate((yyvsp[(1) - (4)].nptr) -> type,NODE_ARRAY,NULL,NULL,NULL,(yyvsp[(1) - (4)].nptr),(yyvsp[(3) - (4)].nptr),NULL);
                            }
    break;

  case 102:
#line 713 "abstree.y"
    {
        						type_assign_arr((yyvsp[(1) - (4)].nptr),(yyvsp[(3) - (4)].nptr),1);

                                (yyvsp[(3) - (4)].nptr) -> ptr3 = Gtemp -> paramlist;
                                Arg_callee = Gtemp -> paramlist;
                                while(Arg_callee != NULL)
                                {
                                    exprcount--;
                                    Arg_callee = Arg_callee -> next;
                                }
                                if(exprcount)
                                {
                                    yyerror("Unequal number of arguments\n");
                                    exit(1);
                                }
                                //differentiating b/w one and more than one arguments
                                if(indicator == 1)
                                {
                                    (yyval.nptr) = TreeCreate((yyvsp[(1) - (4)].nptr) -> type,NODE_FUNC,(yyvsp[(1) - (4)].nptr) -> name,NULL,Gtemp -> paramlist,NULL,(yyvsp[(3) - (4)].nptr),NULL);
                                    indicator = 0;
                                }

                                else
                                    (yyval.nptr) = TreeCreate((yyvsp[(1) - (4)].nptr) -> type,NODE_FUNC,(yyvsp[(1) - (4)].nptr) -> name,NULL,Gtemp -> paramlist,NULL,NULL,(yyvsp[(3) - (4)].nptr));
                            }
    break;

  case 103:
#line 739 "abstree.y"
    {
    							type_assign_arr((yyvsp[(1) - (3)].nptr),NULL,1);
                                (yyval.nptr) = TreeCreate((yyvsp[(1) - (3)].nptr) -> type,NODE_FUNC,(yyvsp[(1) - (3)].nptr) -> name,NULL,Gtemp -> paramlist,NULL,NULL,NULL);
                            }
    break;

  case 104:
#line 743 "abstree.y"
    {
	   						    type_assign((yyvsp[(1) - (2)].nptr),NULL,1,0,0,0,0);
		                    	(yyval.nptr) = TreeCreate(TLookup("boolean"), NODE_DEQ, NULL, NULL, NULL, (yyvsp[(1) - (2)].nptr), (yyvsp[(2) - (2)].nptr), NULL);
			    			}
    break;

  case 105:
#line 747 "abstree.y"
    {
	   						    type_assign((yyvsp[(1) - (2)].nptr),NULL,1,0,0,0,0);
	                        	(yyval.nptr) = TreeCreate(TLookup("boolean"), NODE_NEQ, NULL, NULL, NULL, (yyvsp[(1) - (2)].nptr), (yyvsp[(2) - (2)].nptr), NULL);
	        				}
    break;

  case 106:
#line 751 "abstree.y"
    {
	                            type_comp((yyvsp[(1) - (2)].nptr),NULL,'=');
	                            (yyval.nptr) = TreeCreate(TLookup("boolean"), NODE_DEQ, NULL, NULL, NULL, (yyvsp[(1) - (2)].nptr), (yyvsp[(2) - (2)].nptr), NULL);
	        				}
    break;

  case 107:
#line 755 "abstree.y"
    {
	                            type_comp((yyvsp[(1) - (2)].nptr),NULL,'^');
	                            (yyval.nptr) = TreeCreate(TLookup("boolean"), NODE_NEQ, NULL, NULL, NULL, (yyvsp[(1) - (2)].nptr), (yyvsp[(2) - (2)].nptr), NULL);
	        				}
    break;


/* Line 1267 of yacc.c.  */
#line 2707 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 761 "abstree.y"


void yyerror(char const *s) 
{ 
    printf("yyerror  %s\n",s); 
    return ;
} 

int main(int argc,char* argv[]) 
{ 
    TInstall("integer",1,NULL);
    TInstall("string",1,NULL);
    TInstall("boolean",1,NULL);
    TInstall("array_integer",1,NULL);
    TInstall("array_string",1,NULL);
    TInstall("void",0,NULL);
    TInstall("dummy",0,NULL); // This is for creating the fieldlist in case of udt 
    
    if(argc > 1)
    {
        fp = fopen(argv[1],"r");
        if(fp)
            yyin = fp;
    }    
    yyparse(); 
    return 1; 
}

