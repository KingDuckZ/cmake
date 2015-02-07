/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         ddeps_yyparse
#define yylex           ddeps_yylex
#define yyerror         ddeps_yyerror
#define yydebug         ddeps_yydebug
#define yynerrs         ddeps_yynerrs


/* Copy the first part of user declarations.  */
#line 1 "ddepsParser.y" /* yacc.c:339  */

/*============================================================================
  DDeps - D Dependency Scanner for CMake
  Copyright 2014 Trent Forkert

  Distributed under the OSI-approved BSD License (the "License");
  see accompanying file Copyright.txt for details.

  This software is distributed WITHOUT ANY WARRANTY; without even the
  implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the License for more information.
============================================================================*/
/*

This file must be translated to C and modified to build everywhere.

Run bison like this:

  bison --yacc --name-prefix=ddeps_yy \
        --defines=ddepsTok.h -oddepsParser.cxx ddepsParser.y

Modify ddepsParser.cxx:
  - remove TABs

*/

/*-------------------------------------------------------------------------*/
#include "ddepsModule.h" /* Interface to module parser object */
#include "ddepsLexer.h" /* Interface to lexer object */
#include "ddepsTok.h" /* Needs YYSTYPE for YY_DECL */
#include <iostream>

/* Configure the parser to use a lexer object. */
#define YYPARSE_PARAM yyscanner
#define YYLEX_PARAM yyscanner
#define YYERROR_VERBOSE 1
#define yyGetParser (ddeps_yyget_extra(yyscanner))
#define ddeps_yyerror(y,x) \
        yyGetParser->ParserError(x)


/* Forward declare the lexer entry point */
YY_DECL;

/* Disable some warnings in the generated code */
#ifdef __BORLANDC__
# pragma warn -8004 /* Variable assigned a value that is not used.  */
# pragma warn -8008 /* condition always returns true */
# pragma warn -8060 /* possibly incorrect assignment */
# pragma warn -8066 /* unreachable code */
#endif
#ifdef _MSC_VER
# pragma warning (disable: 4102) /* Unused goto label.  */
# pragma warning (disable: 4065) /* Switch statement contains default but no case. */
#endif

#line 129 "ddepsParser.cxx" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "ddepsTok.h".  */
#ifndef YY_DDEPS_YY_DDEPSTOK_H_INCLUDED
# define YY_DDEPS_YY_DDEPSTOK_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int ddeps_yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    dp_SHEBANG = 258,
    dp_COLON = 259,
    dp_COMMA = 260,
    dp_CURLYEND = 261,
    dp_CURLYSTART = 262,
    dp_DOT = 263,
    dp_EQUAL = 264,
    dp_PARENEND = 265,
    dp_PARENSTART = 266,
    dp_SEMICOL = 267,
    dp_EXCLAIM = 268,
    dp_STRINGLITERAL = 269,
    dp_INTLITERAL = 270,
    dp_NAME = 271,
    dp_DEBUG = 272,
    dp_VERSION = 273,
    dp_IMPORT = 274,
    dp_UNITTEST = 275,
    dp_PUBLIC = 276,
    dp_PRIVATE = 277,
    dp_PACKAGE = 278,
    dp_PROTECTED = 279,
    dp_TEMPLATE = 280,
    dp_CLASS = 281,
    dp_INTERFACE = 282,
    dp_STRUCT = 283,
    dp_UNION = 284,
    dp_IF = 285,
    dp_MODULE = 286
  };
#endif
/* Tokens.  */
#define dp_SHEBANG 258
#define dp_COLON 259
#define dp_COMMA 260
#define dp_CURLYEND 261
#define dp_CURLYSTART 262
#define dp_DOT 263
#define dp_EQUAL 264
#define dp_PARENEND 265
#define dp_PARENSTART 266
#define dp_SEMICOL 267
#define dp_EXCLAIM 268
#define dp_STRINGLITERAL 269
#define dp_INTLITERAL 270
#define dp_NAME 271
#define dp_DEBUG 272
#define dp_VERSION 273
#define dp_IMPORT 274
#define dp_UNITTEST 275
#define dp_PUBLIC 276
#define dp_PRIVATE 277
#define dp_PACKAGE 278
#define dp_PROTECTED 279
#define dp_TEMPLATE 280
#define dp_CLASS 281
#define dp_INTERFACE 282
#define dp_STRUCT 283
#define dp_UNION 284
#define dp_IF 285
#define dp_MODULE 286

/* Value type.  */



int ddeps_yyparse (yyscan_t yyscanner);

#endif /* !YY_DDEPS_YY_DDEPSTOK_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 236 "ddepsParser.cxx" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  105
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   478

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  162
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  230

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   286

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   107,   107,   108,   111,   112,   113,   116,   117,   118,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   135,   141,   145,   151,   152,   153,   154,   155,
     158,   159,   162,   165,   166,   169,   172,   173,   175,   178,
     185,   190,   191,   192,   193,   196,   197,   198,   201,   202,
     203,   206,   207,   208,   211,   214,   217,   218,   219,   222,
     223,   226,   227,   228,   229,   232,   233,   234,   237,   238,
     241,   242,   243,   246,   247,   253,   258,   263,   268,   276,
     281,   284,   291,   297,   298,   301,   305,   309,   310,   314,
     318,   319,   320,   324,   327,   330,   333,   334,   340,   345,
     351,   352,   355,   356,   357,   358,   359,   360,   361,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   380,   381,   384,   385,   388,   389,   390,
     393,   397,   403,   406,   407,   410,   411,   414,   417,   421,
     427,   431,   437,   438,   444,   445,   446,   453,   458,   463,
     471,   476,   481,   488,   489,   493,   498,   499,   502,   506,
     512,   516,   522
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "\"#!\"", "\":\"", "\",\"", "\"}\"",
  "\"{\"", "\".\"", "\"=\"", "\")\"", "\"(\"", "\";\"", "\"!\"",
  "\"string\"", "\"integer\"", "\"identifer\"", "\"debug\"", "\"version\"",
  "\"import\"", "\"unittest\"", "\"public\"", "\"private\"", "\"package\"",
  "\"protected\"", "\"template\"", "\"class\"", "\"interface\"",
  "\"struct\"", "\"union\"", "\"if\"", "\"module\"", "$accept", "File",
  "Module", "Declarations", "Declaration", "ModuleDeclaration",
  "ModuleName", "TemplateDeclaration", "PlainTemplate", "ClassTemplate",
  "StructTemplate", "InterfaceTemplate", "UnionTemplate",
  "TemplateContent", "TemplateBlockStart", "TemplateBlockEnd",
  "NonTemplateClass", "NonTemplateStruct", "NonTemplateInterface",
  "NonTemplateUnion", "Constraint", "SuperClasses", "ClassNames",
  "ClassNameWithProtection", "InheritanceProtection", "ClassName",
  "ClassFullyQualifiedName", "ClassAddendums", "ProtectionDeclaration",
  "Protection", "EndProtection", "Block", "BlockStart", "BlockEnd",
  "BlockContent", "Garbage", "SecondaryGarbage", "Literal",
  "ImportDeclaration", "TextImport", "Expression", "ComplicatedExpression",
  "ExprGarbage", "ParenExpr", "CurlyExpr", "ImportList", "Import",
  "ImportBindings", "ImportBindList", "ImportBind",
  "ModuleAliasIdentifier", "ModuleFullyQualifiedName", "Packages",
  "ConditionalDeclaration", "Condition", "VersionCondition",
  "DebugCondition", "UnittestCondition", "EndCondition", "Specification",
  "VersionSpecification", "DebugSpecification", "Identifier", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286
};
# endif

#define YYPACT_NINF -148

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-148)))

#define YYTABLE_NINF -142

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     205,   232,  -148,  -148,  -148,  -148,   108,  -148,  -148,  -148,
    -148,  -148,    40,    54,    37,    11,  -148,  -148,  -148,  -148,
       9,    13,     9,    13,    13,  -148,     9,    36,  -148,   168,
    -148,   448,  -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,
    -148,  -148,  -148,   260,  -148,   448,  -148,  -148,  -148,  -148,
    -148,   287,  -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,
    -148,   314,  -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,
    -148,  -148,  -148,  -148,  -148,  -148,   341,  -148,  -148,  -148,
    -148,    56,    90,   110,    15,   395,  -148,    38,   135,  -148,
      48,  -148,    72,   133,     9,    73,  -148,    57,    97,  -148,
      55,  -148,    70,    25,  -148,  -148,  -148,  -148,  -148,   168,
    -148,  -148,   168,    81,  -148,  -148,  -148,   368,  -148,  -148,
    -148,  -148,  -148,    87,    91,    83,   100,    95,   102,   123,
     136,   137,   138,   141,   422,   142,  -148,     9,     9,     9,
       9,   143,     2,    23,  -148,   147,  -148,  -148,  -148,   147,
    -148,  -148,  -148,  -148,     2,  -148,  -148,     2,     9,  -148,
    -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,
    -148,  -148,  -148,  -148,  -148,  -148,   150,   148,  -148,  -148,
     151,   152,  -148,  -148,    73,  -148,   448,   149,  -148,  -148,
    -148,  -148,   156,  -148,     9,  -148,    82,  -148,  -148,     4,
    -148,     4,  -148,   149,  -148,   149,  -148,     9,     9,  -148,
     157,  -148,    23,  -148,     9,    67,  -148,  -148,  -148,  -148,
    -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    89,    81,    87,    88,     0,    86,    91,    95,
      93,    85,   150,     0,     0,   153,    75,    76,    78,    77,
       0,     0,     0,     0,     0,    90,     0,     0,     3,     6,
       7,     5,    20,    25,    26,    27,    28,    29,    16,    18,
      17,    19,    11,     0,    15,    83,    21,    10,    12,    92,
      13,     0,   144,   145,   146,    14,   156,   157,     2,   118,
     113,     0,   111,   112,   124,   110,   119,   100,   122,   109,
     120,   115,   116,   114,   117,   121,     0,   101,   102,   103,
     104,     0,     0,     0,     0,     0,   162,     0,   127,   128,
       0,   130,     0,   138,     0,     0,    44,     0,     0,    47,
       0,    53,     0,     0,    23,     1,    94,     8,     9,     4,
      74,    79,    84,     0,   143,   155,   126,     0,   123,   105,
     106,   107,   108,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,     0,     0,   101,    96,     0,     0,     0,
       0,     0,     0,    58,    43,     0,    42,    70,    50,     0,
      49,    70,    46,    45,     0,    52,    51,     0,     0,    22,
      73,    82,    80,   142,   125,   161,   160,   152,   151,   159,
     158,   149,   148,   147,    97,   132,   133,   135,   129,   131,
     138,   139,   154,    39,     0,    31,    83,     0,    61,    64,
      63,    62,    55,    56,     0,    59,    65,    68,    41,     0,
      48,     0,    34,     0,    37,     0,    24,     0,     0,    54,
       0,    30,     0,    60,     0,     0,    32,    71,    72,    35,
      33,    36,   134,   136,    40,    38,    57,    69,    66,    67
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -148,  -148,   161,   -28,   -24,  -148,  -148,  -148,  -148,  -148,
    -148,  -148,  -148,  -147,  -148,  -148,  -148,  -148,  -148,  -148,
    -116,    46,  -148,   -48,  -148,   -29,  -148,    16,  -148,  -148,
    -148,     0,  -148,  -148,   -20,  -148,  -148,  -148,  -148,  -148,
     -57,    84,   -75,    -6,   -74,    30,  -148,  -148,   -37,  -148,
    -148,    32,  -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,
    -148,  -148,    -8
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    27,    28,    29,    30,    31,   103,    32,    33,    34,
      35,    36,    37,   185,   186,   225,    38,    39,    40,    41,
     217,   218,   192,   193,   194,   195,   196,   199,    42,    43,
     160,    44,    45,   162,   113,    46,   108,    47,    48,   133,
      76,    77,    78,    49,    80,    87,    88,    89,   175,   176,
      90,    91,    92,    50,    51,    52,    53,    54,   163,    55,
      56,    57,   197
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      79,   120,   122,   109,   117,   107,    93,   202,   143,   183,
     204,   183,    95,    97,    98,   100,   102,   112,   104,   111,
       3,    96,    94,    99,   101,    86,   187,   115,   134,    86,
     129,    86,   184,   158,   184,   130,   105,   159,   203,    86,
     211,   205,   120,   122,   188,   189,   190,   191,    85,    81,
     136,    82,   216,    86,   219,    79,   220,   139,   221,   120,
     122,   143,     3,    83,     3,    84,     6,   152,     6,   144,
     121,   123,    86,   124,   126,   128,   131,     3,     6,    79,
     140,     6,   155,    86,     6,   107,   141,   161,   107,   142,
     214,   147,   151,   167,   154,   215,   157,   146,   150,   165,
     153,   143,   156,   166,     3,   125,    86,   169,     6,   148,
     168,   121,    59,    60,   170,    61,    62,    63,    64,     6,
      65,    66,    67,    68,    69,   127,    86,    70,   121,   177,
      93,   180,   181,   171,    71,    72,    73,    74,    75,   137,
     138,  -140,  -137,   145,   149,   198,   172,   173,   -98,   200,
     206,   174,   -99,   182,     3,   207,   183,   208,   112,  -140,
    -141,   212,    58,   224,   226,   213,   210,   201,   178,   135,
     222,   179,   106,     2,     0,     3,     4,     5,   209,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,   177,
     223,     0,     0,     0,     0,     0,   227,   229,     1,   228,
       2,     0,     3,     4,     5,     0,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     2,     0,     3,
       4,     5,     0,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   110,     2,     0,     3,     4,     5,
       0,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,   114,     2,     0,     3,     4,     5,     0,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    59,    60,
     116,    61,    62,    63,     0,     6,    65,    66,    67,    68,
      69,     0,     0,    70,     0,     0,     0,     0,     0,     0,
      71,    72,    73,    74,    75,    59,    60,     0,    61,    62,
      63,   118,     6,    65,    66,   119,    68,    69,     0,     0,
      70,     0,     0,     0,     0,     0,     0,    71,    72,    73,
      74,    75,    59,    60,   164,    61,    62,    63,     0,     6,
      65,    66,   119,    68,    69,     0,     0,    70,     0,     0,
       0,     0,     0,     0,    71,    72,    73,    74,    75,    59,
      60,     0,    61,    62,    63,     0,     6,    65,    66,   132,
      68,    69,     0,     0,    70,     0,     0,     0,     0,     0,
       0,    71,    72,    73,    74,    75,    59,    60,     0,    61,
      62,    63,     0,     6,    65,    66,   119,    68,    69,     0,
       0,    70,     0,     0,     0,     0,     0,     0,    71,    72,
      73,    74,    75,     2,     0,     3,     4,     5,     0,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25
};

static const yytype_int16 yycheck[] =
{
       6,    76,    76,    31,    61,    29,    14,   154,     4,     7,
     157,     7,    20,    21,    22,    23,    24,    45,    26,    43,
       7,    21,    11,    23,    24,    16,   142,    51,    85,    16,
      15,    16,    30,     8,    30,    20,     0,    12,   154,    16,
     187,   157,   117,   117,    21,    22,    23,    24,    11,     9,
      12,    11,   199,    16,   201,    61,   203,     9,   205,   134,
     134,     4,     7,     9,     7,    11,    11,    12,    11,    12,
      76,    15,    16,    81,    82,    83,    84,     7,    11,    85,
       8,    11,    12,    16,    11,   109,    94,     6,   112,    95,
       8,    97,    98,    10,   100,    13,   102,    97,    98,    12,
     100,     4,   102,    12,     7,    15,    16,    12,    11,    12,
      10,   117,     4,     5,    12,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    15,    16,    19,   134,   137,
     138,   139,   140,    10,    26,    27,    28,    29,    30,     4,
       5,     8,     9,    97,    98,   145,    10,    10,    10,   149,
     158,    10,    10,    10,     7,     5,     7,     9,   186,     8,
       8,     5,     1,     6,   212,   194,   186,   151,   138,    85,
     207,   139,     4,     5,    -1,     7,     8,     9,   184,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   207,
     208,    -1,    -1,    -1,    -1,    -1,   214,   215,     3,   215,
       5,    -1,     7,     8,     9,    -1,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,     5,    -1,     7,
       8,     9,    -1,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,     4,     5,    -1,     7,     8,     9,
      -1,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,     4,     5,    -1,     7,     8,     9,    -1,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    13,    14,    15,
      16,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,     4,     5,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    30,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    13,    14,    15,    16,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,     4,
       5,    -1,     7,     8,     9,    -1,    11,    12,    13,    14,
      15,    16,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,     4,     5,    -1,     7,
       8,     9,    -1,    11,    12,    13,    14,    15,    16,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    30,     5,    -1,     7,     8,     9,    -1,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     7,     8,     9,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    33,    34,    35,
      36,    37,    39,    40,    41,    42,    43,    44,    48,    49,
      50,    51,    60,    61,    63,    64,    67,    69,    70,    75,
      85,    86,    87,    88,    89,    91,    92,    93,    34,     4,
       5,     7,     8,     9,    10,    12,    13,    14,    15,    16,
      19,    26,    27,    28,    29,    30,    72,    73,    74,    75,
      76,     9,    11,     9,    11,    11,    16,    77,    78,    79,
      82,    83,    84,    94,    11,    94,    63,    94,    94,    63,
      94,    63,    94,    38,    94,     0,     4,    36,    68,    35,
       4,    36,    35,    66,     4,    36,     6,    72,    10,    14,
      74,    75,    76,    15,    94,    15,    94,    15,    94,    15,
      20,    94,    14,    71,    72,    73,    12,     4,     5,     9,
       8,    94,    75,     4,    12,    53,    63,    75,    12,    53,
      63,    75,    12,    63,    75,    12,    63,    75,     8,    12,
      62,     6,    65,    90,     6,    12,    12,    10,    10,    12,
      12,    10,    10,    10,    10,    80,    81,    94,    77,    83,
      94,    94,    10,     7,    30,    45,    46,    52,    21,    22,
      23,    24,    54,    55,    56,    57,    58,    94,    63,    59,
      63,    59,    45,    52,    45,    52,    94,     5,     9,    75,
      66,    45,     5,    57,     8,    13,    45,    52,    53,    45,
      45,    45,    80,    94,     6,    47,    55,    94,    75,    94
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    32,    33,    33,    34,    34,    34,    35,    35,    35,
      36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
      36,    36,    37,    38,    38,    39,    39,    39,    39,    39,
      40,    40,    41,    42,    42,    43,    44,    44,    45,    46,
      47,    48,    48,    48,    48,    49,    49,    49,    50,    50,
      50,    51,    51,    51,    52,    53,    54,    54,    54,    55,
      55,    56,    56,    56,    56,    57,    57,    57,    58,    58,
      59,    59,    59,    60,    60,    61,    61,    61,    61,    62,
      63,    64,    65,    66,    66,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    68,    69,    70,    70,    71,    71,
      72,    72,    73,    73,    73,    73,    73,    73,    73,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    75,    75,    76,    76,    77,    77,    77,
      78,    78,    79,    80,    80,    81,    81,    82,    83,    83,
      84,    84,    85,    85,    86,    86,    86,    87,    87,    87,
      88,    88,    88,    89,    89,    90,    91,    91,    92,    92,
      93,    93,    94
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     1,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       5,     4,     5,     5,     4,     5,     5,     4,     3,     1,
       1,     4,     3,     3,     2,     3,     3,     2,     4,     3,
       3,     3,     3,     2,     2,     2,     1,     3,     0,     1,
       2,     1,     1,     1,     1,     1,     3,     3,     1,     3,
       0,     2,     2,     3,     2,     1,     1,     1,     1,     0,
       3,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     4,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     2,     3,     2,     1,     1,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     1,     3,
       1,     3,     3,     2,     1,     1,     1,     4,     4,     4,
       1,     4,     4,     1,     4,     0,     1,     1,     4,     4,
       4,     4,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      yyerror (yyscanner, YY_("syntax error: cannot back up")); \
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
                  Type, Value, yyscanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, yyscan_t yyscanner)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yyscanner);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, yyscan_t yyscanner)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yyscanner);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, yyscan_t yyscanner)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              , yyscanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, yyscanner); \
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, yyscan_t yyscanner)
{
  YYUSE (yyvaluep);
  YYUSE (yyscanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t yyscanner)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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
      yychar = yylex (&yylval, yyscanner);
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 22:
#line 136 "ddepsParser.y" /* yacc.c:1646  */
    {
                   yyGetParser->SetModuleName();
                 }
#line 1556 "ddepsParser.cxx" /* yacc.c:1646  */
    break;

  case 23:
#line 142 "ddepsParser.y" /* yacc.c:1646  */
    {
            yyGetParser->AppendModuleComponent((yyvsp[0].str));
          }
#line 1564 "ddepsParser.cxx" /* yacc.c:1646  */
    break;

  case 24:
#line 146 "ddepsParser.y" /* yacc.c:1646  */
    {
            yyGetParser->AppendModuleComponent((yyvsp[0].str));
          }
#line 1572 "ddepsParser.cxx" /* yacc.c:1646  */
    break;

  case 39:
#line 179 "ddepsParser.y" /* yacc.c:1646  */
    {
                    yyGetParser->PushScope();
                    yyGetParser->SetTemplate();
                  }
#line 1581 "ddepsParser.cxx" /* yacc.c:1646  */
    break;

  case 40:
#line 186 "ddepsParser.y" /* yacc.c:1646  */
    {
                  yyGetParser->PopScope();
                }
#line 1589 "ddepsParser.cxx" /* yacc.c:1646  */
    break;

  case 74:
#line 248 "ddepsParser.y" /* yacc.c:1646  */
    {
                       yyGetParser->SetEndlessScope();
                     }
#line 1597 "ddepsParser.cxx" /* yacc.c:1646  */
    break;

  case 75:
#line 254 "ddepsParser.y" /* yacc.c:1646  */
    {
            yyGetParser->PushScope();
            yyGetParser->SetPublic(true);
          }
#line 1606 "ddepsParser.cxx" /* yacc.c:1646  */
    break;

  case 76:
#line 259 "ddepsParser.y" /* yacc.c:1646  */
    {
            yyGetParser->PushScope();
            yyGetParser->SetPublic(false);
          }
#line 1615 "ddepsParser.cxx" /* yacc.c:1646  */
    break;

  case 77:
#line 264 "ddepsParser.y" /* yacc.c:1646  */
    {
            yyGetParser->PushScope();
            yyGetParser->SetPublic(false);
          }
#line 1624 "ddepsParser.cxx" /* yacc.c:1646  */
    break;

  case 78:
#line 269 "ddepsParser.y" /* yacc.c:1646  */
    {
            yyGetParser->PushScope();
            yyGetParser->SetPublic(false);
          }
#line 1633 "ddepsParser.cxx" /* yacc.c:1646  */
    break;

  case 79:
#line 276 "ddepsParser.y" /* yacc.c:1646  */
    {
              yyGetParser->PopScope();
             }
#line 1641 "ddepsParser.cxx" /* yacc.c:1646  */
    break;

  case 81:
#line 285 "ddepsParser.y" /* yacc.c:1646  */
    {
            yyGetParser->PushScope();
            yyGetParser->MaybeFunctionTemplate();
          }
#line 1650 "ddepsParser.cxx" /* yacc.c:1646  */
    break;

  case 82:
#line 292 "ddepsParser.y" /* yacc.c:1646  */
    {
          yyGetParser->PopScope();
        }
#line 1658 "ddepsParser.cxx" /* yacc.c:1646  */
    break;

  case 85:
#line 302 "ddepsParser.y" /* yacc.c:1646  */
    {
         yyGetParser->BeginPossibleFunctionTemplate();
       }
#line 1666 "ddepsParser.cxx" /* yacc.c:1646  */
    break;

  case 86:
#line 306 "ddepsParser.y" /* yacc.c:1646  */
    {
         yyGetParser->CancelFunctionTemplate();
       }
#line 1674 "ddepsParser.cxx" /* yacc.c:1646  */
    break;

  case 88:
#line 311 "ddepsParser.y" /* yacc.c:1646  */
    {
        yyGetParser->CancelFunctionTemplate();
       }
#line 1682 "ddepsParser.cxx" /* yacc.c:1646  */
    break;

  case 89:
#line 315 "ddepsParser.y" /* yacc.c:1646  */
    {
        yyGetParser->CancelFunctionTemplate();
       }
#line 1690 "ddepsParser.cxx" /* yacc.c:1646  */
    break;

  case 92:
#line 321 "ddepsParser.y" /* yacc.c:1646  */
    {
        yyGetParser->HitUnclaimedParenExpr();
       }
#line 1698 "ddepsParser.cxx" /* yacc.c:1646  */
    break;

  case 97:
#line 335 "ddepsParser.y" /* yacc.c:1646  */
    {
                  yyGetParser->AcceptTextImportIfValid();
                 }
#line 1706 "ddepsParser.cxx" /* yacc.c:1646  */
    break;

  case 98:
#line 341 "ddepsParser.y" /* yacc.c:1646  */
    {
            // Propose match
            yyGetParser->AddPossibleTextImport((yyvsp[0].str));
          }
#line 1715 "ddepsParser.cxx" /* yacc.c:1646  */
    break;

  case 99:
#line 346 "ddepsParser.y" /* yacc.c:1646  */
    {
            yyGetParser->InvalidateTextImport();
          }
#line 1723 "ddepsParser.cxx" /* yacc.c:1646  */
    break;

  case 130:
#line 394 "ddepsParser.y" /* yacc.c:1646  */
    {
        yyGetParser->AddModuleImport();
      }
#line 1731 "ddepsParser.cxx" /* yacc.c:1646  */
    break;

  case 131:
#line 398 "ddepsParser.y" /* yacc.c:1646  */
    {
        yyGetParser->AddModuleImport();
      }
#line 1739 "ddepsParser.cxx" /* yacc.c:1646  */
    break;

  case 138:
#line 418 "ddepsParser.y" /* yacc.c:1646  */
    {
                          yyGetParser->AppendModuleComponent((yyvsp[0].str));
                        }
#line 1747 "ddepsParser.cxx" /* yacc.c:1646  */
    break;

  case 139:
#line 422 "ddepsParser.y" /* yacc.c:1646  */
    {
                          yyGetParser->AppendModuleComponent((yyvsp[0].str));
                        }
#line 1755 "ddepsParser.cxx" /* yacc.c:1646  */
    break;

  case 140:
#line 428 "ddepsParser.y" /* yacc.c:1646  */
    {
          yyGetParser->AppendModuleComponent((yyvsp[0].str));
        }
#line 1763 "ddepsParser.cxx" /* yacc.c:1646  */
    break;

  case 141:
#line 432 "ddepsParser.y" /* yacc.c:1646  */
    {
          yyGetParser->AppendModuleComponent((yyvsp[0].str));
        }
#line 1771 "ddepsParser.cxx" /* yacc.c:1646  */
    break;

  case 143:
#line 439 "ddepsParser.y" /* yacc.c:1646  */
    {
                        yyGetParser->SetEndlessScope();
                      }
#line 1779 "ddepsParser.cxx" /* yacc.c:1646  */
    break;

  case 146:
#line 447 "ddepsParser.y" /* yacc.c:1646  */
    {
           yyGetParser->PushScope();
           yyGetParser->RequireVersion("unittest");
         }
#line 1788 "ddepsParser.cxx" /* yacc.c:1646  */
    break;

  case 147:
#line 454 "ddepsParser.y" /* yacc.c:1646  */
    {
                  yyGetParser->PushScope();
                  yyGetParser->RequireVersion((yyvsp[-1].str));
                }
#line 1797 "ddepsParser.cxx" /* yacc.c:1646  */
    break;

  case 148:
#line 459 "ddepsParser.y" /* yacc.c:1646  */
    {
                  yyGetParser->PushScope();
                  yyGetParser->RequireVersion("unittest");
                }
#line 1806 "ddepsParser.cxx" /* yacc.c:1646  */
    break;

  case 149:
#line 464 "ddepsParser.y" /* yacc.c:1646  */
    {
                  yyGetParser->PushScope();
                  yyGetParser->RequireVersionLevel((yyvsp[-1].str));
                }
#line 1815 "ddepsParser.cxx" /* yacc.c:1646  */
    break;

  case 150:
#line 472 "ddepsParser.y" /* yacc.c:1646  */
    {
                yyGetParser->PushScope();
                yyGetParser->RequireDebugFlag();
              }
#line 1824 "ddepsParser.cxx" /* yacc.c:1646  */
    break;

  case 151:
#line 477 "ddepsParser.y" /* yacc.c:1646  */
    {
                yyGetParser->PushScope();
                yyGetParser->RequireDebug((yyvsp[-1].str));
              }
#line 1833 "ddepsParser.cxx" /* yacc.c:1646  */
    break;

  case 152:
#line 482 "ddepsParser.y" /* yacc.c:1646  */
    {
                yyGetParser->PushScope();
                yyGetParser->RequireDebugLevel((yyvsp[-1].str));
              }
#line 1842 "ddepsParser.cxx" /* yacc.c:1646  */
    break;

  case 155:
#line 493 "ddepsParser.y" /* yacc.c:1646  */
    {
              yyGetParser->PopScope();
            }
#line 1850 "ddepsParser.cxx" /* yacc.c:1646  */
    break;

  case 158:
#line 503 "ddepsParser.y" /* yacc.c:1646  */
    {
                      yyGetParser->DeclareVersion((yyvsp[-1].str));
                    }
#line 1858 "ddepsParser.cxx" /* yacc.c:1646  */
    break;

  case 159:
#line 507 "ddepsParser.y" /* yacc.c:1646  */
    {
                      yyGetParser->DeclareVersionLevel((yyvsp[-1].str));
                    }
#line 1866 "ddepsParser.cxx" /* yacc.c:1646  */
    break;

  case 160:
#line 513 "ddepsParser.y" /* yacc.c:1646  */
    {
                    yyGetParser->DeclareDebug((yyvsp[-1].str));
                  }
#line 1874 "ddepsParser.cxx" /* yacc.c:1646  */
    break;

  case 161:
#line 517 "ddepsParser.y" /* yacc.c:1646  */
    {
                    yyGetParser->DeclareDebugLevel((yyvsp[-1].str));
                  }
#line 1882 "ddepsParser.cxx" /* yacc.c:1646  */
    break;


#line 1886 "ddepsParser.cxx" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
      yyerror (yyscanner, YY_("syntax error"));
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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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
        yyerror (yyscanner, yymsgp);
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
                      yytoken, &yylval, yyscanner);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
                  yystos[yystate], yyvsp, yyscanner);
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
  yyerror (yyscanner, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, yyscanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yyscanner);
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
#line 525 "ddepsParser.y" /* yacc.c:1906  */

/* End of grammar */
