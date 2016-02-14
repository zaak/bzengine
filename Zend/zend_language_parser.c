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
#define yyparse         zendparse
#define yylex           zendlex
#define yyerror         zenderror
#define yydebug         zenddebug
#define yynerrs         zendnerrs


/* Copy the first part of user declarations.  */
#line 1 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:339  */

/*
   +----------------------------------------------------------------------+
   | Zend Engine                                                          |
   +----------------------------------------------------------------------+
   | Copyright (c) 1998-2015 Zend Technologies Ltd. (http://www.zend.com) |
   +----------------------------------------------------------------------+
   | This source file is subject to version 2.00 of the Zend license,     |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.zend.com/license/2_00.txt.                                |
   | If you did not receive a copy of the Zend license and are unable to  |
   | obtain it through the world-wide-web, please send a note to          |
   | license@zend.com so we can mail you a copy immediately.              |
   +----------------------------------------------------------------------+
   | Authors: Andi Gutmans <andi@zend.com>                                |
   |          Zeev Suraski <zeev@zend.com>                                |
   |          Nikita Popov <nikic@php.net>                                |
   +----------------------------------------------------------------------+
*/

/* $Id$ */

#include "zend_compile.h"
#include "zend.h"
#include "zend_list.h"
#include "zend_globals.h"
#include "zend_API.h"
#include "zend_constants.h"
#include "zend_language_scanner.h"

#define YYSIZE_T size_t
#define yytnamerr zend_yytnamerr
static YYSIZE_T zend_yytnamerr(char*, const char*);

#define YYERROR_VERBOSE
#define YYSTYPE zend_parser_stack_elem

#ifdef _MSC_VER
#define YYMALLOC malloc
#define YYFREE free
#endif


#line 117 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:339  */

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
   by #include "zend_language_parser.h".  */
#ifndef YY_ZEND_MEDIA_ZAAK_C8E4533F_1124_4EF8_9AE0_BF67B87532EE_PROJECTS_PHP_SRC_ZEND_ZEND_LANGUAGE_PARSER_H_INCLUDED
# define YY_ZEND_MEDIA_ZAAK_C8E4533F_1124_4EF8_9AE0_BF67B87532EE_PROJECTS_PHP_SRC_ZEND_ZEND_LANGUAGE_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int zenddebug;
#endif
/* "%code requires" blocks.  */
#line 49 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:355  */


#line 150 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    END = 0,
    T_INCLUDE = 258,
    T_INCLUDE_ONCE = 259,
    T_EVAL = 260,
    T_REQUIRE = 261,
    T_REQUIRE_ONCE = 262,
    T_LOGICAL_OR = 263,
    T_LOGICAL_XOR = 264,
    T_LOGICAL_AND = 265,
    T_PRINT = 266,
    T_YIELD = 267,
    T_DOUBLE_ARROW = 268,
    T_YIELD_FROM = 269,
    T_PLUS_EQUAL = 270,
    T_MINUS_EQUAL = 271,
    T_MUL_EQUAL = 272,
    T_DIV_EQUAL = 273,
    T_CONCAT_EQUAL = 274,
    T_MOD_EQUAL = 275,
    T_AND_EQUAL = 276,
    T_OR_EQUAL = 277,
    T_XOR_EQUAL = 278,
    T_SL_EQUAL = 279,
    T_SR_EQUAL = 280,
    T_POW_EQUAL = 281,
    T_COALESCE = 282,
    T_BOOLEAN_OR = 283,
    T_BOOLEAN_AND = 284,
    T_IS_EQUAL = 285,
    T_IS_NOT_EQUAL = 286,
    T_IS_IDENTICAL = 287,
    T_IS_NOT_IDENTICAL = 288,
    T_SPACESHIP = 289,
    T_IS_SMALLER_OR_EQUAL = 290,
    T_IS_GREATER_OR_EQUAL = 291,
    T_SL = 292,
    T_SR = 293,
    T_INSTANCEOF = 294,
    T_INC = 295,
    T_DEC = 296,
    T_INT_CAST = 297,
    T_DOUBLE_CAST = 298,
    T_STRING_CAST = 299,
    T_ARRAY_CAST = 300,
    T_OBJECT_CAST = 301,
    T_BOOL_CAST = 302,
    T_UNSET_CAST = 303,
    T_POW = 304,
    T_NEW = 305,
    T_CLONE = 306,
    T_NOELSE = 307,
    T_ELSEIF = 308,
    T_ELSE = 309,
    T_ENDIF = 310,
    T_STATIC = 311,
    T_ABSTRACT = 312,
    T_FINAL = 313,
    T_PRIVATE = 314,
    T_PROTECTED = 315,
    T_PUBLIC = 316,
    T_LNUMBER = 317,
    T_DNUMBER = 318,
    T_STRING = 319,
    T_VARIABLE = 320,
    T_INLINE_HTML = 321,
    T_ENCAPSED_AND_WHITESPACE = 322,
    T_CONSTANT_ENCAPSED_STRING = 323,
    T_STRING_VARNAME = 324,
    T_NUM_STRING = 325,
    T_EXIT = 326,
    T_IF = 327,
    T_ECHO = 328,
    T_DO = 329,
    T_WHILE = 330,
    T_ENDWHILE = 331,
    T_FOR = 332,
    T_ENDFOR = 333,
    T_FOREACH = 334,
    T_ENDFOREACH = 335,
    T_DECLARE = 336,
    T_ENDDECLARE = 337,
    T_AS = 338,
    T_SWITCH = 339,
    T_ENDSWITCH = 340,
    T_CASE = 341,
    T_DEFAULT = 342,
    T_BREAK = 343,
    T_CONTINUE = 344,
    T_GOTO = 345,
    T_FUNCTION = 346,
    T_CONST = 347,
    T_RETURN = 348,
    T_TRY = 349,
    T_CATCH = 350,
    T_FINALLY = 351,
    T_THROW = 352,
    T_USE = 353,
    T_INSTEADOF = 354,
    T_GLOBAL = 355,
    T_VAR = 356,
    T_UNSET = 357,
    T_ISSET = 358,
    T_EMPTY = 359,
    T_HALT_COMPILER = 360,
    T_CLASS = 361,
    T_TRAIT = 362,
    T_INTERFACE = 363,
    T_EXTENDS = 364,
    T_IMPLEMENTS = 365,
    T_OBJECT_OPERATOR = 366,
    T_LIST = 367,
    T_ARRAY = 368,
    T_CALLABLE = 369,
    T_LINE = 370,
    T_FILE = 371,
    T_DIR = 372,
    T_CLASS_C = 373,
    T_TRAIT_C = 374,
    T_METHOD_C = 375,
    T_FUNC_C = 376,
    T_COMMENT = 377,
    T_DOC_COMMENT = 378,
    T_OPEN_TAG = 379,
    T_OPEN_TAG_WITH_ECHO = 380,
    T_CLOSE_TAG = 381,
    T_WHITESPACE = 382,
    T_START_HEREDOC = 383,
    T_END_HEREDOC = 384,
    T_DOLLAR_OPEN_CURLY_BRACES = 385,
    T_CURLY_OPEN = 386,
    T_PAAMAYIM_NEKUDOTAYIM = 387,
    T_NAMESPACE = 388,
    T_NS_C = 389,
    T_NS_SEPARATOR = 390,
    T_ELLIPSIS = 391,
    T_ERROR = 392
  };
#endif
/* Tokens.  */
#define END 0
#define T_INCLUDE 258
#define T_INCLUDE_ONCE 259
#define T_EVAL 260
#define T_REQUIRE 261
#define T_REQUIRE_ONCE 262
#define T_LOGICAL_OR 263
#define T_LOGICAL_XOR 264
#define T_LOGICAL_AND 265
#define T_PRINT 266
#define T_YIELD 267
#define T_DOUBLE_ARROW 268
#define T_YIELD_FROM 269
#define T_PLUS_EQUAL 270
#define T_MINUS_EQUAL 271
#define T_MUL_EQUAL 272
#define T_DIV_EQUAL 273
#define T_CONCAT_EQUAL 274
#define T_MOD_EQUAL 275
#define T_AND_EQUAL 276
#define T_OR_EQUAL 277
#define T_XOR_EQUAL 278
#define T_SL_EQUAL 279
#define T_SR_EQUAL 280
#define T_POW_EQUAL 281
#define T_COALESCE 282
#define T_BOOLEAN_OR 283
#define T_BOOLEAN_AND 284
#define T_IS_EQUAL 285
#define T_IS_NOT_EQUAL 286
#define T_IS_IDENTICAL 287
#define T_IS_NOT_IDENTICAL 288
#define T_SPACESHIP 289
#define T_IS_SMALLER_OR_EQUAL 290
#define T_IS_GREATER_OR_EQUAL 291
#define T_SL 292
#define T_SR 293
#define T_INSTANCEOF 294
#define T_INC 295
#define T_DEC 296
#define T_INT_CAST 297
#define T_DOUBLE_CAST 298
#define T_STRING_CAST 299
#define T_ARRAY_CAST 300
#define T_OBJECT_CAST 301
#define T_BOOL_CAST 302
#define T_UNSET_CAST 303
#define T_POW 304
#define T_NEW 305
#define T_CLONE 306
#define T_NOELSE 307
#define T_ELSEIF 308
#define T_ELSE 309
#define T_ENDIF 310
#define T_STATIC 311
#define T_ABSTRACT 312
#define T_FINAL 313
#define T_PRIVATE 314
#define T_PROTECTED 315
#define T_PUBLIC 316
#define T_LNUMBER 317
#define T_DNUMBER 318
#define T_STRING 319
#define T_VARIABLE 320
#define T_INLINE_HTML 321
#define T_ENCAPSED_AND_WHITESPACE 322
#define T_CONSTANT_ENCAPSED_STRING 323
#define T_STRING_VARNAME 324
#define T_NUM_STRING 325
#define T_EXIT 326
#define T_IF 327
#define T_ECHO 328
#define T_DO 329
#define T_WHILE 330
#define T_ENDWHILE 331
#define T_FOR 332
#define T_ENDFOR 333
#define T_FOREACH 334
#define T_ENDFOREACH 335
#define T_DECLARE 336
#define T_ENDDECLARE 337
#define T_AS 338
#define T_SWITCH 339
#define T_ENDSWITCH 340
#define T_CASE 341
#define T_DEFAULT 342
#define T_BREAK 343
#define T_CONTINUE 344
#define T_GOTO 345
#define T_FUNCTION 346
#define T_CONST 347
#define T_RETURN 348
#define T_TRY 349
#define T_CATCH 350
#define T_FINALLY 351
#define T_THROW 352
#define T_USE 353
#define T_INSTEADOF 354
#define T_GLOBAL 355
#define T_VAR 356
#define T_UNSET 357
#define T_ISSET 358
#define T_EMPTY 359
#define T_HALT_COMPILER 360
#define T_CLASS 361
#define T_TRAIT 362
#define T_INTERFACE 363
#define T_EXTENDS 364
#define T_IMPLEMENTS 365
#define T_OBJECT_OPERATOR 366
#define T_LIST 367
#define T_ARRAY 368
#define T_CALLABLE 369
#define T_LINE 370
#define T_FILE 371
#define T_DIR 372
#define T_CLASS_C 373
#define T_TRAIT_C 374
#define T_METHOD_C 375
#define T_FUNC_C 376
#define T_COMMENT 377
#define T_DOC_COMMENT 378
#define T_OPEN_TAG 379
#define T_OPEN_TAG_WITH_ECHO 380
#define T_CLOSE_TAG 381
#define T_WHITESPACE 382
#define T_START_HEREDOC 383
#define T_END_HEREDOC 384
#define T_DOLLAR_OPEN_CURLY_BRACES 385
#define T_CURLY_OPEN 386
#define T_PAAMAYIM_NEKUDOTAYIM 387
#define T_NAMESPACE 388
#define T_NS_C 389
#define T_NS_SEPARATOR 390
#define T_ELLIPSIS 391
#define T_ERROR 392

/* Value type.  */



int zendparse (void);

#endif /* !YY_ZEND_MEDIA_ZAAK_C8E4533F_1124_4EF8_9AE0_BF67B87532EE_PROJECTS_PHP_SRC_ZEND_ZEND_LANGUAGE_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 443 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   7405

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  166
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  136
/* YYNRULES -- Number of rules.  */
#define YYNRULES  493
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  918

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   392

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    54,   164,     2,   165,    53,    36,     2,
     157,   158,    51,    48,     8,    49,    50,    52,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    30,   159,
      42,    16,    44,    29,    66,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    68,     2,   163,    35,     2,   162,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   160,    34,   161,    56,     2,     2,     2,
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
       5,     6,     7,     9,    10,    11,    12,    13,    14,    15,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    31,    32,    33,    37,    38,    39,    40,    41,
      43,    45,    46,    47,    55,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    67,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   265,   265,   269,   269,   269,   269,   269,   269,   269,
     269,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   271,   271,   271,   271,   271,   271,   271,
     271,   271,   271,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   273,   274,   274,   274,   274,   274,   274,
     274,   274,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   279,   280,   280,   280,   280,   280,   280,   284,   285,
     293,   294,   298,   299,   303,   304,   305,   309,   310,   311,
     312,   313,   314,   318,   321,   321,   324,   324,   327,   328,
     329,   330,   331,   335,   336,   340,   342,   347,   349,   354,
     356,   361,   363,   368,   370,   375,   376,   380,   382,   387,
     388,   392,   393,   397,   400,   405,   406,   407,   408,   409,
     410,   417,   418,   419,   420,   422,   424,   426,   428,   429,
     430,   431,   432,   433,   434,   435,   436,   437,   439,   443,
     442,   446,   447,   449,   450,   451,   456,   457,   462,   463,
     467,   468,   472,   476,   483,   484,   488,   489,   493,   493,
     496,   496,   502,   503,   507,   508,   512,   512,   518,   518,
     524,   525,   529,   530,   534,   535,   539,   540,   541,   545,
     546,   550,   551,   555,   556,   560,   561,   562,   563,   567,
     568,   570,   575,   576,   581,   582,   587,   590,   596,   597,
     602,   605,   611,   612,   618,   619,   624,   626,   631,   633,
     639,   640,   644,   645,   646,   650,   651,   655,   656,   660,
     662,   667,   668,   672,   673,   677,   683,   684,   688,   689,
     694,   697,   702,   704,   706,   708,   715,   716,   720,   721,
     722,   726,   728,   733,   734,   738,   743,   745,   747,   749,
     754,   756,   760,   765,   766,   770,   771,   775,   776,   781,
     782,   787,   788,   789,   790,   791,   792,   796,   797,   801,
     803,   808,   809,   813,   817,   821,   822,   825,   829,   830,
     834,   835,   839,   839,   849,   851,   856,   858,   860,   862,
     863,   865,   867,   869,   871,   873,   875,   877,   879,   881,
     883,   885,   887,   888,   889,   890,   891,   893,   895,   897,
     899,   901,   902,   903,   904,   905,   906,   907,   908,   909,
     910,   911,   912,   913,   914,   915,   916,   917,   919,   921,
     923,   925,   927,   929,   931,   933,   935,   937,   938,   939,
     941,   943,   945,   946,   947,   948,   949,   950,   951,   952,
     953,   954,   955,   956,   957,   958,   959,   960,   961,   962,
     967,   975,   979,   983,   984,   988,   989,   993,   994,   998,
     999,  1003,  1005,  1007,  1009,  1014,  1017,  1021,  1022,  1026,
    1027,  1032,  1033,  1034,  1039,  1040,  1045,  1046,  1047,  1051,
    1052,  1053,  1054,  1055,  1056,  1057,  1058,  1059,  1060,  1061,
    1062,  1064,  1065,  1066,  1067,  1071,  1072,  1074,  1078,  1080,
    1084,  1085,  1089,  1090,  1094,  1098,  1099,  1100,  1104,  1105,
    1106,  1110,  1112,  1114,  1116,  1118,  1120,  1124,  1126,  1128,
    1133,  1134,  1135,  1139,  1141,  1146,  1148,  1150,  1152,  1154,
    1156,  1161,  1162,  1163,  1167,  1168,  1169,  1173,  1175,  1180,
    1181,  1182,  1187,  1188,  1192,  1194,  1199,  1201,  1202,  1204,
    1209,  1211,  1213,  1215,  1220,  1222,  1225,  1228,  1230,  1232,
    1235,  1239,  1240,  1241,  1246,  1247,  1248,  1250,  1252,  1254,
    1256,  1261,  1262,  1267
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined", "\"include (T_INCLUDE)\"",
  "\"include_once (T_INCLUDE_ONCE)\"", "\"eval (T_EVAL)\"",
  "\"require (T_REQUIRE)\"", "\"require_once (T_REQUIRE_ONCE)\"", "','",
  "\"or (T_LOGICAL_OR)\"", "\"xor (T_LOGICAL_XOR)\"",
  "\"and (T_LOGICAL_AND)\"", "\"print (T_PRINT)\"", "\"yield (T_YIELD)\"",
  "\"=> (T_DOUBLE_ARROW)\"", "\"yield from (T_YIELD_FROM)\"", "'='",
  "\"+= (T_PLUS_EQUAL)\"", "\"-= (T_MINUS_EQUAL)\"",
  "\"*= (T_MUL_EQUAL)\"", "\"/= (T_DIV_EQUAL)\"",
  "\".= (T_CONCAT_EQUAL)\"", "\"%= (T_MOD_EQUAL)\"",
  "\"&= (T_AND_EQUAL)\"", "\"|= (T_OR_EQUAL)\"", "\"^= (T_XOR_EQUAL)\"",
  "\"<<= (T_SL_EQUAL)\"", "\">>= (T_SR_EQUAL)\"", "\"**= (T_POW_EQUAL)\"",
  "'?'", "':'", "\"?? (T_COALESCE)\"", "\"|| (T_BOOLEAN_OR)\"",
  "\"&& (T_BOOLEAN_AND)\"", "'|'", "'^'", "'&'", "\"== (T_IS_EQUAL)\"",
  "\"!= (T_IS_NOT_EQUAL)\"", "\"=== (T_IS_IDENTICAL)\"",
  "\"!== (T_IS_NOT_IDENTICAL)\"", "\"<=> (T_SPACESHIP)\"", "'<'",
  "\"<= (T_IS_SMALLER_OR_EQUAL)\"", "'>'",
  "\">= (T_IS_GREATER_OR_EQUAL)\"", "\"<< (T_SL)\"", "\">> (T_SR)\"",
  "'+'", "'-'", "'.'", "'*'", "'/'", "'%'", "'!'",
  "\"instanceof (T_INSTANCEOF)\"", "'~'", "\"++ (T_INC)\"",
  "\"-- (T_DEC)\"", "\"(int) (T_INT_CAST)\"",
  "\"(double) (T_DOUBLE_CAST)\"", "\"(string) (T_STRING_CAST)\"",
  "\"(array) (T_ARRAY_CAST)\"", "\"(object) (T_OBJECT_CAST)\"",
  "\"(bool) (T_BOOL_CAST)\"", "\"(unset) (T_UNSET_CAST)\"", "'@'",
  "\"** (T_POW)\"", "'['", "\"new (T_NEW)\"", "\"clone (T_CLONE)\"",
  "T_NOELSE", "\"elseif (T_ELSEIF)\"", "\"else (T_ELSE)\"",
  "\"endif (T_ENDIF)\"", "\"static (T_STATIC)\"",
  "\"abstract (T_ABSTRACT)\"", "\"final (T_FINAL)\"",
  "\"private (T_PRIVATE)\"", "\"protected (T_PROTECTED)\"",
  "\"public (T_PUBLIC)\"", "\"integer number (T_LNUMBER)\"",
  "\"floating-point number (T_DNUMBER)\"", "\"identifier (T_STRING)\"",
  "\"variable (T_VARIABLE)\"", "T_INLINE_HTML",
  "\"quoted-string and whitespace (T_ENCAPSED_AND_WHITESPACE)\"",
  "\"quoted-string (T_CONSTANT_ENCAPSED_STRING)\"",
  "\"variable name (T_STRING_VARNAME)\"", "\"number (T_NUM_STRING)\"",
  "\"exit (T_EXIT)\"", "\"if (T_IF)\"", "\"echo (T_ECHO)\"",
  "\"do (T_DO)\"", "\"while (T_WHILE)\"", "\"endwhile (T_ENDWHILE)\"",
  "\"for (T_FOR)\"", "\"endfor (T_ENDFOR)\"", "\"foreach (T_FOREACH)\"",
  "\"endforeach (T_ENDFOREACH)\"", "\"declare (T_DECLARE)\"",
  "\"enddeclare (T_ENDDECLARE)\"", "\"as (T_AS)\"",
  "\"switch (T_SWITCH)\"", "\"endswitch (T_ENDSWITCH)\"",
  "\"case (T_CASE)\"", "\"default (T_DEFAULT)\"", "\"break (T_BREAK)\"",
  "\"continue (T_CONTINUE)\"", "\"goto (T_GOTO)\"",
  "\"function (T_FUNCTION)\"", "\"const (T_CONST)\"",
  "\"return (T_RETURN)\"", "\"try (T_TRY)\"", "\"catch (T_CATCH)\"",
  "\"finally (T_FINALLY)\"", "\"throw (T_THROW)\"", "\"use (T_USE)\"",
  "\"insteadof (T_INSTEADOF)\"", "\"global (T_GLOBAL)\"",
  "\"var (T_VAR)\"", "\"unset (T_UNSET)\"", "\"isset (T_ISSET)\"",
  "\"empty (T_EMPTY)\"", "\"__halt_compiler (T_HALT_COMPILER)\"",
  "\"class (T_CLASS)\"", "\"trait (T_TRAIT)\"",
  "\"interface (T_INTERFACE)\"", "\"extends (T_EXTENDS)\"",
  "\"implements (T_IMPLEMENTS)\"", "\"-> (T_OBJECT_OPERATOR)\"",
  "\"list (T_LIST)\"", "\"array (T_ARRAY)\"", "\"callable (T_CALLABLE)\"",
  "\"__LINE__ (T_LINE)\"", "\"__FILE__ (T_FILE)\"", "\"__DIR__ (T_DIR)\"",
  "\"__CLASS__ (T_CLASS_C)\"", "\"__TRAIT__ (T_TRAIT_C)\"",
  "\"__METHOD__ (T_METHOD_C)\"", "\"__FUNCTION__ (T_FUNC_C)\"",
  "\"comment (T_COMMENT)\"", "\"doc comment (T_DOC_COMMENT)\"",
  "\"open tag (T_OPEN_TAG)\"",
  "\"open tag with echo (T_OPEN_TAG_WITH_ECHO)\"",
  "\"close tag (T_CLOSE_TAG)\"", "\"whitespace (T_WHITESPACE)\"",
  "\"heredoc start (T_START_HEREDOC)\"", "\"heredoc end (T_END_HEREDOC)\"",
  "\"${ (T_DOLLAR_OPEN_CURLY_BRACES)\"", "\"{$ (T_CURLY_OPEN)\"",
  "\":: (T_PAAMAYIM_NEKUDOTAYIM)\"", "\"namespace (T_NAMESPACE)\"",
  "\"__NAMESPACE__ (T_NS_C)\"", "\"\\\\ (T_NS_SEPARATOR)\"",
  "\"... (T_ELLIPSIS)\"", "T_ERROR", "'('", "')'", "';'", "'{'", "'}'",
  "'`'", "']'", "'\"'", "'$'", "$accept", "start",
  "reserved_non_modifiers", "semi_reserved", "identifier",
  "top_statement_list", "namespace_name", "name", "top_statement", "$@1",
  "$@2", "use_type", "group_use_declaration",
  "mixed_group_use_declaration", "inline_use_declarations",
  "unprefixed_use_declarations", "use_declarations",
  "inline_use_declaration", "unprefixed_use_declaration",
  "use_declaration", "const_list", "inner_statement_list",
  "inner_statement", "statement", "$@3", "catch_list", "finally_statement",
  "unset_variables", "unset_variable", "function_declaration_statement",
  "is_reference", "is_variadic", "class_declaration_statement", "@4", "@5",
  "class_modifiers", "class_modifier", "trait_declaration_statement", "@6",
  "interface_declaration_statement", "@7", "extends_from",
  "interface_extends_list", "implements_list", "foreach_variable",
  "for_statement", "foreach_statement", "declare_statement",
  "switch_case_list", "case_list", "case_separator", "while_statement",
  "if_stmt_without_else", "if_stmt", "alt_if_stmt_without_else",
  "alt_if_stmt", "parameter_list", "non_empty_parameter_list", "parameter",
  "optional_type", "type", "return_type", "argument_list",
  "non_empty_argument_list", "argument", "global_var_list", "global_var",
  "static_var_list", "static_var", "class_statement_list",
  "class_statement", "name_list", "trait_adaptations",
  "trait_adaptation_list", "trait_adaptation", "trait_precedence",
  "trait_alias", "trait_method_reference",
  "absolute_trait_method_reference", "method_body", "variable_modifiers",
  "method_modifiers", "non_empty_member_modifiers", "member_modifier",
  "property_list", "property", "class_const_list", "class_const_decl",
  "const_decl", "echo_expr_list", "echo_expr", "for_exprs",
  "non_empty_for_exprs", "anonymous_class", "@8", "new_expr",
  "expr_without_variable", "function", "backup_doc_comment", "returns_ref",
  "lexical_vars", "lexical_var_list", "lexical_var", "function_call",
  "class_name", "class_name_reference", "exit_expr", "backticks_expr",
  "ctor_arguments", "dereferencable_scalar", "scalar", "constant",
  "possible_comma", "expr", "optional_expr", "variable_class_name",
  "dereferencable", "callable_expr", "callable_variable", "variable",
  "simple_variable", "static_member", "new_variable", "member_name",
  "property_name", "assignment_list", "assignment_list_element",
  "array_pair_list", "non_empty_array_pair_list", "array_pair",
  "encaps_list", "encaps_var", "encaps_var_offset",
  "internal_functions_in_yacc", "isset_variables", "isset_variable", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,    44,   263,
     264,   265,   266,   267,   268,   269,    61,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,    63,
      58,   282,   283,   284,   124,    94,    38,   285,   286,   287,
     288,   289,    60,   290,    62,   291,   292,   293,    43,    45,
      46,    42,    47,    37,    33,   294,   126,   295,   296,   297,
     298,   299,   300,   301,   302,   303,    64,   304,    91,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,    40,    41,    59,
     123,   125,    96,    93,    34,    36
};
# endif

#define YYPACT_NINF -713

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-713)))

#define YYTABLE_NINF -470

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-470)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -713,    89,  1189,  -713,  5538,  5538,   -44,  5538,  5538,  5538,
    5538,  5538,  5538,  5538,  5538,  5538,   894,   894,  5538,  5538,
    5538,  5538,  5538,  5538,  5538,  5538,  4866,   257,  5538,    19,
    -713,  -713,  -713,  -713,   100,  -713,  -713,  -713,   -22,    -7,
    5538,  4591,    18,    75,   165,   171,   173,  5538,  5538,   104,
    -713,   145,  5538,   -15,  5538,   240,   -12,   180,   182,   185,
     192,  -713,  -713,  -713,   196,   198,  -713,  -713,  -713,  -713,
    -713,  -713,  -713,   432,    38,  -713,   278,  5538,  -713,  -713,
       6,   231,   -19,   -16,   -35,  -713,  -713,  -713,  -713,    57,
    -713,  -713,  -713,    52,  -713,   286,  -713,  -713,  -713,   147,
    -713,   215,   241,  -713,   307,  6543,   232,    29,   239,   260,
    7112,  -713,  -713,  -713,   309,  -713,   274,   147,  7338,  7338,
    5538,  7338,  7338,  1174,  6358,  1174,   365,   365,    39,   365,
    -713,  5538,   277,   307,    33,    33,   365,   365,   365,   365,
     365,   365,   365,   365,   894,  7244,   311,   429,  -713,  -713,
    -713,  -713,   289,   239,  -713,   256,  -713,   460,    58,  -713,
     147,  -713,  5538,  -713,  5538,    60,  -713,  7338,   401,  5538,
    5538,  5538,   145,  5538,  7338,   324,   342,   351,   483,    65,
    -713,   360,  -713,  6590,  -713,  -713,   278,   -18,   235,   363,
      70,  -713,  -713,    71,  -713,  -713,   894,  5538,  5538,   372,
     449,   459,   475,   576,  4866,    51,   389,  -713,  4978,   894,
     462,  -713,   278,   -54,   402,   -16,  6637,  1352,   329,   383,
     385,   329,   227,  5538,  -713,   485,  4754,  -713,  -713,  -713,
     410,  4591,   412,   543,   416,  -713,     4,  1515,  5538,  5538,
    5538,  5538,  5090,  5538,  5538,  5538,  5538,  5538,  5538,  5538,
    5538,  5538,  5538,  5538,  5538,  5538,  5538,  5538,  5538,  5538,
    5538,  5538,  5538,  5538,  5538,  5538,   355,  5538,  -713,  1515,
    5538,    12,  5538,  -713,  5202,  5538,  5538,  5538,  5538,  5538,
    5538,  5538,  5538,  5538,  5538,  5538,  5538,  -713,  -713,   420,
    6684,  5538,  6731,    36,  5314,  -713,  4866,  -713,   239,   -12,
    -713,  -713,  5538,    12,   -12,  5538,  5538,   499,  -713,   427,
     433,  6778,  5538,  -713,   430,  6825,   434,   587,  7338,  7150,
      49,  6872,  -713,  -713,  -713,  5538,   145,  -713,  -713,  1657,
    -713,   219,  -713,   518,    -9,   278,   252,   443,    74,  -713,
     246,  -713,   -12,  -713,   115,  -713,   129,  7338,   132,  -713,
    6919,   450,   477,  -713,   487,   463,   134,   135,  -713,   458,
      26,   534,  -713,  -713,     7,  5917,   464,  -713,  -713,  -713,
     -16,  -713,   461,  -713,   248,   466,  -713,  -713,  -713,  -713,
    -713,  -713,  -713,  -713,  -713,  5964,  -713,  5538,  -713,   141,
    -713,  7338,   536,  5538,  -713,  5538,  -713,  -713,   467,   348,
    -713,  -713,  -713,  -713,  -713,  -713,  -713,  -713,  -713,  -713,
    -713,  -713,  -713,  -713,  -713,  -713,  -713,  -713,  -713,  -713,
    -713,  -713,  -713,  -713,  -713,  -713,  -713,  -713,  -713,  -713,
    -713,  -713,  -713,  -713,  -713,  -713,  -713,  -713,  -713,  -713,
    -713,  -713,  -713,  -713,  -713,  -713,  -713,  -713,  -713,  -713,
    -713,  -713,  -713,  -713,  -713,  -713,  -713,  -713,  -713,  -713,
    -713,  -713,  -713,  -713,  -713,  -713,  -713,  -713,  -713,  -713,
    -713,  -713,  -713,  -713,  -713,  5538,  -713,  -713,   472,   473,
     239,   470,  6212,  1504,  1174,  5538,  7291,  1337,  1803,  1966,
    2129,  1645,  2288,  2451,  2451,  2451,  2451,  2451,  2609,  2609,
    2609,  2609,   834,   834,   317,   317,   317,    39,    39,    39,
    -713,   365,   472,   473,   239,   476,  -713,  5538,  -713,   239,
    6012,   894,  1174,  1174,  1174,  1174,  1174,  1174,  1174,  1174,
    1174,  1174,  1174,  1174,  1174,  -713,  1174,   478,   894,  7338,
    -713,   477,  -713,   479,  -713,  -713,  6059,  7338,  -713,   348,
    -713,  3776,  -713,  5538,  3939,  5538,  5538,   409,  -713,    30,
    7338,  -713,  -713,    25,  -713,    16,   340,    28,  -713,  -713,
     278,   370,  -713,  -713,   894,   481,  5538,  -713,  -713,  -713,
     281,   507,   488,   281,  -713,   576,   576,   622,  -713,  -713,
    -713,  -713,   482,  -713,  5538,  -713,  -713,  -713,  -713,   863,
     489,  -713,  7338,  5426,  -713,   477,  6966,  7013,  1820,   348,
    -713,  -713,  -713,   491,   633,  -713,   614,  -713,  6107,  -713,
    -713,  1337,  5538,  -713,  -713,  6154,  -713,  -713,    33,    43,
     507,  -713,  -713,   494,  -713,  -713,  7060,  -713,  -713,  -713,
     496,  7338,   894,   500,    21,    44,  4102,   497,   502,  -713,
    -713,     3,    16,   278,    34,  -713,  -713,    45,   278,  -713,
    -713,  -713,  -713,   281,  -713,  -713,  -713,   645,   498,   146,
    -713,  5538,  -713,   415,  1026,  -713,   503,  -713,   507,  4591,
     636,   508,   511,   553,   438,  -713,   519,  -713,  1337,  -713,
    -713,   553,  3613,   517,  1983,  5538,    69,   576,   409,  4265,
    -713,  -713,  -713,  -713,   408,  -713,    42,   520,   522,  -713,
      48,  -713,    16,  -713,   278,    53,  -713,   645,   523,   268,
     281,  -713,  -713,  1174,   524,  -713,  -713,  -713,  -713,  -713,
    -713,   648,   529,   648,  -713,  -713,   595,   527,   648,  -713,
     521,   539,   149,   541,  -713,  -713,  -713,  2146,   446,   535,
    5538,    41,   251,  -713,   281,  -713,  -713,  -713,    55,   278,
    -713,  -713,  -713,  -713,  -713,  -713,  -713,  -713,   281,  -713,
    -713,  -713,   616,   223,   829,  -713,  -713,   411,  -713,   542,
    3613,   438,  -713,    68,  -713,   687,  -713,  -713,  -713,  4428,
    -713,  4265,  2309,   545,   546,  -713,  6496,  -713,  -713,  -713,
    -713,   626,  2472,  -713,  -713,   685,    62,   690,    77,  -713,
    6226,   147,  -713,  -713,  -713,  -713,   551,   628,  -713,   150,
    -713,   556,  5538,   732,   557,  -713,  -713,  -713,  -713,   554,
    -713,  -713,  -713,  3613,   560,  -713,  -713,  -713,  5646,  -713,
    5538,  -713,   616,  -713,   705,    78,  -713,  6226,   741,  -713,
    -713,    68,  -713,  -713,  7338,  -713,  -713,  2635,  -713,  3613,
     562,   621,   274,  -713,  -713,   575,  5784,  -713,   568,   570,
     634,   617,  7338,  -713,  5538,  6226,  -713,   580,  -713,  2798,
    -713,  2961,  3124,   581,  -713,  6226,  -713,  -713,  -713,  -713,
    6364,   281,  -713,  7338,  -713,   348,  -713,  -713,  -713,  -713,
    3287,  -713,  -713,  -713,  6226,   645,  -713,   584,  -713,  -713,
     648,  -713,   345,  -713,  -713,  -713,  3450,  -713
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      81,     0,     2,     1,     0,     0,     0,     0,     0,     0,
     365,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   462,     0,     0,   385,
     174,   175,   399,   400,    82,   440,   144,   398,   389,     0,
       0,     0,     0,     0,     0,     0,     0,   422,   422,     0,
     371,     0,   422,     0,     0,     0,     0,     0,     0,     0,
       0,   170,   176,   178,     0,     0,   401,   402,   403,   408,
     404,   405,   406,     0,    96,   407,     0,     0,   151,   124,
     391,     0,     0,    84,   415,    80,    87,    88,    89,     0,
     172,    90,    91,   208,   132,     0,   133,   348,   421,   373,
     436,     0,   413,   362,   414,     0,     0,   424,     0,   437,
     420,   431,   438,   352,   385,    82,     0,   373,   486,   487,
       0,   489,   490,   364,   366,   368,   333,   334,   335,   336,
     385,     0,   427,     0,   313,   315,   353,   354,   355,   356,
     357,   358,   359,   361,     0,   467,     0,   418,   465,   292,
     386,   295,   387,   394,   445,   388,   299,   238,     0,   237,
     373,   155,   422,   360,     0,     0,   286,   287,     0,     0,
     288,     0,     0,     0,   423,     0,     0,     0,     0,     0,
     122,     0,   124,     0,   103,   104,     0,   117,     0,     0,
       0,   119,   114,     0,   234,   235,     0,     0,     0,     0,
       0,     0,     0,   461,   462,   474,     0,   410,     0,     0,
       0,   472,     0,    94,     0,    86,     0,     0,   392,     0,
     393,     0,     0,     0,   442,     0,     0,   381,   168,   173,
       0,     0,     0,     0,     0,   374,     0,     0,   422,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   145,     0,
     422,     0,     0,   384,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   312,   314,     0,
       0,     0,     0,   425,     0,   397,   419,   463,   394,     0,
     395,   294,   422,     0,     0,     0,     0,     0,   142,     0,
       0,     0,     0,   143,     0,     0,     0,   289,   291,     0,
       0,     0,   138,   139,   154,     0,     0,   102,   140,     0,
     153,   117,   120,     0,     0,     0,   117,     0,     0,    98,
       0,   100,     0,   141,     0,   160,   425,   493,     0,   491,
       0,     0,   180,   372,   182,     0,   425,     0,   458,     0,
       0,     0,   409,   473,     0,     0,   425,   471,   412,   470,
      85,    93,     0,    81,   347,     0,   131,   123,   125,   126,
     127,   128,   129,   363,   411,     0,    83,     0,   227,     0,
     229,   231,     0,     0,   209,     0,   124,   212,     0,   220,
       3,     4,     5,     6,     7,     8,     9,    10,    46,    47,
      11,    12,    13,    16,    17,    18,    72,    73,    74,    75,
      76,    77,    78,    14,    15,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    49,    50,    51,    52,
      53,    41,    42,    43,    44,    45,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    70,    61,    59,
      60,    56,    57,    48,    54,    55,    66,    67,    68,    62,
      63,    65,    64,    58,    69,     0,    71,    79,   416,   443,
       0,     0,   318,   320,   319,     0,     0,   351,   316,   317,
     321,   323,   322,   339,   340,   337,   338,   345,   341,   342,
     343,   344,   331,   332,   325,   326,   324,   327,   329,   330,
     346,   328,   417,   444,     0,     0,   454,     0,   456,   439,
       0,     0,   297,   300,   301,   302,   304,   305,   306,   307,
     308,   309,   310,   311,   303,   488,   367,   426,     0,   466,
     464,   180,   449,     0,   448,   450,     0,   239,   236,   220,
     390,     0,   285,     0,     0,   288,     0,     0,   149,     0,
     372,   121,   156,     0,   118,     0,   117,     0,    99,   101,
       0,   117,   113,   233,     0,     0,     0,   484,   485,    92,
       0,   184,     0,     0,   372,   461,   461,     0,   396,   481,
     483,   482,     0,   476,     0,   478,   477,   480,    81,     0,
       0,   441,   232,     0,   228,   180,     0,     0,     0,   220,
     222,   223,   224,     0,   214,   216,   164,   221,     0,   382,
     433,   350,     0,   383,   432,     0,   435,   434,   298,   425,
     184,   446,   447,     0,   124,   206,     0,   124,   204,   134,
       0,   290,     0,     0,     0,   425,     0,   199,   199,   137,
     284,   158,     0,     0,     0,   110,   115,     0,     0,   161,
     146,   492,   181,     0,   372,   241,   246,   183,     0,     0,
     457,     0,   475,     0,     0,    97,     0,   230,   184,     0,
       0,     0,     0,   375,   220,   165,   166,   452,   349,   455,
     372,   375,   210,     0,     0,   288,   425,   461,     0,     0,
     124,   193,   150,   199,     0,   199,     0,     0,     0,   152,
       0,   116,     0,   107,     0,     0,   112,   185,     0,   267,
       0,   241,   460,   296,     0,    95,   130,   372,   207,   124,
     213,   225,     0,   225,   217,   167,     0,     0,   225,   135,
       0,     0,     0,     0,   124,   191,   147,     0,     0,     0,
       0,     0,     0,   195,     0,   124,   108,   109,     0,     0,
     105,   241,   274,   275,   276,   273,   272,   271,     0,   266,
     177,   240,     0,     0,   268,   269,   247,   267,   479,     0,
     211,     0,   372,     0,   372,   218,   241,   372,   205,     0,
     188,     0,     0,     0,     0,   197,     0,   202,   203,   124,
     196,     0,     0,   106,   111,   267,     0,   372,     0,   278,
       0,   373,   270,   179,   241,   226,     0,     0,   379,     0,
     378,     0,     0,   267,     0,   124,   189,   136,   148,     0,
     194,   198,   124,   201,     0,   159,   171,   248,     0,   244,
       0,   279,     0,   242,     0,     0,   282,     0,   267,   124,
     380,     0,   376,   124,   219,   293,   124,     0,   192,   200,
       0,    82,    58,   249,   260,     0,     0,   251,     0,     0,
       0,   261,   372,   277,     0,     0,   243,     0,   169,     0,
     377,     0,     0,     0,   124,     0,   250,   252,   253,   254,
       0,     0,   280,   372,   281,   220,   163,   369,   370,   190,
       0,   262,   256,   257,   259,   255,   283,     0,   157,   258,
     225,   372,     0,   263,   124,   245,     0,   264
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -713,  -713,  -147,  -713,  -220,  -330,   -21,     5,  -713,  -713,
    -713,   689,  -713,  -713,    94,    40,   559,    37,  -155,   413,
     585,  -101,  -713,    35,  -713,  -713,  -713,  -713,   184,    -1,
    -713,  -713,     1,  -713,  -713,  -713,   677,    14,  -713,    27,
    -713,  -461,  -713,  -539,    72,  -713,   -24,  -713,  -713,  -338,
     -27,  -713,  -713,  -713,  -713,  -713,  -516,  -713,    88,  -713,
      -5,  -697,   -78,  -713,   174,  -713,   439,  -713,   480,  -654,
    -713,  -594,  -713,  -713,   -92,  -713,  -713,  -713,  -713,  -713,
    -713,  -713,  -713,  -712,  -713,   -60,  -713,   -91,   465,  -713,
     486,  -509,  -713,  -713,  -713,  -713,  -713,    -2,  -364,  -115,
      97,  -713,   -66,  -713,    23,   528,  -713,  -713,   495,    22,
    -713,   194,  -713,     0,    50,  -713,  -713,  -713,  -713,   218,
      32,  -713,  -713,   526,   493,  -521,   203,   593,  -713,   505,
     484,   305,  -713,  -713,  -713,   230
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   476,   477,   844,     2,    83,    84,    85,   372,
     214,   653,   337,   189,   654,   715,   190,   655,   191,   192,
     179,   217,   377,   378,   646,   651,   709,   344,   345,   379,
     686,   736,   380,   392,   200,    89,    90,   381,   201,   382,
     202,   581,   584,   664,   644,   827,   746,   702,   649,   704,
     799,   639,    93,    94,    95,    96,   613,   614,   615,   616,
     617,   782,   300,   389,   390,   193,   194,   158,   159,   719,
     771,   667,   839,   866,   867,   868,   869,   870,   871,   915,
     772,   773,   774,   775,   808,   809,   845,   846,   180,   165,
     166,   316,   317,   151,   298,    97,    98,   117,   582,   236,
     733,   819,   820,   100,   101,   153,   163,   219,   301,   102,
     103,   104,   297,   105,   175,   106,   107,   108,   109,   110,
     111,   112,   155,   480,   519,   357,   358,   146,   147,   148,
     210,   211,   592,   113,   348,   349
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      99,    87,   289,    88,   118,   119,   227,   121,   122,   123,
     124,   125,   126,   127,   128,   129,    91,   478,   136,   137,
     138,   139,   140,   141,   142,   143,   145,   160,   156,    92,
     273,   332,   150,   633,   187,   698,   784,    86,   132,   132,
     167,   787,   712,   599,  -469,   309,   640,   174,   174,   512,
     152,  -468,   174,   213,   183,   215,   712,   326,  -186,   154,
     647,   759,   812,   759,   669,    35,   307,   777,   312,   717,
     720,   797,    35,   326,   386,   594,   168,   216,   340,   342,
     630,   329,   340,  -187,   333,   842,   875,   398,   195,     3,
     205,   690,   218,   682,   266,   516,    35,   270,   176,   115,
     225,  -425,   181,   157,   817,   371,   267,   805,   386,   589,
     590,   386,   160,   120,   224,   591,  -386,   707,   708,   360,
     290,   115,   226,   574,   230,   231,   184,   185,   386,    50,
     161,   292,   823,    30,    31,   162,   334,  -162,   225,   727,
     576,   223,  -459,   586,   678,   182,    82,   750,   751,   603,
     164,   565,   818,    82,   586,   208,   209,   586,   851,   271,
     848,   399,   174,  -425,   311,   331,   132,   336,   595,   315,
     318,   319,   517,   321,   806,   169,   742,    82,   904,   699,
     332,   361,   228,   235,  -425,   652,   741,   177,   658,   272,
     648,   370,   212,  -425,  -469,   713,   650,   347,   350,  -469,
     798,  -468,  -186,   753,   145,   714,  -468,   558,   365,   756,
     133,   133,   310,   911,   760,    99,   803,   308,   132,   313,
     668,   837,   838,   385,   327,   132,   391,  -187,   178,   341,
     343,   132,   170,   569,   134,   135,   843,   876,   174,   482,
     483,   484,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   394,   511,   674,   479,
     174,   150,   520,   575,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,  -162,   481,   152,
     577,   536,  -459,   587,   539,   608,   145,   905,   154,   604,
     718,   513,   174,   518,   722,   546,   547,   790,   852,  -427,
     706,   205,   167,   367,   566,   205,  -426,   221,   115,   571,
     515,   333,   171,   115,   302,   560,   737,    99,   172,   115,
     173,   542,   130,    50,   810,   518,   545,   196,   133,   197,
     115,    35,   198,   762,   763,   764,   765,   766,   767,   199,
     184,   185,   543,   203,   333,   204,   750,   751,   232,   233,
     234,   115,   293,   779,   115,   748,   237,   752,   263,   264,
     265,  -427,   266,   563,   195,   238,   208,   209,  -426,   907,
     208,   209,   149,   269,   267,   768,   303,   602,   769,   335,
     133,   384,  -427,   606,   186,   607,   226,   133,  -430,  -426,
     570,  -427,   619,   133,   612,  -429,   567,   304,  -426,   116,
     656,    76,   800,   205,   346,   332,   305,  -428,   816,    50,
     821,   356,    82,   824,   239,   240,   241,   366,   212,   770,
     130,   115,   267,   116,  -430,    76,   623,   296,   115,    35,
     299,   626,   333,   841,   242,   642,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   205,
     266,   367,   333,   205,   295,   618,   306,    26,   208,   209,
     610,   611,   267,   322,   130,   621,   762,   763,   764,   765,
     766,   767,   115,    35,   657,   314,    37,   656,   711,   325,
     116,   323,    76,   716,   913,   914,  -215,   116,   892,    76,
     324,   363,   749,   750,   751,   369,   205,   625,   206,   328,
      82,   115,   339,   363,   225,   369,   363,   369,   768,   906,
     351,   769,   352,   692,   208,   209,   694,   362,   208,   209,
     643,    65,   353,   132,   571,   383,   205,   912,   367,   571,
     794,   750,   751,   636,   612,   318,   641,   656,   354,   716,
     132,   116,   373,    76,   220,   222,   131,   393,   386,   395,
     610,   611,   813,   396,    82,   397,   347,   399,   724,   132,
     207,   208,   209,   157,   549,   662,   635,   553,   666,   638,
     116,   550,    76,   555,   673,   556,   132,    99,    87,   747,
      88,   564,   568,   391,   804,   580,    99,   132,   132,   579,
     368,   208,   209,    91,   612,   583,   588,   593,   864,   605,
     585,   598,   688,   600,   609,   597,    92,   877,   780,  -451,
    -453,   571,   571,   620,    86,  -429,   663,   571,   671,   624,
     660,   684,   631,   792,    26,   672,   864,   676,   665,   683,
     685,   130,   691,   720,   802,   695,   703,   697,   721,   115,
      35,   705,   726,    37,   132,   901,   729,   730,   666,   731,
     732,   723,    99,    87,   735,    88,   739,   754,   781,   785,
     788,   701,   755,   761,   909,   778,   783,   786,    91,   612,
      99,   571,    99,   571,   795,   318,   847,   789,   833,   791,
     807,    92,   814,   822,   830,   831,   840,   355,    65,    86,
     834,   849,   850,   858,   728,   133,   853,   856,   860,   132,
     132,   874,   884,   -78,   857,   776,   885,   888,   116,   889,
      76,   859,   133,   131,   745,   891,   890,   895,   571,   628,
     899,    82,   910,   903,   188,    99,   710,   338,   879,   757,
     796,   133,   881,   572,   758,   882,   629,   320,   659,   801,
     762,   763,   764,   765,   766,   767,   229,   828,   133,   832,
     743,   811,   734,   666,   887,   645,   815,   677,    99,   133,
     133,   573,   873,   900,   894,   880,   612,   548,   738,   670,
      99,   561,   346,   541,   510,   514,   544,   359,   552,     0,
      99,   540,   768,   356,   356,   769,   661,   762,   763,   764,
     765,   766,   767,   916,     0,     0,   762,   763,   764,   765,
     766,   767,   854,     0,   826,     0,   745,     0,     0,     0,
       0,    99,     0,     0,     0,     0,   133,     0,     0,     0,
     872,     0,     0,   865,     0,     0,   836,     0,     0,   768,
       0,     0,   769,     0,     0,    99,     0,    99,   768,     0,
     696,   769,     0,     0,     0,     0,     4,     5,     6,     7,
       8,   865,     0,     0,   893,     9,    10,    99,    11,    99,
      99,     0,   260,   261,   262,   263,   264,   265,     0,   266,
       0,   133,   133,   855,     0,     0,   666,     0,    99,     0,
     612,   267,   878,     0,   762,   763,   764,   765,   766,   767,
       0,    12,    13,  -265,    99,   356,   645,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,     0,     0,     0,     0,    29,    30,
      31,     0,     0,     0,    32,    33,    34,    35,    36,     0,
      37,     0,     0,    38,    39,    40,    41,    42,     0,    43,
       0,    44,    26,    45,     0,     0,    46,     0,     0,   130,
      47,    48,    49,    50,    51,    52,    53,   115,    35,    54,
      55,    37,    56,     0,    57,    58,    59,    60,    61,    62,
      63,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
      73,     0,     0,     0,     0,    74,    75,    76,     0,     0,
      77,     0,    78,    79,   675,    80,    65,    81,    82,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,    10,
       0,    11,     0,     0,     0,     0,   116,     0,    76,     0,
       0,   131,     0,     0,     0,     0,     0,     0,     0,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,     0,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,    26,    27,    28,     0,     0,     0,
       0,    29,    30,    31,     0,     0,     0,    32,    33,    34,
      35,    36,     0,    37,     0,     0,    38,    39,    40,    41,
      42,     0,    43,     0,    44,     0,    45,     0,     0,    46,
       0,     0,     0,    47,    48,    49,    50,    51,    52,    53,
       0,     0,    54,    55,     0,    56,     0,    57,    58,    59,
      60,    61,    62,    63,     0,     0,     0,    64,    65,     0,
      66,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,     0,     0,    73,     0,     0,     0,     0,    74,    75,
      76,     0,     0,    77,     0,    78,    79,   725,    80,     0,
      81,    82,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,    10,   242,    11,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,     0,   266,
       0,     0,     0,     0,     0,     0,     0,    12,    13,     0,
       0,   267,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
       0,     0,     0,     0,    29,    30,    31,     0,     0,     0,
      32,    33,    34,    35,    36,     0,    37,     0,     0,    38,
      39,    40,    41,    42,     0,    43,     0,    44,     0,    45,
       0,     0,    46,     0,     0,     0,    47,    48,    49,    50,
      51,    52,    53,     0,     0,    54,    55,     0,    56,     0,
      57,    58,    59,    60,    61,    62,    63,     0,     0,     0,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
       0,     0,     0,     0,     0,     0,    73,     0,     0,     0,
       0,    74,    75,    76,     0,     0,    77,     0,    78,    79,
       0,    80,     0,    81,    82,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,    10,     0,    11,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,     0,   266,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,   267,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      26,    27,    28,     0,     0,     0,     0,    29,    30,    31,
       0,     0,     0,    32,    33,    34,    35,    36,     0,    37,
       0,     0,    38,    39,    40,    41,    42,     0,    43,     0,
      44,     0,    45,     0,     0,    46,     0,     0,     0,    47,
      48,    49,    50,     0,    52,    53,     0,     0,    54,     0,
       0,    56,     0,    57,    58,    59,   375,    61,    62,    63,
       0,     0,     0,    64,    65,     0,    66,    67,    68,    69,
      70,    71,    72,     0,     0,     0,     0,     0,     0,    73,
       0,     0,     0,     0,   116,    75,    76,     0,     0,    77,
       0,    78,    79,   376,    80,   241,    81,    82,   400,   401,
     402,   403,   404,     0,   405,   406,   407,   408,   409,     0,
       0,     0,     0,   242,     0,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,     0,   266,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     410,   267,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   411,   412,     0,   413,   414,   415,
     416,   417,   418,   419,   420,   421,     0,     0,   422,    35,
       0,     0,     0,     0,     0,   423,   424,   425,   426,   427,
     428,   429,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,     0,   463,   464,   465,   466,
     467,   468,   469,   470,   471,   472,     0,     0,     0,     0,
       4,     5,     6,     7,     8,     0,     0,   473,   474,     9,
      10,     0,    11,     0,     0,   475,     0,     0,     0,     0,
      82,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,     0,
     266,     0,     0,     0,     0,    12,    13,     0,     0,     0,
       0,    14,   267,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,    26,    27,    28,     0,     0,
       0,     0,    29,    30,    31,     0,     0,     0,    32,    33,
      34,    35,    36,     0,    37,     0,     0,    38,    39,    40,
      41,    42,     0,    43,     0,    44,     0,    45,     0,     0,
      46,     0,     0,     0,    47,    48,    49,    50,     0,    52,
      53,     0,     0,    54,     0,     0,    56,     0,    57,    58,
      59,   375,    61,    62,    63,     0,     0,     0,    64,    65,
       0,    66,    67,    68,    69,    70,    71,    72,     0,     0,
       0,     0,     0,     0,    73,     0,     0,     0,     0,   116,
      75,    76,     0,     0,    77,     0,    78,    79,   562,    80,
       0,    81,    82,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,    10,     0,    11,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,     0,   266,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
     267,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,     0,     0,     0,   681,    29,    30,    31,     0,     0,
       0,    32,    33,    34,    35,    36,     0,    37,     0,     0,
      38,    39,    40,    41,    42,     0,    43,     0,    44,     0,
      45,     0,     0,    46,     0,     0,     0,    47,    48,    49,
      50,     0,    52,    53,     0,     0,    54,     0,     0,    56,
       0,    57,    58,    59,   375,    61,    62,    63,     0,     0,
       0,    64,    65,     0,    66,    67,    68,    69,    70,    71,
      72,     0,     0,     0,     0,     0,     0,    73,     0,     0,
       0,     0,   116,    75,    76,     0,     0,    77,     0,    78,
      79,     0,    80,     0,    81,    82,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,    10,     0,    11,     0,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
       0,   266,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,   267,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,     0,     0,     0,     0,    29,    30,
      31,     0,     0,     0,    32,    33,    34,    35,    36,     0,
      37,     0,     0,    38,    39,    40,    41,    42,   740,    43,
       0,    44,     0,    45,     0,     0,    46,     0,     0,     0,
      47,    48,    49,    50,     0,    52,    53,     0,     0,    54,
       0,     0,    56,     0,    57,    58,    59,   375,    61,    62,
      63,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
      73,     0,     0,     0,     0,   116,    75,    76,     0,     0,
      77,     0,    78,    79,     0,    80,     0,    81,    82,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,    10,
       0,    11,     0,     0,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,     0,   266,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,   267,     0,     0,     0,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,    26,    27,    28,     0,     0,     0,
       0,    29,    30,    31,     0,     0,     0,    32,    33,    34,
      35,    36,     0,    37,     0,     0,    38,    39,    40,    41,
      42,     0,    43,     0,    44,     0,    45,   793,     0,    46,
       0,     0,     0,    47,    48,    49,    50,     0,    52,    53,
       0,     0,    54,     0,     0,    56,     0,    57,    58,    59,
     375,    61,    62,    63,     0,     0,     0,    64,    65,     0,
      66,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,     0,     0,    73,     0,     0,     0,     0,   116,    75,
      76,     0,     0,    77,     0,    78,    79,     0,    80,     0,
      81,    82,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,    10,     0,    11,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,     0,   266,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   267,     0,    12,    13,     0,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
       0,     0,     0,     0,    29,    30,    31,     0,     0,     0,
      32,    33,    34,    35,    36,     0,    37,     0,     0,    38,
      39,    40,    41,    42,     0,    43,     0,    44,   829,    45,
       0,     0,    46,     0,     0,     0,    47,    48,    49,    50,
       0,    52,    53,     0,     0,    54,     0,     0,    56,     0,
      57,    58,    59,   375,    61,    62,    63,     0,     0,     0,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
       0,     0,     0,     0,     0,     0,    73,     0,     0,     0,
       0,   116,    75,    76,     0,     0,    77,     0,    78,    79,
       0,    80,     0,    81,    82,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,    10,     0,    11,  -470,  -470,
    -470,  -470,  -470,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,     0,   266,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   267,     0,
      12,    13,     0,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      26,    27,    28,     0,     0,     0,     0,    29,    30,    31,
       0,     0,     0,    32,    33,    34,    35,    36,     0,    37,
       0,     0,    38,    39,    40,    41,    42,     0,    43,     0,
      44,     0,    45,     0,     0,    46,     0,     0,     0,    47,
      48,    49,    50,     0,    52,    53,     0,     0,    54,     0,
       0,    56,     0,    57,    58,    59,   375,    61,    62,    63,
       0,     0,     0,    64,    65,     0,    66,    67,    68,    69,
      70,    71,    72,     0,     0,     0,     0,     0,     0,    73,
       0,     0,     0,     0,   116,    75,    76,     0,     0,    77,
       0,    78,    79,   835,    80,     0,    81,    82,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,    10,     0,
      11,  -470,  -470,  -470,  -470,   258,   259,   260,   261,   262,
     263,   264,   265,     0,   266,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   267,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,     0,     0,     0,     0,
      29,    30,    31,     0,     0,     0,    32,    33,    34,    35,
      36,     0,    37,     0,     0,    38,    39,    40,    41,    42,
       0,    43,   883,    44,     0,    45,     0,     0,    46,     0,
       0,     0,    47,    48,    49,    50,     0,    52,    53,     0,
       0,    54,     0,     0,    56,     0,    57,    58,    59,   375,
      61,    62,    63,     0,     0,     0,    64,    65,     0,    66,
      67,    68,    69,    70,    71,    72,     0,     0,     0,     0,
       0,     0,    73,     0,     0,     0,     0,   116,    75,    76,
       0,     0,    77,     0,    78,    79,     0,    80,     0,    81,
      82,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,    10,     0,    11,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,     0,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,    26,    27,    28,     0,
       0,     0,     0,    29,    30,    31,     0,     0,     0,    32,
      33,    34,    35,    36,     0,    37,     0,     0,    38,    39,
      40,    41,    42,     0,    43,     0,    44,     0,    45,     0,
       0,    46,     0,     0,     0,    47,    48,    49,    50,     0,
      52,    53,     0,     0,    54,     0,     0,    56,     0,    57,
      58,    59,   375,    61,    62,    63,     0,     0,     0,    64,
      65,     0,    66,    67,    68,    69,    70,    71,    72,     0,
       0,     0,     0,     0,     0,    73,     0,     0,     0,     0,
     116,    75,    76,     0,     0,    77,     0,    78,    79,   896,
      80,     0,    81,    82,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,    10,     0,    11,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    12,
      13,     0,     0,     0,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,    26,
      27,    28,     0,     0,     0,     0,    29,    30,    31,     0,
       0,     0,    32,    33,    34,    35,    36,     0,    37,     0,
       0,    38,    39,    40,    41,    42,     0,    43,     0,    44,
       0,    45,     0,     0,    46,     0,     0,     0,    47,    48,
      49,    50,     0,    52,    53,     0,     0,    54,     0,     0,
      56,     0,    57,    58,    59,   375,    61,    62,    63,     0,
       0,     0,    64,    65,     0,    66,    67,    68,    69,    70,
      71,    72,     0,     0,     0,     0,     0,     0,    73,     0,
       0,     0,     0,   116,    75,    76,     0,     0,    77,     0,
      78,    79,   897,    80,     0,    81,    82,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,    10,     0,    11,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,     0,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,    26,    27,    28,     0,     0,     0,     0,    29,
      30,    31,     0,     0,     0,    32,    33,    34,    35,    36,
       0,    37,     0,     0,    38,    39,    40,    41,    42,     0,
      43,     0,    44,     0,    45,     0,     0,    46,     0,     0,
       0,    47,    48,    49,    50,     0,    52,    53,     0,     0,
      54,     0,     0,    56,     0,    57,    58,    59,   375,    61,
      62,    63,     0,     0,     0,    64,    65,     0,    66,    67,
      68,    69,    70,    71,    72,     0,     0,     0,     0,     0,
       0,    73,     0,     0,     0,     0,   116,    75,    76,     0,
       0,    77,     0,    78,    79,   898,    80,     0,    81,    82,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
      10,     0,    11,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    13,     0,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,    26,    27,    28,     0,     0,
       0,     0,    29,    30,    31,     0,     0,     0,    32,    33,
      34,    35,    36,     0,    37,     0,     0,    38,    39,    40,
      41,    42,     0,    43,     0,    44,     0,    45,     0,     0,
      46,     0,     0,     0,    47,    48,    49,    50,     0,    52,
      53,     0,     0,    54,     0,     0,    56,     0,    57,    58,
      59,   375,    61,    62,    63,     0,     0,     0,    64,    65,
       0,    66,    67,    68,    69,    70,    71,    72,     0,     0,
       0,     0,     0,     0,    73,     0,     0,     0,     0,   116,
      75,    76,     0,     0,    77,     0,    78,    79,   908,    80,
       0,    81,    82,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,    10,     0,    11,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,     0,     0,     0,     0,    29,    30,    31,     0,     0,
       0,    32,    33,    34,    35,    36,     0,    37,     0,     0,
      38,    39,    40,    41,    42,     0,    43,     0,    44,     0,
      45,     0,     0,    46,     0,     0,     0,    47,    48,    49,
      50,     0,    52,    53,     0,     0,    54,     0,     0,    56,
       0,    57,    58,    59,   375,    61,    62,    63,     0,     0,
       0,    64,    65,     0,    66,    67,    68,    69,    70,    71,
      72,     0,     0,     0,     0,     0,     0,    73,     0,     0,
       0,     0,   116,    75,    76,     0,     0,    77,     0,    78,
      79,   917,    80,     0,    81,    82,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,    10,     0,    11,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,     0,     0,     0,     0,    29,    30,
      31,     0,     0,     0,    32,    33,    34,    35,    36,     0,
      37,     0,     0,    38,    39,    40,    41,    42,     0,    43,
       0,    44,     0,    45,     0,     0,    46,     0,     0,     0,
      47,    48,    49,    50,     0,    52,    53,     0,     0,    54,
       0,     0,    56,     0,    57,    58,    59,   375,    61,    62,
      63,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
      73,     0,     0,     0,     0,   116,    75,    76,     0,     0,
      77,     0,    78,    79,     0,    80,     0,    81,    82,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,    10,
       0,    11,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   634,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,     0,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,    26,    27,    28,     0,     0,     0,
       0,    29,     0,     0,     0,     0,     0,    32,    33,    34,
      35,    36,     0,    37,     0,     0,    38,    39,    40,    41,
      42,     0,    43,     0,    44,     0,    45,     0,     0,    46,
       0,     0,     0,    47,    48,    49,    50,     0,    52,    53,
       0,     0,    54,     0,     0,    56,     0,    57,    58,    59,
       0,     0,     0,     0,     0,     0,     0,    64,    65,     0,
      66,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,     0,     0,    73,     0,     0,     0,     0,   116,    75,
      76,     0,     0,    77,     0,    78,    79,     0,    80,     0,
      81,    82,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,    10,     0,    11,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   637,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,     0,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
       0,     0,     0,     0,    29,     0,     0,     0,     0,     0,
      32,    33,    34,    35,    36,     0,    37,     0,     0,    38,
      39,    40,    41,    42,     0,    43,     0,    44,     0,    45,
       0,     0,    46,     0,     0,     0,    47,    48,    49,    50,
       0,    52,    53,     0,     0,    54,     0,     0,    56,     0,
      57,    58,    59,     0,     0,     0,     0,     0,     0,     0,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
       0,     0,     0,     0,     0,     0,    73,     0,     0,     0,
       0,   116,    75,    76,     0,     0,    77,     0,    78,    79,
       0,    80,     0,    81,    82,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,    10,     0,    11,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   700,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      26,    27,    28,     0,     0,     0,     0,    29,     0,     0,
       0,     0,     0,    32,    33,    34,    35,    36,     0,    37,
       0,     0,    38,    39,    40,    41,    42,     0,    43,     0,
      44,     0,    45,     0,     0,    46,     0,     0,     0,    47,
      48,    49,    50,     0,    52,    53,     0,     0,    54,     0,
       0,    56,     0,    57,    58,    59,     0,     0,     0,     0,
       0,     0,     0,    64,    65,     0,    66,    67,    68,    69,
      70,    71,    72,     0,     0,     0,     0,     0,     0,    73,
       0,     0,     0,     0,   116,    75,    76,     0,     0,    77,
       0,    78,    79,     0,    80,     0,    81,    82,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,    10,     0,
      11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   744,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,     0,     0,     0,     0,
      29,     0,     0,     0,     0,     0,    32,    33,    34,    35,
      36,     0,    37,     0,     0,    38,    39,    40,    41,    42,
       0,    43,     0,    44,     0,    45,     0,     0,    46,     0,
       0,     0,    47,    48,    49,    50,     0,    52,    53,     0,
       0,    54,     0,     0,    56,     0,    57,    58,    59,     0,
       0,     0,     0,     0,     0,     0,    64,    65,     0,    66,
      67,    68,    69,    70,    71,    72,     0,     0,     0,     0,
       0,     0,    73,     0,     0,     0,     0,   116,    75,    76,
       0,     0,    77,     0,    78,    79,     0,    80,     0,    81,
      82,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,    10,     0,    11,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   825,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,     0,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,    26,    27,    28,     0,
       0,     0,     0,    29,     0,     0,     0,     0,     0,    32,
      33,    34,    35,    36,     0,    37,     0,     0,    38,    39,
      40,    41,    42,     0,    43,     0,    44,     0,    45,     0,
       0,    46,     0,     0,     0,    47,    48,    49,    50,     0,
      52,    53,     0,     0,    54,     0,     0,    56,     0,    57,
      58,    59,     0,     0,     0,     0,     0,     0,     0,    64,
      65,     0,    66,    67,    68,    69,    70,    71,    72,     0,
       0,     0,     0,     0,     0,    73,     0,     0,     0,     0,
     116,    75,    76,     0,     0,    77,     0,    78,    79,     0,
      80,     0,    81,    82,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,    10,     0,    11,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    12,
      13,     0,     0,     0,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,    26,
      27,    28,     0,     0,     0,     0,    29,     0,     0,     0,
       0,     0,    32,    33,    34,    35,    36,     0,    37,     0,
       0,    38,    39,    40,    41,    42,     0,    43,     0,    44,
       0,    45,     0,     0,    46,     0,     0,     0,    47,    48,
      49,    50,     0,    52,    53,     0,     0,    54,     0,     0,
      56,     0,    57,    58,    59,     0,     0,     0,     0,     0,
       0,     0,    64,    65,     0,    66,    67,    68,    69,    70,
      71,    72,     0,     0,     0,     0,     0,     0,    73,     0,
       0,     0,     0,   116,    75,    76,     0,     0,    77,     0,
      78,    79,     0,    80,     0,    81,    82,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,    10,     0,    11,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,     0,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,    26,    27,    28,     0,     0,     0,     0,   114,
       0,     0,     0,     0,     0,    32,    33,   115,    35,     0,
       0,    37,     0,     0,    38,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,     0,     0,     4,
       5,     6,     7,     8,     0,     0,    58,    59,     9,    10,
       0,    11,     0,     0,     0,    64,    65,     0,    66,    67,
      68,    69,    70,    71,    72,     0,     0,     0,     0,     0,
       0,    73,   144,     0,     0,     0,   116,    75,    76,   387,
       0,    77,   388,     0,    12,    13,    80,     0,    81,    82,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,    26,    27,    28,     0,     0,     0,
       0,   114,     0,     0,     0,     0,     0,    32,    33,   115,
      35,     0,     0,    37,     0,     0,    38,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,     0,     0,     0,
       0,     4,     5,     6,     7,     8,     0,     0,    58,    59,
       9,    10,     0,    11,     0,     0,     0,    64,    65,     0,
      66,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,     0,     0,    73,     0,     0,     0,     0,   116,    75,
      76,     0,     0,    77,     0,     0,    12,    13,    80,     0,
      81,    82,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,    26,    27,    28,     0,
       0,     0,     0,   114,     0,     0,     0,     0,     0,    32,
      33,   115,    35,     0,     0,    37,   364,     0,    38,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
       0,     0,     0,     4,     5,     6,     7,     8,     0,     0,
      58,    59,     9,    10,     0,    11,     0,     0,     0,    64,
      65,     0,    66,    67,    68,    69,    70,    71,    72,     0,
     485,     0,     0,     0,     0,    73,     0,     0,     0,     0,
     116,    75,    76,     0,     0,    77,     0,     0,    12,    13,
      80,     0,    81,    82,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,     0,     0,     0,     0,   114,     0,     0,     0,     0,
       0,    32,    33,   115,    35,     0,     0,    37,     0,     0,
      38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,     0,     0,     0,     0,     4,     5,     6,     7,     8,
       0,     0,    58,    59,     9,    10,     0,    11,     0,     0,
       0,    64,    65,     0,    66,    67,    68,    69,    70,    71,
      72,     0,     0,     0,     0,     0,     0,    73,   521,     0,
       0,     0,   116,    75,    76,     0,     0,    77,     0,     0,
      12,    13,    80,     0,    81,    82,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      26,    27,    28,     0,     0,     0,     0,   114,     0,     0,
       0,     0,     0,    32,    33,   115,    35,     0,     0,    37,
       0,     0,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,     0,     0,     0,     0,     4,     5,     6,
       7,     8,     0,     0,    58,    59,     9,    10,     0,    11,
       0,     0,     0,    64,    65,     0,    66,    67,    68,    69,
      70,    71,    72,     0,     0,     0,     0,     0,     0,    73,
     538,     0,     0,     0,   116,    75,    76,     0,     0,    77,
       0,     0,    12,    13,    80,     0,    81,    82,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,    26,    27,    28,     0,     0,     0,     0,   114,
       0,     0,     0,     0,     0,    32,    33,   115,    35,     0,
       0,    37,     0,     0,    38,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,     0,     0,     4,
       5,     6,     7,     8,     0,     0,    58,    59,     9,    10,
       0,    11,     0,     0,     0,    64,    65,     0,    66,    67,
      68,    69,    70,    71,    72,     0,     0,     0,     0,     0,
       0,    73,     0,     0,     0,     0,   116,    75,    76,     0,
       0,    77,     0,     0,    12,    13,    80,     0,    81,    82,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,    26,    27,    28,     0,     0,     0,
       0,   114,     0,     0,     0,     0,     0,    32,    33,   115,
      35,     0,     0,    37,     0,     0,    38,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,     0,     0,     0,
       0,     4,     5,     6,     7,     8,     0,     0,    58,    59,
       9,    10,     0,    11,     0,     0,     0,    64,    65,     0,
      66,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,     0,     0,    73,     0,     0,     0,     0,   116,    75,
      76,   387,     0,    77,     0,     0,    12,    13,    80,     0,
      81,    82,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,    26,    27,    28,     0,
       0,     0,     0,   114,     0,     0,     0,     0,     0,    32,
      33,   115,    35,     0,     0,    37,     0,     0,    38,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,   400,
     401,   402,   403,   404,     0,   405,   406,   407,   408,   409,
      58,    59,     0,     0,     0,     0,     0,     0,     0,    64,
      65,     0,    66,    67,    68,    69,    70,    71,    72,     0,
       0,     0,     0,     0,     0,    73,     0,     0,     0,     0,
     116,    75,    76,     0,     0,    77,     0,     0,     0,     0,
      80,   410,    81,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   411,   412,     0,   413,   414,
     415,   416,   417,   418,   419,   420,   421,     0,     0,   861,
       0,     0,     0,     0,     0,     0,   423,   424,   425,   426,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,     0,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   400,   401,   402,
     403,   404,     0,   405,   406,   407,   408,   409,   862,   474,
      76,     0,     0,     0,     0,     0,     0,   863,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   410,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   411,   412,     0,   413,   414,   415,   416,
     417,   418,   419,   420,   421,     0,     0,   861,     0,     0,
       0,     0,     0,     0,   423,   424,   425,   426,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,     0,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,     0,   239,   240,   241,     0,
       0,     0,     0,     0,     0,     0,   862,   474,    76,     0,
       0,     0,     0,     0,     0,   886,   242,     0,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,     0,   266,   239,   240,   241,     0,     0,     0,     0,
       0,     0,     0,     0,   267,     0,     0,     0,     0,     0,
       0,     0,     0,   242,     0,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,     0,   266,
       0,   239,   240,   241,     0,     0,     0,     0,     0,     0,
       0,   267,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   242,     0,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,     0,   266,   239,   240,
     241,     0,     0,     0,     0,     0,     0,     0,   596,   267,
       0,     0,     0,     0,     0,     0,     0,     0,   242,     0,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,     0,   266,     0,   239,   240,   241,     0,
       0,     0,     0,     0,     0,   601,   267,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   242,     0,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,     0,   266,   239,   240,   241,     0,     0,     0,     0,
       0,     0,     0,   627,   267,     0,     0,     0,     0,     0,
       0,     0,     0,   242,     0,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,     0,   266,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     632,   267,   240,   241,     0,     0,     0,     0,     0,   400,
     401,   402,   403,   404,     0,   405,   406,   407,   408,   409,
       0,   242,     0,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,     0,   266,   687,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   267,
       0,   410,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   411,   412,     0,   413,   414,
     415,   416,   417,   418,   419,   420,   421,     0,     0,   422,
       0,     0,     0,     0,     0,   689,   423,   424,   425,   426,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,     0,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   400,   401,   402,
     403,   404,   291,   405,   406,   407,   408,   409,   473,   474,
       0,     0,     0,     0,     0,     0,     0,   242,     0,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,     0,   266,     0,     0,     0,     0,     0,   410,
       0,     0,     0,     0,     0,   267,     0,     0,     0,     0,
       0,     0,     0,   411,   412,     0,   413,   414,   415,   762,
     763,   764,   765,   766,   767,     0,     0,   902,     0,     0,
       0,     0,     0,     0,   423,   424,   425,   426,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,     0,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,   239,   240,   241,     0,     0,
       0,     0,     0,     0,     0,     0,   473,   474,     0,     0,
       0,     0,     0,     0,     0,   242,   797,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
       0,   266,   239,   240,   241,     0,     0,     0,     0,     0,
       0,     0,     0,   267,     0,     0,     0,     0,     0,     0,
       0,     0,   242,     0,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,     0,   266,   239,
     240,   241,     0,     0,     0,     0,     0,     0,     0,     0,
     267,     0,     0,     0,     0,     0,     0,     0,     0,   242,
       0,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,     0,   266,   239,   240,   241,     0,
       0,     0,     0,     0,     0,   798,     0,   267,     0,     0,
       0,     0,     0,     0,     0,     0,   242,     0,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,     0,   266,   239,   240,   241,     0,     0,     0,     0,
       0,     0,   268,     0,   267,     0,     0,     0,     0,     0,
       0,     0,     0,   242,     0,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,     0,   266,
     239,   240,   241,     0,     0,     0,     0,     0,     0,   330,
       0,   267,     0,     0,     0,     0,     0,     0,     0,     0,
     242,     0,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,     0,   266,   239,   240,   241,
       0,     0,     0,     0,     0,   374,     0,     0,   267,     0,
       0,     0,     0,     0,     0,     0,     0,   242,     0,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,     0,   266,   239,   240,   241,     0,     0,     0,
       0,     0,   535,     0,     0,   267,     0,     0,     0,     0,
       0,     0,     0,     0,   242,     0,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,     0,
     266,   239,   240,   241,     0,     0,     0,     0,     0,   537,
       0,     0,   267,     0,     0,     0,     0,     0,     0,     0,
       0,   242,     0,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,     0,   266,   239,   240,
     241,     0,     0,     0,     0,     0,   551,     0,     0,   267,
       0,     0,     0,     0,     0,     0,     0,     0,   242,     0,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,     0,   266,   239,   240,   241,     0,     0,
       0,     0,     0,   554,     0,     0,   267,     0,     0,     0,
       0,     0,     0,     0,     0,   242,     0,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
       0,   266,   239,   240,   241,     0,     0,     0,     0,     0,
     559,     0,     0,   267,     0,     0,     0,     0,     0,     0,
       0,     0,   242,     0,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,     0,   266,   239,
     240,   241,     0,     0,     0,     0,     0,   578,     0,     0,
     267,     0,     0,     0,     0,     0,     0,     0,     0,   242,
       0,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,     0,   266,     0,     0,     0,     0,
       0,     0,     0,     0,   679,     0,     0,   267,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   239,
     240,   241,     0,     0,     0,     0,     0,     0,     0,   287,
     288,   680,     0,     0,     0,     0,     0,     0,     0,   242,
    -425,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,     0,   266,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   267,   693,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -425,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   557,   239,   240,   241,     0,     0,   294,     0,
       0,     0,     0,  -425,     0,     0,     0,     0,     0,     0,
       0,     0,  -425,   242,     0,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,     0,   266,
     239,   240,   241,     0,     0,     0,     0,     0,     0,     0,
       0,   267,     0,     0,     0,     0,     0,     0,     0,     0,
     242,   622,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,     0,   266,   239,   240,   241,
       0,     0,     0,     0,     0,     0,     0,     0,   267,     0,
       0,     0,     0,     0,     0,     0,     0,   242,     0,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,     0,   266,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   267
};

static const yytype_int16 yycheck[] =
{
       2,     2,   117,     2,     4,     5,    84,     7,     8,     9,
      10,    11,    12,    13,    14,    15,     2,   237,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    29,    28,     2,
     108,   186,    27,   549,    55,    14,   733,     2,    16,    17,
      40,   738,     8,   373,     8,   160,   555,    47,    48,   269,
      27,     8,    52,    74,    54,    76,     8,     8,    14,    27,
      30,     8,   774,     8,   585,    84,     8,   721,     8,   663,
       8,    30,    84,     8,    83,    68,    41,    77,     8,     8,
     541,   182,     8,    14,   102,     8,     8,    83,    56,     0,
      84,   630,    86,   609,    55,    83,    84,    68,    48,    83,
     154,    68,    52,    84,    36,   159,    67,   761,    83,    83,
      84,    83,   114,   157,    82,    89,   151,   114,   115,    68,
     120,    83,   157,     8,    72,    73,   110,   111,    83,   110,
      30,   131,   786,    76,    77,   157,   154,     8,   154,   678,
       8,   160,     8,     8,   605,   160,   165,   105,   106,     8,
     157,   160,    84,   165,     8,   149,   150,     8,     8,   130,
     814,   157,   162,   130,   164,   186,   144,   188,   161,   169,
     170,   171,   160,   173,   768,   157,   697,   165,   890,   158,
     335,   130,   125,    36,   151,   160,   695,    83,   160,   160,
     160,   212,   154,   160,   158,   161,   560,   197,   198,   163,
     159,   158,   158,   161,   204,   160,   163,   158,   208,   161,
      16,    17,   162,   910,   161,   217,   161,   159,   196,   159,
     584,   159,   160,   223,   159,   203,   226,   158,    83,   159,
     159,   209,   157,   159,    16,    17,   159,   159,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   231,   267,   598,   237,
     270,   266,   272,   158,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   158,   238,   266,
     158,   291,   158,   158,   294,   396,   296,   891,   266,   158,
     664,   269,   302,   271,   158,   305,   306,   158,   158,    68,
     648,    84,   312,    86,   335,    84,    68,    86,    83,   340,
     270,   102,   157,    83,    68,   325,   690,   329,   157,    83,
     157,   299,    75,   110,   111,   303,   304,   157,   144,   157,
      83,    84,   157,    75,    76,    77,    78,    79,    80,   157,
     110,   111,   302,   157,   102,   157,   105,   106,    72,    73,
      74,    83,   144,   727,    83,   703,   151,   705,    51,    52,
      53,   130,    55,   154,   342,    68,   149,   150,   130,   895,
     149,   150,   125,   151,    67,   117,   130,   387,   120,   154,
     196,   164,   151,   393,   154,   395,   157,   203,   157,   151,
     154,   160,   480,   209,   399,   157,   154,   151,   160,   152,
     565,   154,   161,    84,   196,   570,   160,   157,   782,   110,
     784,   203,   165,   787,     9,    10,    11,   209,   154,   161,
      75,    83,    67,   152,   157,   154,   514,     8,    83,    84,
     151,   519,   102,   807,    29,    36,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    84,
      55,    86,   102,    84,   163,   475,    16,    68,   149,   150,
     132,   133,    67,   159,    75,   485,    75,    76,    77,    78,
      79,    80,    83,    84,   154,    94,    87,   652,   653,    16,
     152,   159,   154,   658,   159,   160,   158,   152,   872,   154,
     159,   206,   104,   105,   106,   210,    84,   517,    86,   159,
     165,    83,   159,   218,   154,   220,   221,   222,   117,   893,
     158,   120,    83,   634,   149,   150,   637,   148,   149,   150,
     131,   132,    83,   521,   565,   162,    84,   911,    86,   570,
     104,   105,   106,   553,   549,   555,   556,   712,    83,   714,
     538,   152,   160,   154,    80,    81,   157,   157,    83,   157,
     132,   133,   161,    30,   165,   159,   576,   157,   163,   557,
     148,   149,   150,    84,   157,   580,   551,   157,   583,   554,
     152,   158,   154,   159,   594,     8,   574,   599,   599,   700,
     599,    83,   159,   603,   759,   128,   608,   585,   586,   159,
     148,   149,   150,   599,   609,   128,   158,    83,   838,    83,
     157,   160,   622,   157,   157,   161,   599,   847,   729,   157,
     157,   652,   653,   163,   599,   157,   129,   658,    16,   163,
     159,     8,   163,   744,    68,   163,   866,   158,   160,   158,
      36,    75,   158,     8,   755,   159,   159,   157,   160,    83,
      84,   159,   159,    87,   642,   885,    30,   159,   663,   158,
     117,   671,   674,   674,   155,   674,   159,   157,    30,    84,
     159,   646,   160,   160,   904,   161,   157,   160,   674,   684,
     692,   712,   694,   714,   159,   695,   811,   158,   799,   158,
      84,   674,   160,    16,   159,   159,    16,   131,   132,   674,
      84,   160,    84,   159,   679,   521,   160,   160,   158,   697,
     698,    16,   160,   102,   825,   720,   151,   159,   152,   159,
     154,   832,   538,   157,   699,   118,   102,   157,   759,   521,
     159,   165,   158,   890,    55,   747,   652,   188,   849,   712,
     750,   557,   853,   340,   714,   856,   538,   172,   574,   754,
      75,    76,    77,    78,    79,    80,    89,   791,   574,   796,
     698,   773,   684,   768,   866,   557,   781,   603,   780,   585,
     586,   342,   842,   884,   875,   851,   781,   307,   691,   586,
     792,   326,   574,   298,   266,   269,   303,   204,   312,    -1,
     802,   296,   117,   585,   586,   120,   576,    75,    76,    77,
      78,    79,    80,   914,    -1,    -1,    75,    76,    77,    78,
      79,    80,   822,    -1,   789,    -1,   791,    -1,    -1,    -1,
      -1,   833,    -1,    -1,    -1,    -1,   642,    -1,    -1,    -1,
     840,    -1,    -1,   838,    -1,    -1,   161,    -1,    -1,   117,
      -1,    -1,   120,    -1,    -1,   857,    -1,   859,   117,    -1,
     642,   120,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,   866,    -1,    -1,   874,    12,    13,   879,    15,   881,
     882,    -1,    48,    49,    50,    51,    52,    53,    -1,    55,
      -1,   697,   698,   161,    -1,    -1,   891,    -1,   900,    -1,
     895,    67,   161,    -1,    75,    76,    77,    78,    79,    80,
      -1,    48,    49,    84,   916,   697,   698,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    -1,    75,    76,
      77,    -1,    -1,    -1,    81,    82,    83,    84,    85,    -1,
      87,    -1,    -1,    90,    91,    92,    93,    94,    -1,    96,
      -1,    98,    68,   100,    -1,    -1,   103,    -1,    -1,    75,
     107,   108,   109,   110,   111,   112,   113,    83,    84,   116,
     117,    87,   119,    -1,   121,   122,   123,   124,   125,   126,
     127,    -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,
     137,   138,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,
     147,    -1,    -1,    -1,    -1,   152,   153,   154,    -1,    -1,
     157,    -1,   159,   160,   161,   162,   132,   164,   165,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,
      -1,    15,    -1,    -1,    -1,    -1,   152,    -1,   154,    -1,
      -1,   157,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,
      -1,    75,    76,    77,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    -1,    87,    -1,    -1,    90,    91,    92,    93,
      94,    -1,    96,    -1,    98,    -1,   100,    -1,    -1,   103,
      -1,    -1,    -1,   107,   108,   109,   110,   111,   112,   113,
      -1,    -1,   116,   117,    -1,   119,    -1,   121,   122,   123,
     124,   125,   126,   127,    -1,    -1,    -1,   131,   132,    -1,
     134,   135,   136,   137,   138,   139,   140,    -1,    -1,    -1,
      -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,   152,   153,
     154,    -1,    -1,   157,    -1,   159,   160,   161,   162,    -1,
     164,   165,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    29,    15,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,
      -1,    67,    -1,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,    69,    70,
      -1,    -1,    -1,    -1,    75,    76,    77,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    -1,    87,    -1,    -1,    90,
      91,    92,    93,    94,    -1,    96,    -1,    98,    -1,   100,
      -1,    -1,   103,    -1,    -1,    -1,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,   116,   117,    -1,   119,    -1,
     121,   122,   123,   124,   125,   126,   127,    -1,    -1,    -1,
     131,   132,    -1,   134,   135,   136,   137,   138,   139,   140,
      -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,
      -1,   152,   153,   154,    -1,    -1,   157,    -1,   159,   160,
      -1,   162,    -1,   164,   165,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    13,    -1,    15,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    67,    -1,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      68,    69,    70,    -1,    -1,    -1,    -1,    75,    76,    77,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    -1,    87,
      -1,    -1,    90,    91,    92,    93,    94,    -1,    96,    -1,
      98,    -1,   100,    -1,    -1,   103,    -1,    -1,    -1,   107,
     108,   109,   110,    -1,   112,   113,    -1,    -1,   116,    -1,
      -1,   119,    -1,   121,   122,   123,   124,   125,   126,   127,
      -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,   137,
     138,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,   147,
      -1,    -1,    -1,    -1,   152,   153,   154,    -1,    -1,   157,
      -1,   159,   160,   161,   162,    11,   164,   165,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    -1,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    -1,    -1,    83,    84,
      -1,    -1,    -1,    -1,    -1,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,    -1,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,   152,   153,    12,
      13,    -1,    15,    -1,    -1,   160,    -1,    -1,    -1,    -1,
     165,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,
      -1,    54,    67,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    69,    70,    -1,    -1,
      -1,    -1,    75,    76,    77,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    -1,    87,    -1,    -1,    90,    91,    92,
      93,    94,    -1,    96,    -1,    98,    -1,   100,    -1,    -1,
     103,    -1,    -1,    -1,   107,   108,   109,   110,    -1,   112,
     113,    -1,    -1,   116,    -1,    -1,   119,    -1,   121,   122,
     123,   124,   125,   126,   127,    -1,    -1,    -1,   131,   132,
      -1,   134,   135,   136,   137,   138,   139,   140,    -1,    -1,
      -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,   152,
     153,   154,    -1,    -1,   157,    -1,   159,   160,   161,   162,
      -1,   164,   165,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    13,    -1,    15,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      67,    -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    68,    69,
      70,    -1,    -1,    -1,    74,    75,    76,    77,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    -1,    87,    -1,    -1,
      90,    91,    92,    93,    94,    -1,    96,    -1,    98,    -1,
     100,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,   109,
     110,    -1,   112,   113,    -1,    -1,   116,    -1,    -1,   119,
      -1,   121,   122,   123,   124,   125,   126,   127,    -1,    -1,
      -1,   131,   132,    -1,   134,   135,   136,   137,   138,   139,
     140,    -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,
      -1,    -1,   152,   153,   154,    -1,    -1,   157,    -1,   159,
     160,    -1,   162,    -1,   164,   165,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    -1,    15,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    67,    -1,    -1,    -1,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    -1,    75,    76,
      77,    -1,    -1,    -1,    81,    82,    83,    84,    85,    -1,
      87,    -1,    -1,    90,    91,    92,    93,    94,    95,    96,
      -1,    98,    -1,   100,    -1,    -1,   103,    -1,    -1,    -1,
     107,   108,   109,   110,    -1,   112,   113,    -1,    -1,   116,
      -1,    -1,   119,    -1,   121,   122,   123,   124,   125,   126,
     127,    -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,
     137,   138,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,
     147,    -1,    -1,    -1,    -1,   152,   153,   154,    -1,    -1,
     157,    -1,   159,   160,    -1,   162,    -1,   164,   165,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,
      -1,    15,    -1,    -1,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    67,    -1,    -1,    -1,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,
      -1,    75,    76,    77,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    -1,    87,    -1,    -1,    90,    91,    92,    93,
      94,    -1,    96,    -1,    98,    -1,   100,   101,    -1,   103,
      -1,    -1,    -1,   107,   108,   109,   110,    -1,   112,   113,
      -1,    -1,   116,    -1,    -1,   119,    -1,   121,   122,   123,
     124,   125,   126,   127,    -1,    -1,    -1,   131,   132,    -1,
     134,   135,   136,   137,   138,   139,   140,    -1,    -1,    -1,
      -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,   152,   153,
     154,    -1,    -1,   157,    -1,   159,   160,    -1,   162,    -1,
     164,   165,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    -1,    15,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    48,    49,    -1,
      -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,    69,    70,
      -1,    -1,    -1,    -1,    75,    76,    77,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    -1,    87,    -1,    -1,    90,
      91,    92,    93,    94,    -1,    96,    -1,    98,    99,   100,
      -1,    -1,   103,    -1,    -1,    -1,   107,   108,   109,   110,
      -1,   112,   113,    -1,    -1,   116,    -1,    -1,   119,    -1,
     121,   122,   123,   124,   125,   126,   127,    -1,    -1,    -1,
     131,   132,    -1,   134,   135,   136,   137,   138,   139,   140,
      -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,
      -1,   152,   153,   154,    -1,    -1,   157,    -1,   159,   160,
      -1,   162,    -1,   164,   165,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    13,    -1,    15,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      48,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      68,    69,    70,    -1,    -1,    -1,    -1,    75,    76,    77,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    -1,    87,
      -1,    -1,    90,    91,    92,    93,    94,    -1,    96,    -1,
      98,    -1,   100,    -1,    -1,   103,    -1,    -1,    -1,   107,
     108,   109,   110,    -1,   112,   113,    -1,    -1,   116,    -1,
      -1,   119,    -1,   121,   122,   123,   124,   125,   126,   127,
      -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,   137,
     138,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,   147,
      -1,    -1,    -1,    -1,   152,   153,   154,    -1,    -1,   157,
      -1,   159,   160,   161,   162,    -1,   164,   165,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,
      15,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,
      75,    76,    77,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    -1,    87,    -1,    -1,    90,    91,    92,    93,    94,
      -1,    96,    97,    98,    -1,   100,    -1,    -1,   103,    -1,
      -1,    -1,   107,   108,   109,   110,    -1,   112,   113,    -1,
      -1,   116,    -1,    -1,   119,    -1,   121,   122,   123,   124,
     125,   126,   127,    -1,    -1,    -1,   131,   132,    -1,   134,
     135,   136,   137,   138,   139,   140,    -1,    -1,    -1,    -1,
      -1,    -1,   147,    -1,    -1,    -1,    -1,   152,   153,   154,
      -1,    -1,   157,    -1,   159,   160,    -1,   162,    -1,   164,
     165,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
      -1,    -1,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    68,    69,    70,    -1,
      -1,    -1,    -1,    75,    76,    77,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    -1,    87,    -1,    -1,    90,    91,
      92,    93,    94,    -1,    96,    -1,    98,    -1,   100,    -1,
      -1,   103,    -1,    -1,    -1,   107,   108,   109,   110,    -1,
     112,   113,    -1,    -1,   116,    -1,    -1,   119,    -1,   121,
     122,   123,   124,   125,   126,   127,    -1,    -1,    -1,   131,
     132,    -1,   134,   135,   136,   137,   138,   139,   140,    -1,
      -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,
     152,   153,   154,    -1,    -1,   157,    -1,   159,   160,   161,
     162,    -1,   164,   165,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    13,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    -1,    -1,    -1,    -1,    54,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    68,
      69,    70,    -1,    -1,    -1,    -1,    75,    76,    77,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    -1,    87,    -1,
      -1,    90,    91,    92,    93,    94,    -1,    96,    -1,    98,
      -1,   100,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,
     109,   110,    -1,   112,   113,    -1,    -1,   116,    -1,    -1,
     119,    -1,   121,   122,   123,   124,   125,   126,   127,    -1,
      -1,    -1,   131,   132,    -1,   134,   135,   136,   137,   138,
     139,   140,    -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,
      -1,    -1,    -1,   152,   153,   154,    -1,    -1,   157,    -1,
     159,   160,   161,   162,    -1,   164,   165,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,    75,
      76,    77,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      -1,    87,    -1,    -1,    90,    91,    92,    93,    94,    -1,
      96,    -1,    98,    -1,   100,    -1,    -1,   103,    -1,    -1,
      -1,   107,   108,   109,   110,    -1,   112,   113,    -1,    -1,
     116,    -1,    -1,   119,    -1,   121,   122,   123,   124,   125,
     126,   127,    -1,    -1,    -1,   131,   132,    -1,   134,   135,
     136,   137,   138,   139,   140,    -1,    -1,    -1,    -1,    -1,
      -1,   147,    -1,    -1,    -1,    -1,   152,   153,   154,    -1,
      -1,   157,    -1,   159,   160,   161,   162,    -1,   164,   165,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      13,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,
      -1,    54,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    69,    70,    -1,    -1,
      -1,    -1,    75,    76,    77,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    -1,    87,    -1,    -1,    90,    91,    92,
      93,    94,    -1,    96,    -1,    98,    -1,   100,    -1,    -1,
     103,    -1,    -1,    -1,   107,   108,   109,   110,    -1,   112,
     113,    -1,    -1,   116,    -1,    -1,   119,    -1,   121,   122,
     123,   124,   125,   126,   127,    -1,    -1,    -1,   131,   132,
      -1,   134,   135,   136,   137,   138,   139,   140,    -1,    -1,
      -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,   152,
     153,   154,    -1,    -1,   157,    -1,   159,   160,   161,   162,
      -1,   164,   165,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    13,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    68,    69,
      70,    -1,    -1,    -1,    -1,    75,    76,    77,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    -1,    87,    -1,    -1,
      90,    91,    92,    93,    94,    -1,    96,    -1,    98,    -1,
     100,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,   109,
     110,    -1,   112,   113,    -1,    -1,   116,    -1,    -1,   119,
      -1,   121,   122,   123,   124,   125,   126,   127,    -1,    -1,
      -1,   131,   132,    -1,   134,   135,   136,   137,   138,   139,
     140,    -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,
      -1,    -1,   152,   153,   154,    -1,    -1,   157,    -1,   159,
     160,   161,   162,    -1,   164,   165,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    -1,    75,    76,
      77,    -1,    -1,    -1,    81,    82,    83,    84,    85,    -1,
      87,    -1,    -1,    90,    91,    92,    93,    94,    -1,    96,
      -1,    98,    -1,   100,    -1,    -1,   103,    -1,    -1,    -1,
     107,   108,   109,   110,    -1,   112,   113,    -1,    -1,   116,
      -1,    -1,   119,    -1,   121,   122,   123,   124,   125,   126,
     127,    -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,
     137,   138,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,
     147,    -1,    -1,    -1,    -1,   152,   153,   154,    -1,    -1,
     157,    -1,   159,   160,    -1,   162,    -1,   164,   165,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    -1,    87,    -1,    -1,    90,    91,    92,    93,
      94,    -1,    96,    -1,    98,    -1,   100,    -1,    -1,   103,
      -1,    -1,    -1,   107,   108,   109,   110,    -1,   112,   113,
      -1,    -1,   116,    -1,    -1,   119,    -1,   121,   122,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,
     134,   135,   136,   137,   138,   139,   140,    -1,    -1,    -1,
      -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,   152,   153,
     154,    -1,    -1,   157,    -1,   159,   160,    -1,   162,    -1,
     164,   165,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,
      -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,    69,    70,
      -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    -1,    87,    -1,    -1,    90,
      91,    92,    93,    94,    -1,    96,    -1,    98,    -1,   100,
      -1,    -1,   103,    -1,    -1,    -1,   107,   108,   109,   110,
      -1,   112,   113,    -1,    -1,   116,    -1,    -1,   119,    -1,
     121,   122,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     131,   132,    -1,   134,   135,   136,   137,   138,   139,   140,
      -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,
      -1,   152,   153,   154,    -1,    -1,   157,    -1,   159,   160,
      -1,   162,    -1,   164,   165,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    13,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      68,    69,    70,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    -1,    87,
      -1,    -1,    90,    91,    92,    93,    94,    -1,    96,    -1,
      98,    -1,   100,    -1,    -1,   103,    -1,    -1,    -1,   107,
     108,   109,   110,    -1,   112,   113,    -1,    -1,   116,    -1,
      -1,   119,    -1,   121,   122,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,   137,
     138,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,   147,
      -1,    -1,    -1,    -1,   152,   153,   154,    -1,    -1,   157,
      -1,   159,   160,    -1,   162,    -1,   164,   165,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    54,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    -1,    87,    -1,    -1,    90,    91,    92,    93,    94,
      -1,    96,    -1,    98,    -1,   100,    -1,    -1,   103,    -1,
      -1,    -1,   107,   108,   109,   110,    -1,   112,   113,    -1,
      -1,   116,    -1,    -1,   119,    -1,   121,   122,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,   134,
     135,   136,   137,   138,   139,   140,    -1,    -1,    -1,    -1,
      -1,    -1,   147,    -1,    -1,    -1,    -1,   152,   153,   154,
      -1,    -1,   157,    -1,   159,   160,    -1,   162,    -1,   164,
     165,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    13,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
      -1,    -1,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    68,    69,    70,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    -1,    87,    -1,    -1,    90,    91,
      92,    93,    94,    -1,    96,    -1,    98,    -1,   100,    -1,
      -1,   103,    -1,    -1,    -1,   107,   108,   109,   110,    -1,
     112,   113,    -1,    -1,   116,    -1,    -1,   119,    -1,   121,
     122,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,
     132,    -1,   134,   135,   136,   137,   138,   139,   140,    -1,
      -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,
     152,   153,   154,    -1,    -1,   157,    -1,   159,   160,    -1,
     162,    -1,   164,   165,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    13,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    -1,    -1,    -1,    -1,    54,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    68,
      69,    70,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    -1,    87,    -1,
      -1,    90,    91,    92,    93,    94,    -1,    96,    -1,    98,
      -1,   100,    -1,    -1,   103,    -1,    -1,    -1,   107,   108,
     109,   110,    -1,   112,   113,    -1,    -1,   116,    -1,    -1,
     119,    -1,   121,   122,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   131,   132,    -1,   134,   135,   136,   137,   138,
     139,   140,    -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,
      -1,    -1,    -1,   152,   153,   154,    -1,    -1,   157,    -1,
     159,   160,    -1,   162,    -1,   164,   165,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    -1,
      -1,    87,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,   122,   123,    12,    13,
      -1,    15,    -1,    -1,    -1,   131,   132,    -1,   134,   135,
     136,   137,   138,   139,   140,    -1,    -1,    -1,    -1,    -1,
      -1,   147,    36,    -1,    -1,    -1,   152,   153,   154,   155,
      -1,   157,   158,    -1,    48,    49,   162,    -1,   164,   165,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    -1,    -1,    87,    -1,    -1,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,   122,   123,
      12,    13,    -1,    15,    -1,    -1,    -1,   131,   132,    -1,
     134,   135,   136,   137,   138,   139,   140,    -1,    -1,    -1,
      -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,   152,   153,
     154,    -1,    -1,   157,    -1,    -1,    48,    49,   162,    -1,
     164,   165,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    68,    69,    70,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    -1,    -1,    87,    88,    -1,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
     122,   123,    12,    13,    -1,    15,    -1,    -1,    -1,   131,
     132,    -1,   134,   135,   136,   137,   138,   139,   140,    -1,
      30,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,
     152,   153,   154,    -1,    -1,   157,    -1,    -1,    48,    49,
     162,    -1,   164,   165,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    68,    69,
      70,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    -1,    -1,    87,    -1,    -1,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     110,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,   122,   123,    12,    13,    -1,    15,    -1,    -1,
      -1,   131,   132,    -1,   134,   135,   136,   137,   138,   139,
     140,    -1,    -1,    -1,    -1,    -1,    -1,   147,    36,    -1,
      -1,    -1,   152,   153,   154,    -1,    -1,   157,    -1,    -1,
      48,    49,   162,    -1,   164,   165,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      68,    69,    70,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    -1,    -1,    87,
      -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   110,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,   122,   123,    12,    13,    -1,    15,
      -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,   137,
     138,   139,   140,    -1,    -1,    -1,    -1,    -1,    -1,   147,
      36,    -1,    -1,    -1,   152,   153,   154,    -1,    -1,   157,
      -1,    -1,    48,    49,   162,    -1,   164,   165,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    -1,
      -1,    87,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,   122,   123,    12,    13,
      -1,    15,    -1,    -1,    -1,   131,   132,    -1,   134,   135,
     136,   137,   138,   139,   140,    -1,    -1,    -1,    -1,    -1,
      -1,   147,    -1,    -1,    -1,    -1,   152,   153,   154,    -1,
      -1,   157,    -1,    -1,    48,    49,   162,    -1,   164,   165,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    -1,    -1,    87,    -1,    -1,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,   122,   123,
      12,    13,    -1,    15,    -1,    -1,    -1,   131,   132,    -1,
     134,   135,   136,   137,   138,   139,   140,    -1,    -1,    -1,
      -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,   152,   153,
     154,   155,    -1,   157,    -1,    -1,    48,    49,   162,    -1,
     164,   165,    54,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    68,    69,    70,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    -1,    -1,    87,    -1,    -1,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
     122,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,
     132,    -1,   134,   135,   136,   137,   138,   139,   140,    -1,
      -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,
     152,   153,   154,    -1,    -1,   157,    -1,    -1,    -1,    -1,
     162,    55,   164,   165,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    70,    -1,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,    -1,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,   152,   153,
     154,    -1,    -1,    -1,    -1,    -1,    -1,   161,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    70,    -1,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,    -1,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   152,   153,   154,    -1,
      -1,    -1,    -1,    -1,    -1,   161,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    55,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,   161,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   161,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     161,    67,    10,    11,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    55,   161,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    70,    -1,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    -1,    83,
      -1,    -1,    -1,    -1,    -1,   161,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,    -1,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,     3,     4,     5,
       6,     7,    14,     9,    10,    11,    12,    13,   152,   153,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    70,    -1,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,    -1,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   152,   153,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,   159,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,   159,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,   159,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,   158,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,   158,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    55,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,   158,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
     158,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   158,    -1,    -1,    67,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,   158,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      68,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,   158,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   130,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   102,     9,    10,    11,    -1,    -1,    14,    -1,
      -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   160,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   167,   171,     0,     3,     4,     5,     6,     7,    12,
      13,    15,    48,    49,    54,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    68,    69,    70,    75,
      76,    77,    81,    82,    83,    84,    85,    87,    90,    91,
      92,    93,    94,    96,    98,   100,   103,   107,   108,   109,
     110,   111,   112,   113,   116,   117,   119,   121,   122,   123,
     124,   125,   126,   127,   131,   132,   134,   135,   136,   137,
     138,   139,   140,   147,   152,   153,   154,   157,   159,   160,
     162,   164,   165,   172,   173,   174,   189,   195,   198,   201,
     202,   203,   205,   218,   219,   220,   221,   261,   262,   263,
     269,   270,   275,   276,   277,   279,   281,   282,   283,   284,
     285,   286,   287,   299,    75,    83,   152,   263,   279,   279,
     157,   279,   279,   279,   279,   279,   279,   279,   279,   279,
      75,   157,   275,   277,   285,   285,   279,   279,   279,   279,
     279,   279,   279,   279,    36,   279,   293,   294,   295,   125,
     173,   259,   270,   271,   286,   288,   279,    84,   233,   234,
     263,    30,   157,   272,   157,   255,   256,   279,   189,   157,
     157,   157,   157,   157,   279,   280,   280,    83,    83,   186,
     254,   280,   160,   279,   110,   111,   154,   172,   177,   179,
     182,   184,   185,   231,   232,   286,   157,   157,   157,   157,
     200,   204,   206,   157,   157,    84,    86,   148,   149,   150,
     296,   297,   154,   172,   176,   172,   279,   187,    86,   273,
     296,    86,   296,   160,   286,   154,   157,   228,   125,   202,
      72,    73,    72,    73,    74,    36,   265,   151,    68,     9,
      10,    11,    29,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    55,    67,   159,   151,
      68,   130,   160,   228,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    57,    58,   265,
     279,    14,   279,   285,    14,   163,     8,   278,   260,   151,
     228,   274,    68,   130,   151,   160,    16,     8,   159,   265,
     280,   279,     8,   159,    94,   279,   257,   258,   279,   279,
     186,   279,   159,   159,   159,    16,     8,   159,   159,   187,
     159,   172,   184,   102,   154,   154,   172,   178,   182,   159,
       8,   159,     8,   159,   193,   194,   285,   279,   300,   301,
     279,   158,    83,    83,    83,   131,   285,   291,   292,   293,
      68,   130,   148,   297,    88,   279,   285,    86,   148,   297,
     172,   159,   175,   160,   158,   124,   161,   188,   189,   195,
     198,   203,   205,   162,   164,   279,    83,   155,   158,   229,
     230,   279,   199,   157,   189,   157,    30,   159,    83,   157,
       3,     4,     5,     6,     7,     9,    10,    11,    12,    13,
      55,    69,    70,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    83,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   152,   153,   160,   168,   169,   170,   286,
     289,   280,   279,   279,   279,    30,   279,   279,   279,   279,
     279,   279,   279,   279,   279,   279,   279,   279,   279,   279,
     279,   279,   279,   279,   279,   279,   279,   279,   279,   279,
     271,   279,   170,   286,   289,   280,    83,   160,   286,   290,
     279,    36,   279,   279,   279,   279,   279,   279,   279,   279,
     279,   279,   279,   279,   279,   158,   279,   158,    36,   279,
     295,   274,   286,   280,   290,   286,   279,   279,   234,   157,
     158,   158,   256,   157,   158,   159,     8,   102,   158,   158,
     279,   254,   161,   154,    83,   160,   172,   154,   159,   159,
     154,   172,   185,   232,     8,   158,     8,   158,   158,   159,
     128,   207,   264,   128,   208,   157,     8,   158,   158,    83,
      84,    89,   298,    83,    68,   161,   161,   161,   160,   171,
     157,   161,   279,     8,   158,    83,   279,   279,   187,   157,
     132,   133,   173,   222,   223,   224,   225,   226,   279,   228,
     163,   279,    30,   228,   163,   279,   228,   161,   285,   285,
     207,   163,   161,   222,    30,   189,   279,    30,   189,   217,
     257,   279,    36,   131,   210,   285,   190,    30,   160,   214,
     264,   191,   160,   177,   180,   183,   184,   154,   160,   194,
     159,   301,   173,   129,   209,   160,   173,   237,   264,   291,
     292,    16,   163,   279,   171,   161,   158,   230,   207,   158,
     158,    74,   222,   158,     8,    36,   196,   161,   279,   161,
     209,   158,   187,   158,   187,   159,   285,   157,    14,   158,
      30,   189,   213,   159,   215,   159,   215,   114,   115,   192,
     180,   184,     8,   161,   160,   181,   184,   237,   264,   235,
       8,   160,   158,   279,   163,   161,   159,   209,   189,    30,
     159,   158,   117,   266,   224,   155,   197,   264,   266,   159,
      95,   257,   291,   210,    30,   189,   212,   187,   215,   104,
     105,   106,   215,   161,   157,   160,   161,   183,   181,     8,
     161,   160,    75,    76,    77,    78,    79,    80,   117,   120,
     161,   236,   246,   247,   248,   249,   173,   235,   161,   264,
     187,    30,   227,   157,   227,    84,   160,   227,   159,   158,
     158,   158,   187,   101,   104,   159,   279,    30,   159,   216,
     161,   173,   187,   161,   184,   235,   237,    84,   250,   251,
     111,   263,   249,   161,   160,   226,   264,    36,    84,   267,
     268,   264,    16,   235,   264,    30,   189,   211,   212,    99,
     159,   159,   216,   187,    84,   161,   161,   159,   160,   238,
      16,   264,     8,   159,   170,   252,   253,   265,   235,   160,
      84,     8,   158,   160,   279,   161,   160,   187,   159,   187,
     158,    83,   152,   161,   170,   173,   239,   240,   241,   242,
     243,   244,   279,   251,    16,     8,   159,   170,   161,   187,
     268,   187,   187,    97,   160,   151,   161,   240,   159,   159,
     102,   118,   264,   279,   253,   157,   161,   161,   161,   159,
     187,   170,    83,   168,   249,   237,   264,   222,   161,   170,
     158,   227,   264,   159,   160,   245,   187,   161
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   166,   167,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   169,   169,   169,   169,   169,   169,   169,   170,   170,
     171,   171,   172,   172,   173,   173,   173,   174,   174,   174,
     174,   174,   174,   174,   175,   174,   176,   174,   174,   174,
     174,   174,   174,   177,   177,   178,   178,   179,   179,   180,
     180,   181,   181,   182,   182,   183,   183,   184,   184,   185,
     185,   186,   186,   187,   187,   188,   188,   188,   188,   188,
     188,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   190,
     189,   189,   189,   189,   189,   189,   191,   191,   192,   192,
     193,   193,   194,   195,   196,   196,   197,   197,   199,   198,
     200,   198,   201,   201,   202,   202,   204,   203,   206,   205,
     207,   207,   208,   208,   209,   209,   210,   210,   210,   211,
     211,   212,   212,   213,   213,   214,   214,   214,   214,   215,
     215,   215,   216,   216,   217,   217,   218,   218,   219,   219,
     220,   220,   221,   221,   222,   222,   223,   223,   224,   224,
     225,   225,   226,   226,   226,   227,   227,   228,   228,   229,
     229,   230,   230,   231,   231,   232,   233,   233,   234,   234,
     235,   235,   236,   236,   236,   236,   237,   237,   238,   238,
     238,   239,   239,   240,   240,   241,   242,   242,   242,   242,
     243,   243,   244,   245,   245,   246,   246,   247,   247,   248,
     248,   249,   249,   249,   249,   249,   249,   250,   250,   251,
     251,   252,   252,   253,   254,   255,   255,   256,   257,   257,
     258,   258,   260,   259,   261,   261,   262,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   263,   264,   265,   265,   266,   266,   267,   267,   268,
     268,   269,   269,   269,   269,   270,   270,   271,   271,   272,
     272,   273,   273,   273,   274,   274,   275,   275,   275,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   277,   277,   277,   278,   278,
     279,   279,   280,   280,   281,   282,   282,   282,   283,   283,
     283,   284,   284,   284,   284,   284,   284,   285,   285,   285,
     286,   286,   286,   287,   287,   288,   288,   288,   288,   288,
     288,   289,   289,   289,   290,   290,   290,   291,   291,   292,
     292,   292,   293,   293,   294,   294,   295,   295,   295,   295,
     296,   296,   296,   296,   297,   297,   297,   297,   297,   297,
     297,   298,   298,   298,   299,   299,   299,   299,   299,   299,
     299,   300,   300,   301
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     0,     1,     3,     1,     3,     2,     1,     1,     1,
       1,     1,     4,     3,     0,     6,     0,     5,     3,     4,
       3,     4,     3,     1,     1,     5,     6,     5,     6,     3,
       1,     3,     1,     3,     1,     1,     2,     1,     3,     1,
       2,     3,     1,     2,     0,     1,     1,     1,     1,     1,
       4,     3,     1,     1,     5,     7,     9,     5,     3,     3,
       3,     3,     3,     3,     1,     2,     5,     7,     9,     0,
       6,     1,     6,     3,     3,     2,     0,     9,     0,     4,
       1,     3,     1,    11,     0,     1,     0,     1,     0,    10,
       0,     9,     1,     2,     1,     1,     0,     7,     0,     8,
       0,     2,     0,     2,     0,     2,     1,     2,     4,     1,
       4,     1,     4,     1,     4,     3,     4,     4,     5,     0,
       5,     4,     1,     1,     1,     4,     5,     6,     1,     3,
       6,     7,     3,     6,     1,     0,     1,     3,     4,     6,
       0,     1,     1,     1,     1,     0,     2,     2,     3,     1,
       3,     1,     2,     3,     1,     1,     3,     1,     1,     3,
       2,     0,     3,     4,     3,    10,     1,     3,     1,     2,
       3,     1,     2,     2,     2,     3,     3,     3,     4,     3,
       1,     1,     3,     1,     3,     1,     1,     0,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     3,     1,     2,
       4,     3,     1,     4,     4,     3,     1,     1,     0,     1,
       3,     1,     0,     9,     3,     2,     6,     3,     4,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     5,
       4,     3,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     3,     2,     1,     2,     4,     2,    11,
      12,     1,     0,     0,     1,     0,     4,     3,     1,     1,
       2,     2,     4,     4,     2,     1,     1,     1,     1,     0,
       3,     0,     1,     1,     0,     1,     4,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       2,     3,     3,     1,     1,     1,     3,     3,     0,     1,
       1,     1,     0,     1,     1,     1,     3,     1,     1,     3,
       1,     1,     4,     4,     4,     4,     1,     1,     1,     3,
       1,     4,     2,     3,     3,     1,     4,     4,     3,     3,
       3,     1,     3,     1,     1,     3,     1,     3,     1,     1,
       4,     0,     0,     2,     3,     1,     3,     1,     4,     2,
       2,     2,     1,     2,     1,     4,     3,     3,     3,     6,
       3,     1,     1,     1,     4,     4,     2,     2,     4,     2,
       2,     1,     3,     1
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 81: /* "integer number (T_LNUMBER)"  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3313 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 82: /* "floating-point number (T_DNUMBER)"  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3319 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 83: /* "identifier (T_STRING)"  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3325 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 84: /* "variable (T_VARIABLE)"  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3331 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 85: /* T_INLINE_HTML  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3337 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 86: /* "quoted-string and whitespace (T_ENCAPSED_AND_WHITESPACE)"  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3343 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 87: /* "quoted-string (T_CONSTANT_ENCAPSED_STRING)"  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3349 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 88: /* "variable name (T_STRING_VARNAME)"  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3355 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 89: /* "number (T_NUM_STRING)"  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3361 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 170: /* identifier  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3367 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 171: /* top_statement_list  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3373 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 172: /* namespace_name  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3379 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 173: /* name  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3385 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 174: /* top_statement  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3391 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 178: /* group_use_declaration  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3397 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 179: /* mixed_group_use_declaration  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3403 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 180: /* inline_use_declarations  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3409 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 181: /* unprefixed_use_declarations  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3415 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 182: /* use_declarations  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3421 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 183: /* inline_use_declaration  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3427 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 184: /* unprefixed_use_declaration  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3433 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 185: /* use_declaration  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3439 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 186: /* const_list  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3445 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 187: /* inner_statement_list  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3451 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 188: /* inner_statement  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3457 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 189: /* statement  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3463 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 191: /* catch_list  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3469 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 192: /* finally_statement  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3475 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 193: /* unset_variables  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3481 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 194: /* unset_variable  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3487 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 195: /* function_declaration_statement  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3493 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 198: /* class_declaration_statement  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3499 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 203: /* trait_declaration_statement  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3505 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 205: /* interface_declaration_statement  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3511 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 207: /* extends_from  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3517 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 208: /* interface_extends_list  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3523 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 209: /* implements_list  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3529 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 210: /* foreach_variable  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3535 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 211: /* for_statement  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3541 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 212: /* foreach_statement  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3547 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 213: /* declare_statement  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3553 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 214: /* switch_case_list  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3559 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 215: /* case_list  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3565 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 217: /* while_statement  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3571 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 218: /* if_stmt_without_else  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3577 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 219: /* if_stmt  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3583 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 220: /* alt_if_stmt_without_else  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3589 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 221: /* alt_if_stmt  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3595 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 222: /* parameter_list  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3601 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 223: /* non_empty_parameter_list  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3607 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 224: /* parameter  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3613 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 225: /* optional_type  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3619 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 226: /* type  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3625 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 227: /* return_type  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3631 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 228: /* argument_list  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3637 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 229: /* non_empty_argument_list  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3643 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 230: /* argument  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3649 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 231: /* global_var_list  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3655 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 232: /* global_var  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3661 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 233: /* static_var_list  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3667 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 234: /* static_var  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3673 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 235: /* class_statement_list  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3679 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 236: /* class_statement  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3685 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 237: /* name_list  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3691 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 238: /* trait_adaptations  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3697 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 239: /* trait_adaptation_list  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3703 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 240: /* trait_adaptation  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3709 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 241: /* trait_precedence  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3715 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 242: /* trait_alias  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3721 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 243: /* trait_method_reference  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3727 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 244: /* absolute_trait_method_reference  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3733 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 245: /* method_body  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3739 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 250: /* property_list  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3745 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 251: /* property  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3751 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 252: /* class_const_list  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3757 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 253: /* class_const_decl  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3763 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 254: /* const_decl  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3769 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 255: /* echo_expr_list  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3775 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 256: /* echo_expr  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3781 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 257: /* for_exprs  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3787 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 258: /* non_empty_for_exprs  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3793 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 259: /* anonymous_class  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3799 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 261: /* new_expr  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3805 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 262: /* expr_without_variable  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3811 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 264: /* backup_doc_comment  */
#line 53 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { if (((*yyvaluep).str)) zend_string_release(((*yyvaluep).str)); }
#line 3817 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 266: /* lexical_vars  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3823 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 267: /* lexical_var_list  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3829 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 268: /* lexical_var  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3835 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 269: /* function_call  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3841 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 270: /* class_name  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3847 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 271: /* class_name_reference  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3853 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 272: /* exit_expr  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3859 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 273: /* backticks_expr  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3865 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 274: /* ctor_arguments  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3871 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 275: /* dereferencable_scalar  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3877 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 276: /* scalar  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3883 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 277: /* constant  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3889 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 279: /* expr  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3895 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 280: /* optional_expr  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3901 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 281: /* variable_class_name  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3907 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 282: /* dereferencable  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3913 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 283: /* callable_expr  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3919 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 284: /* callable_variable  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3925 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 285: /* variable  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3931 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 286: /* simple_variable  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3937 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 287: /* static_member  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3943 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 288: /* new_variable  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3949 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 289: /* member_name  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3955 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 290: /* property_name  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3961 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 291: /* assignment_list  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3967 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 292: /* assignment_list_element  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3973 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 293: /* array_pair_list  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3979 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 294: /* non_empty_array_pair_list  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3985 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 295: /* array_pair  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3991 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 296: /* encaps_list  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3997 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 297: /* encaps_var  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4003 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 298: /* encaps_var_offset  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4009 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 299: /* internal_functions_in_yacc  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4015 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 300: /* isset_variables  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4021 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;

    case 301: /* isset_variable  */
#line 52 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1257  */
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4027 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1257  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
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
      yychar = yylex (&yylval);
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
        case 2:
#line 265 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { CG(ast) = (yyvsp[0].ast); }
#line 4295 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 284 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4301 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 285 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    {
			zval zv;
			zend_lex_tstring(&zv);
			(yyval.ast) = zend_ast_create_zval(&zv);
		}
#line 4311 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 293 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 4317 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 294 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_STMT_LIST); }
#line 4323 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 298 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4329 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 299 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_append_str((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4335 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 303 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_NAME_NOT_FQ; }
#line 4341 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 304 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_NAME_RELATIVE; }
#line 4347 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 305 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_NAME_FQ; }
#line 4353 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 309 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4359 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 88:
#line 310 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4365 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 311 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4371 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 90:
#line 312 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4377 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 91:
#line 313 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4383 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 92:
#line 315 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_HALT_COMPILER,
			      zend_ast_create_zval_from_long(zend_get_scanned_file_offset()));
			  zend_stop_lexing(); }
#line 4391 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 93:
#line 319 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_NAMESPACE, (yyvsp[-1].ast), NULL);
			  RESET_DOC_COMMENT(); }
#line 4398 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 94:
#line 321 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { RESET_DOC_COMMENT(); }
#line 4404 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 323 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_NAMESPACE, (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 4410 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 324 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { RESET_DOC_COMMENT(); }
#line 4416 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 326 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_NAMESPACE, NULL, (yyvsp[-1].ast)); }
#line 4422 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 327 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 4428 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 99:
#line 328 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = (yyvsp[-2].num); }
#line 4434 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 329 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = T_CLASS; }
#line 4440 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 101:
#line 330 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = (yyvsp[-2].num); }
#line 4446 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 102:
#line 331 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 4452 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 103:
#line 335 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.num) = T_FUNCTION; }
#line 4458 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 104:
#line 336 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.num) = T_CONST; }
#line 4464 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 105:
#line 341 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_GROUP_USE, (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 4470 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 106:
#line 343 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_GROUP_USE, (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 4476 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 107:
#line 348 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_GROUP_USE, (yyvsp[-4].ast), (yyvsp[-1].ast));}
#line 4482 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 108:
#line 350 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_GROUP_USE, (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 4488 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 109:
#line 355 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4494 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 110:
#line 357 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_USE, (yyvsp[0].ast)); }
#line 4500 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 111:
#line 362 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4506 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 112:
#line 364 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_USE, (yyvsp[0].ast)); }
#line 4512 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 113:
#line 369 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4518 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 114:
#line 371 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_USE, (yyvsp[0].ast)); }
#line 4524 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 115:
#line 375 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = T_CLASS; }
#line 4530 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 116:
#line 376 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = (yyvsp[-1].num); }
#line 4536 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 117:
#line 381 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_USE_ELEM, (yyvsp[0].ast), NULL); }
#line 4542 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 383 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_USE_ELEM, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4548 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 119:
#line 387 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4554 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 120:
#line 388 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4560 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 121:
#line 392 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4566 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 122:
#line 393 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_CONST_DECL, (yyvsp[0].ast)); }
#line 4572 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 123:
#line 398 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 4578 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 124:
#line 400 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_STMT_LIST); }
#line 4584 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 125:
#line 405 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4590 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 126:
#line 406 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4596 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 127:
#line 407 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4602 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 408 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4608 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 129:
#line 409 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4614 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 411 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = NULL; zend_error_noreturn(E_COMPILE_ERROR,
			      "__HALT_COMPILER() can only be used from the outermost scope"); }
#line 4621 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 131:
#line 417 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 4627 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 132:
#line 418 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4633 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 133:
#line 419 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4639 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 134:
#line 421 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_WHILE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4645 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 135:
#line 423 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_DO_WHILE, (yyvsp[-5].ast), (yyvsp[-2].ast)); }
#line 4651 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 136:
#line 425 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_FOR, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4657 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 137:
#line 427 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_SWITCH, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4663 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 138:
#line 428 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_BREAK, (yyvsp[-1].ast)); }
#line 4669 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 139:
#line 429 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_CONTINUE, (yyvsp[-1].ast)); }
#line 4675 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 140:
#line 430 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_RETURN, (yyvsp[-1].ast)); }
#line 4681 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 141:
#line 431 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 4687 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 142:
#line 432 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 4693 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 143:
#line 433 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 4699 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 434 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_ECHO, (yyvsp[0].ast)); }
#line 4705 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 435 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 4711 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 146:
#line 436 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-2].ast); }
#line 4717 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 147:
#line 438 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_FOREACH, (yyvsp[-4].ast), (yyvsp[-2].ast), NULL, (yyvsp[0].ast)); }
#line 4723 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 148:
#line 441 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_FOREACH, (yyvsp[-6].ast), (yyvsp[-2].ast), (yyvsp[-4].ast), (yyvsp[0].ast)); }
#line 4729 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 149:
#line 443 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { zend_handle_encoding_declaration((yyvsp[-1].ast)); }
#line 4735 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 150:
#line 445 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_DECLARE, (yyvsp[-3].ast), (yyvsp[0].ast)); }
#line 4741 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 151:
#line 446 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = NULL; }
#line 4747 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 152:
#line 448 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_TRY, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 4753 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 153:
#line 449 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_THROW, (yyvsp[-1].ast)); }
#line 4759 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 154:
#line 450 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_GOTO, (yyvsp[-1].ast)); }
#line 4765 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 155:
#line 451 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_LABEL, (yyvsp[-1].ast)); }
#line 4771 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 156:
#line 456 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_CATCH_LIST); }
#line 4777 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 157:
#line 458 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-8].ast), zend_ast_create(ZEND_AST_CATCH, (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-1].ast))); }
#line 4783 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 158:
#line 462 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = NULL; }
#line 4789 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 159:
#line 463 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 4795 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 160:
#line 467 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[0].ast)); }
#line 4801 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 161:
#line 468 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4807 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 162:
#line 472 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_UNSET, (yyvsp[0].ast)); }
#line 4813 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 163:
#line 478 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_FUNC_DECL, (yyvsp[-9].num), (yyvsp[-10].num), (yyvsp[-3].str),
		      zend_ast_get_str((yyvsp[-8].ast)), (yyvsp[-6].ast), NULL, (yyvsp[-1].ast), (yyvsp[-4].ast)); }
#line 4820 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 164:
#line 483 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.num) = 0; }
#line 4826 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 165:
#line 484 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.num) = ZEND_PARAM_REF; }
#line 4832 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 166:
#line 488 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.num) = 0; }
#line 4838 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 167:
#line 489 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.num) = ZEND_PARAM_VARIADIC; }
#line 4844 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 168:
#line 493 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.num) = CG(zend_lineno); }
#line 4850 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 169:
#line 495 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, (yyvsp[-9].num), (yyvsp[-7].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-6].ast)), (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-1].ast), NULL); }
#line 4856 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 170:
#line 496 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.num) = CG(zend_lineno); }
#line 4862 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 171:
#line 498 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, 0, (yyvsp[-7].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-6].ast)), (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-1].ast), NULL); }
#line 4868 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 172:
#line 502 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.num) = (yyvsp[0].num); }
#line 4874 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 173:
#line 503 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.num) = zend_add_class_modifier((yyvsp[-1].num), (yyvsp[0].num)); }
#line 4880 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 174:
#line 507 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.num) = ZEND_ACC_EXPLICIT_ABSTRACT_CLASS; }
#line 4886 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 175:
#line 508 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.num) = ZEND_ACC_FINAL; }
#line 4892 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 176:
#line 512 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.num) = CG(zend_lineno); }
#line 4898 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 177:
#line 514 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, ZEND_ACC_TRAIT, (yyvsp[-5].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-4].ast)), NULL, NULL, (yyvsp[-1].ast), NULL); }
#line 4904 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 178:
#line 518 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.num) = CG(zend_lineno); }
#line 4910 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 179:
#line 520 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, ZEND_ACC_INTERFACE, (yyvsp[-6].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-5].ast)), NULL, (yyvsp[-4].ast), (yyvsp[-1].ast), NULL); }
#line 4916 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 180:
#line 524 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = NULL; }
#line 4922 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 181:
#line 525 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4928 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 182:
#line 529 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = NULL; }
#line 4934 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 183:
#line 530 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4940 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 184:
#line 534 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = NULL; }
#line 4946 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 185:
#line 535 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4952 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 186:
#line 539 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4958 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 187:
#line 540 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_REF, (yyvsp[0].ast)); }
#line 4964 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 188:
#line 541 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 4970 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 189:
#line 545 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4976 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 190:
#line 546 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-2].ast); }
#line 4982 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 191:
#line 550 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4988 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 192:
#line 551 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-2].ast); }
#line 4994 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 193:
#line 555 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5000 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 194:
#line 556 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-2].ast); }
#line 5006 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 195:
#line 560 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 5012 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 196:
#line 561 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 5018 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 197:
#line 562 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-2].ast); }
#line 5024 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 198:
#line 563 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-2].ast); }
#line 5030 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 199:
#line 567 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_SWITCH_LIST); }
#line 5036 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 200:
#line 569 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-4].ast), zend_ast_create(ZEND_AST_SWITCH_CASE, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 5042 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 201:
#line 571 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-3].ast), zend_ast_create(ZEND_AST_SWITCH_CASE, NULL, (yyvsp[0].ast))); }
#line 5048 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 204:
#line 581 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5054 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 205:
#line 582 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-2].ast); }
#line 5060 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 206:
#line 588 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_IF,
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 5067 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 207:
#line 591 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-5].ast),
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 5074 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 208:
#line 596 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5080 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 209:
#line 598 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), zend_ast_create(ZEND_AST_IF_ELEM, NULL, (yyvsp[0].ast))); }
#line 5086 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 210:
#line 603 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_IF,
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[-3].ast), (yyvsp[0].ast))); }
#line 5093 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 211:
#line 606 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-6].ast),
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[-3].ast), (yyvsp[0].ast))); }
#line 5100 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 212:
#line 611 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-2].ast); }
#line 5106 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 213:
#line 613 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-5].ast),
			      zend_ast_create(ZEND_AST_IF_ELEM, NULL, (yyvsp[-2].ast))); }
#line 5113 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 214:
#line 618 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5119 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 215:
#line 619 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_PARAM_LIST); }
#line 5125 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 216:
#line 625 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_PARAM_LIST, (yyvsp[0].ast)); }
#line 5131 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 217:
#line 627 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5137 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 218:
#line 632 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_PARAM, (yyvsp[-2].num) | (yyvsp[-1].num), (yyvsp[-3].ast), (yyvsp[0].ast), NULL); }
#line 5143 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 219:
#line 634 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_PARAM, (yyvsp[-4].num) | (yyvsp[-3].num), (yyvsp[-5].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5149 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 220:
#line 639 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = NULL; }
#line 5155 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 221:
#line 640 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5161 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 222:
#line 644 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TYPE, IS_ARRAY); }
#line 5167 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 223:
#line 645 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TYPE, IS_CALLABLE); }
#line 5173 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 224:
#line 646 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5179 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 225:
#line 650 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = NULL; }
#line 5185 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 226:
#line 651 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5191 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 227:
#line 655 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_ARG_LIST); }
#line 5197 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 228:
#line 656 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 5203 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 229:
#line 661 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ARG_LIST, (yyvsp[0].ast)); }
#line 5209 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 230:
#line 663 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5215 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 231:
#line 667 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5221 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 232:
#line 668 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_UNPACK, (yyvsp[0].ast)); }
#line 5227 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 233:
#line 672 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5233 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 234:
#line 673 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[0].ast)); }
#line 5239 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 235:
#line 678 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_GLOBAL, zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast))); }
#line 5245 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 236:
#line 683 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5251 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 237:
#line 684 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[0].ast)); }
#line 5257 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 238:
#line 688 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC, (yyvsp[0].ast), NULL); }
#line 5263 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 239:
#line 689 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5269 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 240:
#line 695 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 5275 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 241:
#line 697 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_STMT_LIST); }
#line 5281 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 242:
#line 703 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = (yyvsp[-2].num); }
#line 5287 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 243:
#line 705 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = (yyvsp[-3].num); }
#line 5293 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 244:
#line 707 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_USE_TRAIT, (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 5299 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 245:
#line 710 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_METHOD, (yyvsp[-7].num) | (yyvsp[-9].num), (yyvsp[-8].num), (yyvsp[-1].str),
				  zend_ast_get_str((yyvsp[-6].ast)), (yyvsp[-4].ast), NULL, (yyvsp[0].ast), (yyvsp[-2].ast)); }
#line 5306 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 246:
#line 715 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_NAME_LIST, (yyvsp[0].ast)); }
#line 5312 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 247:
#line 716 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5318 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 248:
#line 720 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = NULL; }
#line 5324 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 249:
#line 721 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = NULL; }
#line 5330 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 250:
#line 722 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 5336 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 251:
#line 727 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_TRAIT_ADAPTATIONS, (yyvsp[0].ast)); }
#line 5342 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 252:
#line 729 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 5348 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 253:
#line 733 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 5354 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 254:
#line 734 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 5360 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 255:
#line 739 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_TRAIT_PRECEDENCE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5366 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 256:
#line 744 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TRAIT_ALIAS, 0, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5372 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 257:
#line 746 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { zval zv; zend_lex_tstring(&zv); (yyval.ast) = zend_ast_create_ex(ZEND_AST_TRAIT_ALIAS, 0, (yyvsp[-2].ast), zend_ast_create_zval(&zv)); }
#line 5378 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 258:
#line 748 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TRAIT_ALIAS, (yyvsp[-1].num), (yyvsp[-3].ast), (yyvsp[0].ast)); }
#line 5384 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 259:
#line 750 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TRAIT_ALIAS, (yyvsp[0].num), (yyvsp[-2].ast), NULL); }
#line 5390 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 260:
#line 755 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_METHOD_REFERENCE, NULL, (yyvsp[0].ast)); }
#line 5396 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 261:
#line 756 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5402 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 262:
#line 761 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_METHOD_REFERENCE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5408 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 263:
#line 765 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = NULL; }
#line 5414 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 264:
#line 766 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 5420 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 265:
#line 770 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.num) = (yyvsp[0].num); }
#line 5426 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 266:
#line 771 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.num) = ZEND_ACC_PUBLIC; }
#line 5432 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 267:
#line 775 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.num) = ZEND_ACC_PUBLIC; }
#line 5438 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 268:
#line 777 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.num) = (yyvsp[0].num); if (!((yyval.num) & ZEND_ACC_PPP_MASK)) { (yyval.num) |= ZEND_ACC_PUBLIC; } }
#line 5444 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 269:
#line 781 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.num) = (yyvsp[0].num); }
#line 5450 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 270:
#line 783 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.num) = zend_add_member_modifier((yyvsp[-1].num), (yyvsp[0].num)); }
#line 5456 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 271:
#line 787 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.num) = ZEND_ACC_PUBLIC; }
#line 5462 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 272:
#line 788 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.num) = ZEND_ACC_PROTECTED; }
#line 5468 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 273:
#line 789 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.num) = ZEND_ACC_PRIVATE; }
#line 5474 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 274:
#line 790 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.num) = ZEND_ACC_STATIC; }
#line 5480 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 275:
#line 791 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.num) = ZEND_ACC_ABSTRACT; }
#line 5486 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 276:
#line 792 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.num) = ZEND_ACC_FINAL; }
#line 5492 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 277:
#line 796 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5498 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 278:
#line 797 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_PROP_DECL, (yyvsp[0].ast)); }
#line 5504 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 279:
#line 802 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP_ELEM, (yyvsp[-1].ast), NULL, ((yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL)); }
#line 5510 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 280:
#line 804 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP_ELEM, (yyvsp[-3].ast), (yyvsp[-1].ast), ((yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL)); }
#line 5516 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 281:
#line 808 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5522 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 282:
#line 809 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_CLASS_CONST_DECL, (yyvsp[0].ast)); }
#line 5528 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 283:
#line 813 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_CONST_ELEM, (yyvsp[-3].ast), (yyvsp[-1].ast), ((yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL)); }
#line 5534 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 284:
#line 817 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_CONST_ELEM, (yyvsp[-3].ast), (yyvsp[-1].ast), ((yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL)); }
#line 5540 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 285:
#line 821 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5546 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 286:
#line 822 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[0].ast)); }
#line 5552 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 287:
#line 825 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_ECHO, (yyvsp[0].ast)); }
#line 5558 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 288:
#line 829 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = NULL; }
#line 5564 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 289:
#line 830 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5570 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 290:
#line 834 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5576 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 291:
#line 835 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_EXPR_LIST, (yyvsp[0].ast)); }
#line 5582 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 292:
#line 839 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.num) = CG(zend_lineno); }
#line 5588 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 293:
#line 840 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    {
			zend_ast *decl = zend_ast_create_decl(
				ZEND_AST_CLASS, ZEND_ACC_ANON_CLASS, (yyvsp[-7].num), (yyvsp[-3].str), NULL,
				(yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-1].ast), NULL);
			(yyval.ast) = zend_ast_create(ZEND_AST_NEW, decl, (yyvsp[-6].ast));
		}
#line 5599 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 294:
#line 850 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_NEW, (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 5605 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 295:
#line 852 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5611 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 296:
#line 857 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN, (yyvsp[-3].ast), (yyvsp[0].ast)); }
#line 5617 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 297:
#line 859 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5623 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 298:
#line 861 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN_REF, (yyvsp[-3].ast), (yyvsp[0].ast)); }
#line 5629 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 299:
#line 862 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_CLONE, (yyvsp[0].ast)); }
#line 5635 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 300:
#line 864 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_ADD, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5641 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 301:
#line 866 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_SUB, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5647 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 302:
#line 868 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_MUL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5653 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 303:
#line 870 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_POW, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5659 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 304:
#line 872 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_DIV, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5665 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 305:
#line 874 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_CONCAT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5671 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 306:
#line 876 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_MOD, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5677 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 307:
#line 878 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_BW_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5683 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 308:
#line 880 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_BW_OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5689 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 309:
#line 882 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_BW_XOR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5695 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 310:
#line 884 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_SL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5701 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 311:
#line 886 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ASSIGN_SR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5707 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 312:
#line 887 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_POST_INC, (yyvsp[-1].ast)); }
#line 5713 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 313:
#line 888 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_PRE_INC, (yyvsp[0].ast)); }
#line 5719 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 314:
#line 889 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_POST_DEC, (yyvsp[-1].ast)); }
#line 5725 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 315:
#line 890 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_PRE_DEC, (yyvsp[0].ast)); }
#line 5731 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 316:
#line 892 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5737 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 317:
#line 894 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5743 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 318:
#line 896 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5749 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 319:
#line 898 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5755 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 320:
#line 900 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_BOOL_XOR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5761 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 321:
#line 901 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_BW_OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5767 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 322:
#line 902 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_BW_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5773 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 323:
#line 903 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_BW_XOR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5779 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 324:
#line 904 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_CONCAT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5785 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 325:
#line 905 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_ADD, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5791 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 326:
#line 906 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_SUB, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5797 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 327:
#line 907 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_MUL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5803 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 328:
#line 908 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_POW, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5809 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 329:
#line 909 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_DIV, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5815 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 330:
#line 910 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_MOD, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5821 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 331:
#line 911 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_SL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5827 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 332:
#line 912 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_SR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5833 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 333:
#line 913 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_UNARY_PLUS, (yyvsp[0].ast)); }
#line 5839 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 334:
#line 914 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_UNARY_MINUS, (yyvsp[0].ast)); }
#line 5845 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 335:
#line 915 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_UNARY_OP, ZEND_BOOL_NOT, (yyvsp[0].ast)); }
#line 5851 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 336:
#line 916 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_UNARY_OP, ZEND_BW_NOT, (yyvsp[0].ast)); }
#line 5857 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 337:
#line 918 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_IDENTICAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5863 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 338:
#line 920 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_NOT_IDENTICAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5869 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 339:
#line 922 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5875 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 340:
#line 924 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_NOT_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5881 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 341:
#line 926 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_SMALLER, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5887 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 342:
#line 928 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_SMALLER_OR_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5893 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 343:
#line 930 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_GREATER, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5899 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 344:
#line 932 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_GREATER_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5905 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 345:
#line 934 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_SPACESHIP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5911 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 346:
#line 936 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_INSTANCEOF, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5917 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 347:
#line 937 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 5923 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 348:
#line 938 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5929 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 349:
#line 940 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_CONDITIONAL, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5935 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 350:
#line 942 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_CONDITIONAL, (yyvsp[-3].ast), NULL, (yyvsp[0].ast)); }
#line 5941 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 351:
#line 944 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_COALESCE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5947 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 352:
#line 945 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5953 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 353:
#line 946 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_cast(IS_LONG, (yyvsp[0].ast)); }
#line 5959 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 354:
#line 947 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_cast(IS_DOUBLE, (yyvsp[0].ast)); }
#line 5965 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 355:
#line 948 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_cast(IS_STRING, (yyvsp[0].ast)); }
#line 5971 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 356:
#line 949 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_cast(IS_ARRAY, (yyvsp[0].ast)); }
#line 5977 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 357:
#line 950 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_cast(IS_OBJECT, (yyvsp[0].ast)); }
#line 5983 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 358:
#line 951 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_cast(_IS_BOOL, (yyvsp[0].ast)); }
#line 5989 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 359:
#line 952 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_cast(IS_NULL, (yyvsp[0].ast)); }
#line 5995 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 360:
#line 953 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_EXIT, (yyvsp[0].ast)); }
#line 6001 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 361:
#line 954 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_SILENCE, (yyvsp[0].ast)); }
#line 6007 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 362:
#line 955 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6013 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 363:
#line 956 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_SHELL_EXEC, (yyvsp[-1].ast)); }
#line 6019 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 364:
#line 957 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_PRINT, (yyvsp[0].ast)); }
#line 6025 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 365:
#line 958 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD, NULL, NULL); }
#line 6031 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 366:
#line 959 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD, (yyvsp[0].ast), NULL); }
#line 6037 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 367:
#line 960 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD, (yyvsp[0].ast), (yyvsp[-2].ast)); }
#line 6043 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 368:
#line 961 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD_FROM, (yyvsp[0].ast)); }
#line 6049 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 369:
#line 964 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLOSURE, (yyvsp[-9].num), (yyvsp[-10].num), (yyvsp[-3].str),
				  zend_string_init("{closure}", sizeof("{closure}") - 1, 0),
			      (yyvsp[-7].ast), (yyvsp[-5].ast), (yyvsp[-1].ast), (yyvsp[-4].ast)); }
#line 6057 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 370:
#line 969 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLOSURE, (yyvsp[-9].num) | ZEND_ACC_STATIC, (yyvsp[-10].num), (yyvsp[-3].str),
			      zend_string_init("{closure}", sizeof("{closure}") - 1, 0),
			      (yyvsp[-7].ast), (yyvsp[-5].ast), (yyvsp[-1].ast), (yyvsp[-4].ast)); }
#line 6065 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 371:
#line 975 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.num) = CG(zend_lineno); }
#line 6071 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 372:
#line 979 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.str) = CG(doc_comment); CG(doc_comment) = NULL; }
#line 6077 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 373:
#line 983 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.num) = 0; }
#line 6083 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 374:
#line 984 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.num) = ZEND_ACC_RETURN_REFERENCE; }
#line 6089 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 375:
#line 988 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = NULL; }
#line 6095 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 376:
#line 989 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 6101 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 377:
#line 993 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6107 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 378:
#line 994 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_CLOSURE_USES, (yyvsp[0].ast)); }
#line 6113 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 379:
#line 998 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6119 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 380:
#line 999 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = 1; }
#line 6125 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 381:
#line 1004 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_CALL, (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6131 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 382:
#line 1006 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_CALL, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6137 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 383:
#line 1008 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_CALL, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6143 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 384:
#line 1010 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_CALL, (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6149 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 385:
#line 1015 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { zval zv; ZVAL_STRINGL(&zv, "static", sizeof("static")-1);
			  (yyval.ast) = zend_ast_create_zval_ex(&zv, ZEND_NAME_NOT_FQ); }
#line 6156 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 386:
#line 1017 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6162 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 387:
#line 1021 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6168 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 388:
#line 1022 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6174 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 389:
#line 1026 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = NULL; }
#line 6180 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 390:
#line 1027 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 6186 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 391:
#line 1032 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_zval_from_str(ZSTR_EMPTY_ALLOC()); }
#line 6192 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 392:
#line 1033 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6198 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 393:
#line 1034 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6204 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 394:
#line 1039 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_ARG_LIST); }
#line 6210 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 395:
#line 1040 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6216 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 396:
#line 1045 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 6222 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 397:
#line 1046 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 6228 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 398:
#line 1047 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6234 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 399:
#line 1051 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6240 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 400:
#line 1052 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6246 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 401:
#line 1053 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_LINE); }
#line 6252 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 402:
#line 1054 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_FILE); }
#line 6258 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 403:
#line 1055 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_DIR); }
#line 6264 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 404:
#line 1056 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_TRAIT_C); }
#line 6270 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 405:
#line 1057 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_METHOD_C); }
#line 6276 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 406:
#line 1058 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_FUNC_C); }
#line 6282 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 407:
#line 1059 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_NS_C); }
#line 6288 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 408:
#line 1060 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_CLASS_C); }
#line 6294 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 409:
#line 1061 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 6300 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 410:
#line 1063 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_zval_from_str(ZSTR_EMPTY_ALLOC()); }
#line 6306 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 411:
#line 1064 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 6312 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 412:
#line 1065 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 6318 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 413:
#line 1066 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6324 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 414:
#line 1067 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6330 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 415:
#line 1071 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_CONST, (yyvsp[0].ast)); }
#line 6336 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 416:
#line 1073 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_CLASS_CONST, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6342 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 417:
#line 1075 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_CLASS_CONST, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6348 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 420:
#line 1084 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6354 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 421:
#line 1085 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6360 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 422:
#line 1089 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = NULL; }
#line 6366 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 423:
#line 1090 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6372 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 424:
#line 1094 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6378 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 425:
#line 1098 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6384 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 426:
#line 1099 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 6390 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 427:
#line 1100 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6396 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 428:
#line 1104 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6402 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 429:
#line 1105 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 6408 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 430:
#line 1106 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6414 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 431:
#line 1111 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 6420 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 432:
#line 1113 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6426 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 433:
#line 1115 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6432 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 434:
#line 1117 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6438 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 435:
#line 1119 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_METHOD_CALL, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6444 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 436:
#line 1120 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6450 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 437:
#line 1125 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6456 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 438:
#line 1127 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6462 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 439:
#line 1129 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6468 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 440:
#line 1133 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6474 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 441:
#line 1134 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 6480 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 442:
#line 1135 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 6486 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 443:
#line 1140 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6492 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 444:
#line 1142 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6498 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 445:
#line 1147 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 6504 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 446:
#line 1149 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6510 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 447:
#line 1151 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 6516 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 448:
#line 1153 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6522 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 449:
#line 1155 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6528 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 450:
#line 1157 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6534 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 451:
#line 1161 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6540 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 452:
#line 1162 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 6546 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 453:
#line 1163 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 6552 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 454:
#line 1167 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6558 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 455:
#line 1168 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 6564 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 456:
#line 1169 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 6570 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 457:
#line 1174 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6576 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 458:
#line 1176 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_LIST, (yyvsp[0].ast)); }
#line 6582 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 459:
#line 1180 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6588 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 460:
#line 1181 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 6594 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 461:
#line 1182 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = NULL; }
#line 6600 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 462:
#line 1187 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_ARRAY); }
#line 6606 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 463:
#line 1188 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 6612 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 464:
#line 1193 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6618 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 465:
#line 1195 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ARRAY, (yyvsp[0].ast)); }
#line 6624 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 466:
#line 1200 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[0].ast), (yyvsp[-2].ast)); }
#line 6630 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 467:
#line 1201 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[0].ast), NULL); }
#line 6636 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 468:
#line 1203 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_ARRAY_ELEM, 1, (yyvsp[0].ast), (yyvsp[-3].ast)); }
#line 6642 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 469:
#line 1205 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_ARRAY_ELEM, 1, (yyvsp[0].ast), NULL); }
#line 6648 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 470:
#line 1210 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6654 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 471:
#line 1212 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6660 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 472:
#line 1214 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ENCAPS_LIST, (yyvsp[0].ast)); }
#line 6666 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 473:
#line 1216 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_list(2, ZEND_AST_ENCAPS_LIST, (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6672 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 474:
#line 1221 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 6678 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 475:
#line 1223 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM,
			      zend_ast_create(ZEND_AST_VAR, (yyvsp[-3].ast)), (yyvsp[-1].ast)); }
#line 6685 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 476:
#line 1226 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP,
			      zend_ast_create(ZEND_AST_VAR, (yyvsp[-2].ast)), (yyvsp[0].ast)); }
#line 6692 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 477:
#line 1229 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[-1].ast)); }
#line 6698 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 478:
#line 1231 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[-1].ast)); }
#line 6704 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 479:
#line 1233 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM,
			      zend_ast_create(ZEND_AST_VAR, (yyvsp[-4].ast)), (yyvsp[-2].ast)); }
#line 6711 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 480:
#line 1235 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 6717 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 481:
#line 1239 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6723 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 482:
#line 1240 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6729 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 483:
#line 1241 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 6735 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 484:
#line 1246 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 6741 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 485:
#line 1247 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_EMPTY, (yyvsp[-1].ast)); }
#line 6747 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 486:
#line 1249 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_INCLUDE, (yyvsp[0].ast)); }
#line 6753 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 487:
#line 1251 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_INCLUDE_ONCE, (yyvsp[0].ast)); }
#line 6759 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 488:
#line 1253 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_EVAL, (yyvsp[-1].ast)); }
#line 6765 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 489:
#line 1255 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_REQUIRE, (yyvsp[0].ast)); }
#line 6771 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 490:
#line 1257 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_REQUIRE_ONCE, (yyvsp[0].ast)); }
#line 6777 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 491:
#line 1261 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6783 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 492:
#line 1263 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6789 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;

  case 493:
#line 1267 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1646  */
    { (yyval.ast) = zend_ast_create(ZEND_AST_ISSET, (yyvsp[0].ast)); }
#line 6795 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
    break;


#line 6799 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.c" /* yacc.c:1646  */
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
  return yyresult;
}
#line 1270 "/media/zaak/c8e4533f-1124-4ef8-9ae0-bf67b87532ee/projects/php-src/Zend/zend_language_parser.y" /* yacc.c:1906  */


/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T zend_yytnamerr(char *yyres, const char *yystr)
{
	/* CG(parse_error) states:
	 * 0 => yyres = NULL, yystr is the unexpected token
	 * 1 => yyres = NULL, yystr is one of the expected tokens
	 * 2 => yyres != NULL, yystr is the unexpected token
	 * 3 => yyres != NULL, yystr is one of the expected tokens
	 */
	if (yyres && CG(parse_error) < 2) {
		CG(parse_error) = 2;
	}

	if (CG(parse_error) % 2 == 0) {
		/* The unexpected token */
		char buffer[120];
		const unsigned char *end, *str, *tok1 = NULL, *tok2 = NULL;
		unsigned int len = 0, toklen = 0, yystr_len;

		CG(parse_error)++;

		if (LANG_SCNG(yy_text)[0] == 0 &&
			LANG_SCNG(yy_leng) == 1 &&
			memcmp(yystr, "\"end of file\"", sizeof("\"end of file\"") - 1) == 0) {
			if (yyres) {
				yystpcpy(yyres, "end of file");
			}
			return sizeof("end of file")-1;
		}

		str = LANG_SCNG(yy_text);
		end = memchr(str, '\n', LANG_SCNG(yy_leng));
		yystr_len = (unsigned int)yystrlen(yystr);

		if ((tok1 = memchr(yystr, '(', yystr_len)) != NULL
			&& (tok2 = zend_memrchr(yystr, ')', yystr_len)) != NULL) {
			toklen = (tok2 - tok1) + 1;
		} else {
			tok1 = tok2 = NULL;
			toklen = 0;
		}

		if (end == NULL) {
			len = LANG_SCNG(yy_leng) > 30 ? 30 : LANG_SCNG(yy_leng);
		} else {
			len = (end - str) > 30 ? 30 : (end - str);
		}
		if (yyres) {
			if (toklen) {
				snprintf(buffer, sizeof(buffer), "'%.*s' %.*s", len, str, toklen, tok1);
			} else {
				snprintf(buffer, sizeof(buffer), "'%.*s'", len, str);
			}
			yystpcpy(yyres, buffer);
		}
		return len + (toklen ? toklen + 1 : 0) + 2;
	}

	/* One of the expected tokens */
	if (!yyres) {
		return yystrlen(yystr) - (*yystr == '"' ? 2 : 0);
	}

	if (*yystr == '"') {
		YYSIZE_T yyn = 0;
		const char *yyp = yystr;

		for (; *++yyp != '"'; ++yyn) {
			yyres[yyn] = *yyp;
		}
		yyres[yyn] = '\0';
		return yyn;
	}
	yystpcpy(yyres, yystr);
	return strlen(yystr);
}

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * indent-tabs-mode: t
 * End:
 */
