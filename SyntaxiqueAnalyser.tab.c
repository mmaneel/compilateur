/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 3 "SyntaxiqueAnalyser.y"

#define simpleToArrayOffset 4
#define YYDEBUG 1
#define RESET "\033[0m"
#define RED "\033[31m"     
#define MAGENTA "\033[35m"
#define GREEN "\033[32m" 

#line 80 "SyntaxiqueAnalyser.tab.c"

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

#include "SyntaxiqueAnalyser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IntType = 3,                    /* IntType  */
  YYSYMBOL_StringType = 4,                 /* StringType  */
  YYSYMBOL_RealType = 5,                   /* RealType  */
  YYSYMBOL_BoolType = 6,                   /* BoolType  */
  YYSYMBOL_RETURN = 7,                     /* RETURN  */
  YYSYMBOL_CONST = 8,                      /* CONST  */
  YYSYMBOL_VAR = 9,                        /* VAR  */
  YYSYMBOL_FOR = 10,                       /* FOR  */
  YYSYMBOL_WHILE = 11,                     /* WHILE  */
  YYSYMBOL_IF = 12,                        /* IF  */
  YYSYMBOL_ELSE = 13,                      /* ELSE  */
  YYSYMBOL_ELSEIF = 14,                    /* ELSEIF  */
  YYSYMBOL_EACH = 15,                      /* EACH  */
  YYSYMBOL_IN = 16,                        /* IN  */
  YYSYMBOL_SCAN = 17,                      /* SCAN  */
  YYSYMBOL_PRINT = 18,                     /* PRINT  */
  YYSYMBOL_FUN = 19,                       /* FUN  */
  YYSYMBOL_TO = 20,                        /* TO  */
  YYSYMBOL_PROG = 21,                      /* PROG  */
  YYSYMBOL_SWITCH = 22,                    /* SWITCH  */
  YYSYMBOL_CASE = 23,                      /* CASE  */
  YYSYMBOL_IMPORT = 24,                    /* IMPORT  */
  YYSYMBOL_LIST = 25,                      /* LIST  */
  YYSYMBOL_lettre = 26,                    /* lettre  */
  YYSYMBOL_chiffre = 27,                   /* chiffre  */
  YYSYMBOL_IDF = 28,                       /* IDF  */
  YYSYMBOL_INT = 29,                       /* INT  */
  YYSYMBOL_STRING = 30,                    /* STRING  */
  YYSYMBOL_REAL = 31,                      /* REAL  */
  YYSYMBOL_BOOL = 32,                      /* BOOL  */
  YYSYMBOL_ADD = 33,                       /* ADD  */
  YYSYMBOL_SUB = 34,                       /* SUB  */
  YYSYMBOL_MUL = 35,                       /* MUL  */
  YYSYMBOL_MOD = 36,                       /* MOD  */
  YYSYMBOL_DIV = 37,                       /* DIV  */
  YYSYMBOL_INC = 38,                       /* INC  */
  YYSYMBOL_DEC = 39,                       /* DEC  */
  YYSYMBOL_ADDEQUALS = 40,                 /* ADDEQUALS  */
  YYSYMBOL_SUBEQUALS = 41,                 /* SUBEQUALS  */
  YYSYMBOL_EQUALS = 42,                    /* EQUALS  */
  YYSYMBOL_NEG = 43,                       /* NEG  */
  YYSYMBOL_NOTEQUALS = 44,                 /* NOTEQUALS  */
  YYSYMBOL_LESS = 45,                      /* LESS  */
  YYSYMBOL_LESSEQUALS = 46,                /* LESSEQUALS  */
  YYSYMBOL_GREATER = 47,                   /* GREATER  */
  YYSYMBOL_GREATEREQUALS = 48,             /* GREATEREQUALS  */
  YYSYMBOL_DOUBLEEQUALS = 49,              /* DOUBLEEQUALS  */
  YYSYMBOL_AND = 50,                       /* AND  */
  YYSYMBOL_OR = 51,                        /* OR  */
  YYSYMBOL_COMMENTL = 52,                  /* COMMENTL  */
  YYSYMBOL_COMMENTMULTILINE = 53,          /* COMMENTMULTILINE  */
  YYSYMBOL_WHITESPACE = 54,                /* WHITESPACE  */
  YYSYMBOL_virgule = 55,                   /* virgule  */
  YYSYMBOL_Affectation = 56,               /* Affectation  */
  YYSYMBOL_crochetouvrant = 57,            /* crochetouvrant  */
  YYSYMBOL_crochetfermant = 58,            /* crochetfermant  */
  YYSYMBOL_parentheseouvrante = 59,        /* parentheseouvrante  */
  YYSYMBOL_parenthesefermante = 60,        /* parenthesefermante  */
  YYSYMBOL_acolladeouvrante = 61,          /* acolladeouvrante  */
  YYSYMBOL_acolladefermante = 62,          /* acolladefermante  */
  YYSYMBOL_deuxpoints = 63,                /* deuxpoints  */
  YYSYMBOL_COMA = 64,                      /* COMA  */
  YYSYMBOL_MULT = 65,                      /* MULT  */
  YYSYMBOL_YYACCEPT = 66,                  /* $accept  */
  YYSYMBOL_ProgrammePrincipal = 67,        /* ProgrammePrincipal  */
  YYSYMBOL_Fonction = 68,                  /* Fonction  */
  YYSYMBOL_Parametres = 69,                /* Parametres  */
  YYSYMBOL_Parametre = 70,                 /* Parametre  */
  YYSYMBOL_Bloc = 71,                      /* Bloc  */
  YYSYMBOL_SimpleType = 72,                /* SimpleType  */
  YYSYMBOL_Expression = 73,                /* Expression  */
  YYSYMBOL_Operateur = 74,                 /* Operateur  */
  YYSYMBOL_DeclarationInitial = 75,        /* DeclarationInitial  */
  YYSYMBOL_DeclarationSimple = 76,         /* DeclarationSimple  */
  YYSYMBOL_Tableau = 77,                   /* Tableau  */
  YYSYMBOL_PureAffectation = 78,           /* PureAffectation  */
  YYSYMBOL_Aff = 79,                       /* Aff  */
  YYSYMBOL_Statement = 80,                 /* Statement  */
  YYSYMBOL_List = 81,                      /* List  */
  YYSYMBOL_Conditions = 82,                /* Conditions  */
  YYSYMBOL_Condition = 83,                 /* Condition  */
  YYSYMBOL_ConditionELSE = 84,             /* ConditionELSE  */
  YYSYMBOL_While = 85,                     /* While  */
  YYSYMBOL_DebutWhile = 86,                /* DebutWhile  */
  YYSYMBOL_ConditionWhile = 87,            /* ConditionWhile  */
  YYSYMBOL_For = 88,                       /* For  */
  YYSYMBOL_Boucle = 89,                    /* Boucle  */
  YYSYMBOL_Valeur = 90,                    /* Valeur  */
  YYSYMBOL_AppelFonction = 91,             /* AppelFonction  */
  YYSYMBOL_Arguments = 92,                 /* Arguments  */
  YYSYMBOL_Variable = 93                   /* Variable  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 131 "SyntaxiqueAnalyser.y"

extern FILE *yyin;
extern int yylineno;
extern int yyleng;
extern int yylex();

char* file = "test.txt";

int currentColumn = 1;
symbole * tableSymboles = NULL;

pile * stack;
quad * q;
int qc = 1;

bool isForLoop = false;
bool hasFailed = false;
qFifo * quadFifo;

void yysuccess(char *s);
void yyerror(const char *s);
void yyerrorSemantic(char *s);
void showLexicalError();


#line 233 "SyntaxiqueAnalyser.tab.c"


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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if 1

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
#endif /* 1 */

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   366

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  86
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  154

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   320


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   160,   160,   161,   164,   166,   167,   169,   170,   172,
     173,   177,   178,   179,   180,   183,   186,   187,   357,   415,
     557,   582,   724,   725,   726,   727,   730,   731,   732,   733,
     734,   735,   736,   737,   738,   739,   740,   741,   742,   743,
     744,   746,   747,   748,   749,   750,   774,   785,   788,   791,
     792,   793,   794,   797,   798,   867,   875,   876,   877,   878,
     879,   880,   881,   884,   891,   894,   896,   897,   898,   902,
     916,   931,   936,   937,   940,   941,   943,   944,   945,   946,
     947,   950,   951,   954,   955,   958,   971
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IntType",
  "StringType", "RealType", "BoolType", "RETURN", "CONST", "VAR", "FOR",
  "WHILE", "IF", "ELSE", "ELSEIF", "EACH", "IN", "SCAN", "PRINT", "FUN",
  "TO", "PROG", "SWITCH", "CASE", "IMPORT", "LIST", "lettre", "chiffre",
  "IDF", "INT", "STRING", "REAL", "BOOL", "ADD", "SUB", "MUL", "MOD",
  "DIV", "INC", "DEC", "ADDEQUALS", "SUBEQUALS", "EQUALS", "NEG",
  "NOTEQUALS", "LESS", "LESSEQUALS", "GREATER", "GREATEREQUALS",
  "DOUBLEEQUALS", "AND", "OR", "COMMENTL", "COMMENTMULTILINE",
  "WHITESPACE", "virgule", "Affectation", "crochetouvrant",
  "crochetfermant", "parentheseouvrante", "parenthesefermante",
  "acolladeouvrante", "acolladefermante", "deuxpoints", "COMA", "MULT",
  "$accept", "ProgrammePrincipal", "Fonction", "Parametres", "Parametre",
  "Bloc", "SimpleType", "Expression", "Operateur", "DeclarationInitial",
  "DeclarationSimple", "Tableau", "PureAffectation", "Aff", "Statement",
  "List", "Conditions", "Condition", "ConditionELSE", "While",
  "DebutWhile", "ConditionWhile", "For", "Boucle", "Valeur",
  "AppelFonction", "Arguments", "Variable", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-90)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-87)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       9,   -24,    36,   -22,   -90,   249,   -90,   -90,   -90,   -90,
      94,    94,   -13,    12,    19,    16,   -37,   -90,    24,    74,
     -90,   -16,   -90,   249,   -90,   -90,   249,    37,   -90,   -90,
      -7,     7,   -90,   -15,   -21,    86,   -90,    75,   -90,    50,
      28,   -90,   -90,    51,    22,   -90,   -90,   -90,   -90,    49,
     -90,   -90,   -90,   -90,    37,    37,   107,   -90,   -90,    37,
      22,   -90,    84,   -90,   -90,    87,    98,   -16,   262,    92,
     -90,   238,    61,    64,    76,   286,   -90,   -90,   -90,    47,
     135,    45,   -90,   -90,   -90,   -90,   -90,   -90,   -90,    37,
     -90,   -90,   -90,   -90,   -90,   -90,    63,    37,   286,   286,
      70,   110,    37,   -90,   -90,    76,    70,    67,    37,   -90,
      37,   -90,   -90,   -90,   -90,    71,   -90,    47,   310,   -90,
     286,   -90,   118,   163,    78,   -90,    90,   -90,   191,   -90,
      96,    99,   100,   249,   -90,   101,   249,   249,    73,   249,
      97,   102,   -90,   103,   -90,     6,   -90,   105,    19,   -90,
     249,   -90,   111,   -90
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     0,     1,     9,    11,    13,    12,    14,
       0,     0,     0,     0,     0,     0,    47,    60,     0,     0,
      56,    57,    58,     9,    62,    74,     9,     0,    75,    61,
      59,     0,    47,     0,     7,     0,    71,     0,    64,     0,
       0,     3,    46,    85,     0,    41,    52,    86,    10,     0,
      22,    24,    23,    25,     0,     0,     0,    18,    54,    55,
       0,    42,     0,    43,    44,     0,     0,     0,     0,     5,
      81,    83,     0,     0,    76,    45,    50,    51,    69,    20,
       0,    26,    27,    28,    29,    30,    32,    33,    31,     0,
      35,    36,    37,    38,    39,    40,     0,     0,    53,    49,
       7,     0,     0,    26,    34,    76,     7,     0,     0,    82,
       0,    77,    79,    78,    80,     0,    15,    17,    19,    70,
      16,     8,     0,     0,     0,     6,     0,    84,     0,    48,
       0,     0,     0,     9,    63,     0,     9,     9,     0,     9,
       0,     0,     4,     0,    72,    66,    73,     0,     0,    65,
       9,    67,     0,    68
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -90,   -90,   -90,   -90,   -89,   -20,   -90,   -17,   106,   143,
      -2,   -90,    -9,   -19,   -90,   -90,   -90,    31,   -90,   -90,
     -90,   -90,   -90,   -90,    79,     0,    80,    -5
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    17,   107,    63,    18,    19,    71,    97,    20,
      21,    76,    45,    22,    23,    77,    24,    38,   149,    25,
      26,    27,    28,    29,   115,    47,    72,    57
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      31,   -85,    46,    48,     3,    30,    49,    43,    33,    34,
      56,   121,    43,    43,    46,    46,    31,   125,    31,   147,
     148,    31,    40,    30,    61,    64,    30,    75,    31,    31,
       1,   -86,    68,    67,    62,    60,     4,    79,    80,     5,
      44,    60,    98,    99,    39,    58,    35,    73,    46,   -86,
      43,    50,    51,    52,    53,    54,    43,    50,    51,    52,
      53,    54,    31,    59,   117,    43,    50,    51,    52,    53,
      54,    36,   118,    43,    50,    51,    52,    53,    37,    74,
     120,    55,    83,    84,    85,   123,    41,    55,    70,     6,
       7,     8,     9,   128,    10,    11,    55,     6,     7,     8,
       9,    65,    42,    43,    55,   111,   112,   113,   114,    69,
      40,    78,   100,   138,    32,   101,   140,   141,   102,   143,
     106,   109,    32,   110,   119,    62,   122,   126,    31,   129,
     152,    31,    31,    30,    31,   142,    30,    30,   132,    30,
      81,    82,    83,    84,    85,    31,   130,    86,    87,    88,
      30,   133,    89,    90,    91,    92,   135,    93,    94,   144,
     136,   137,   139,    95,   145,   146,   150,    96,    81,    82,
      83,    84,    85,   153,   105,    86,    87,    88,    66,   151,
      89,    90,    91,    92,   124,    93,    94,     0,   127,     0,
       0,    95,     0,     0,     0,   116,    81,    82,    83,    84,
      85,     0,     0,    86,    87,    88,     0,     0,    89,    90,
      91,    92,     0,    93,    94,     0,     0,     0,     0,    95,
       0,     0,     0,   131,    81,    82,    83,    84,    85,     0,
       0,    86,    87,    88,     0,     0,    89,    90,    91,    92,
       0,    93,    94,     0,     0,     0,     0,    95,     0,     0,
       0,   134,     6,     7,     8,     9,     0,    10,    11,    12,
      13,    14,     0,     0,     0,     0,     0,     0,    15,     0,
       0,    81,    82,    83,    84,    85,     0,    16,    86,    87,
      88,     0,     0,    89,    90,    91,    92,     0,    93,    94,
       0,     0,     0,   108,    95,   103,    82,    83,    84,    85,
       0,     0,    86,    87,    88,     0,     0,   104,    90,    91,
      92,     0,    93,    94,     0,     0,     0,     0,    95,    81,
      82,    83,    84,    85,     0,     0,    86,    87,    88,     0,
       0,    89,    90,    91,    92,     0,    93,    94,     0,     0,
       0,     0,    95,    81,    82,    83,    84,    85,     0,     0,
      86,    87,   -87,     0,     0,   -87,   -87,   -87,   -87,     0,
       0,     0,     0,     0,     0,     0,   -87
};

static const yytype_int16 yycheck[] =
{
       5,    38,    21,    23,    28,     5,    26,    28,    10,    11,
      27,   100,    28,    28,    33,    34,    21,   106,    23,    13,
      14,    26,    59,    23,    33,    34,    26,    44,    33,    34,
      21,    38,    37,    35,    55,    56,     0,    54,    55,    61,
      56,    56,    59,    60,    28,    38,    59,    25,    67,    56,
      28,    29,    30,    31,    32,    33,    28,    29,    30,    31,
      32,    33,    67,    56,    81,    28,    29,    30,    31,    32,
      33,    59,    89,    28,    29,    30,    31,    32,    59,    57,
      97,    59,    35,    36,    37,   102,    62,    59,    60,     3,
       4,     5,     6,   110,     8,     9,    59,     3,     4,     5,
       6,    15,    28,    28,    59,    29,    30,    31,    32,    59,
      59,    62,    28,   133,    28,    28,   136,   137,    20,   139,
      28,    60,    28,    59,    61,    55,    16,    60,   133,    58,
     150,   136,   137,   133,   139,    62,   136,   137,    60,   139,
      33,    34,    35,    36,    37,   150,    28,    40,    41,    42,
     150,    61,    45,    46,    47,    48,    60,    50,    51,    62,
      61,    61,    61,    56,    62,    62,    61,    60,    33,    34,
      35,    36,    37,    62,    68,    40,    41,    42,    35,   148,
      45,    46,    47,    48,   105,    50,    51,    -1,   108,    -1,
      -1,    56,    -1,    -1,    -1,    60,    33,    34,    35,    36,
      37,    -1,    -1,    40,    41,    42,    -1,    -1,    45,    46,
      47,    48,    -1,    50,    51,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    60,    33,    34,    35,    36,    37,    -1,
      -1,    40,    41,    42,    -1,    -1,    45,    46,    47,    48,
      -1,    50,    51,    -1,    -1,    -1,    -1,    56,    -1,    -1,
      -1,    60,     3,     4,     5,     6,    -1,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    33,    34,    35,    36,    37,    -1,    28,    40,    41,
      42,    -1,    -1,    45,    46,    47,    48,    -1,    50,    51,
      -1,    -1,    -1,    55,    56,    33,    34,    35,    36,    37,
      -1,    -1,    40,    41,    42,    -1,    -1,    45,    46,    47,
      48,    -1,    50,    51,    -1,    -1,    -1,    -1,    56,    33,
      34,    35,    36,    37,    -1,    -1,    40,    41,    42,    -1,
      -1,    45,    46,    47,    48,    -1,    50,    51,    -1,    -1,
      -1,    -1,    56,    33,    34,    35,    36,    37,    -1,    -1,
      40,    41,    42,    -1,    -1,    45,    46,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    21,    67,    28,     0,    61,     3,     4,     5,     6,
       8,     9,    10,    11,    12,    19,    28,    68,    71,    72,
      75,    76,    79,    80,    82,    85,    86,    87,    88,    89,
      91,    93,    28,    76,    76,    59,    59,    59,    83,    28,
      59,    62,    28,    28,    56,    78,    79,    91,    71,    71,
      29,    30,    31,    32,    33,    59,    73,    93,    38,    56,
      56,    78,    55,    70,    78,    15,    75,    76,    93,    59,
      60,    73,    92,    25,    57,    73,    77,    81,    62,    73,
      73,    33,    34,    35,    36,    37,    40,    41,    42,    45,
      46,    47,    48,    50,    51,    56,    60,    74,    73,    73,
      28,    28,    20,    33,    45,    74,    28,    69,    55,    60,
      59,    29,    30,    31,    32,    90,    60,    73,    73,    61,
      73,    70,    16,    73,    90,    70,    60,    92,    73,    58,
      28,    60,    60,    61,    60,    60,    61,    61,    71,    61,
      71,    71,    62,    71,    62,    62,    62,    13,    14,    84,
      61,    83,    71,    62
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    66,    67,    67,    68,    69,    69,    70,    70,    71,
      71,    72,    72,    72,    72,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    75,    75,    75,    75,    75,    76,    76,    77,    78,
      78,    78,    78,    79,    79,    79,    80,    80,    80,    80,
      80,    80,    80,    81,    82,    83,    84,    84,    84,    85,
      86,    87,    88,    88,    89,    89,    90,    90,    90,    90,
      90,    91,    91,    92,    92,    93,    93
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     5,     8,     0,     2,     0,     3,     0,
       2,     1,     1,     1,     1,     3,     3,     3,     1,     3,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     3,     3,     3,     2,     1,     3,     2,
       2,     2,     1,     3,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     4,     2,     9,     0,     2,     4,     3,
       4,     2,     9,    10,     1,     1,     0,     1,     1,     1,
       1,     3,     4,     1,     3,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
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
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
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


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 11: /* SimpleType: IntType  */
#line 177 "SyntaxiqueAnalyser.y"
            { (yyval.type) = TYPE_INTEGER; }
#line 1611 "SyntaxiqueAnalyser.tab.c"
    break;

  case 12: /* SimpleType: RealType  */
#line 178 "SyntaxiqueAnalyser.y"
               { (yyval.type) = TYPE_FLOAT; }
#line 1617 "SyntaxiqueAnalyser.tab.c"
    break;

  case 13: /* SimpleType: StringType  */
#line 179 "SyntaxiqueAnalyser.y"
                { (yyval.type) = TYPE_STRING; }
#line 1623 "SyntaxiqueAnalyser.tab.c"
    break;

  case 14: /* SimpleType: BoolType  */
#line 180 "SyntaxiqueAnalyser.y"
              { (yyval.type) = TYPE_BOOLEAN; }
#line 1629 "SyntaxiqueAnalyser.tab.c"
    break;

  case 15: /* Expression: parentheseouvrante Expression parenthesefermante  */
#line 183 "SyntaxiqueAnalyser.y"
                                                    {
            (yyval.expression)=(yyvsp[-1].expression);
    }
#line 1637 "SyntaxiqueAnalyser.tab.c"
    break;

  case 17: /* Expression: Expression ADD Expression  */
#line 187 "SyntaxiqueAnalyser.y"
                                {
            if((yyvsp[-2].expression).type == (yyvsp[0].expression).type){
                    if((yyvsp[-2].expression).type == TYPE_STRING)
                    {
                        strcpy((yyval.expression).stringValue,(yyvsp[-2].expression).stringValue);
                        strcat((yyval.expression).stringValue,(yyvsp[0].expression).stringValue);

                        char qcString[20];
                        sprintf(qcString, "%s%d", "R",qc);
                        strcpy((yyval.expression).nameVariable,qcString);
                        (yyval.expression).isVariable=true;
                        if((yyvsp[-2].expression).isVariable == true & (yyvsp[0].expression).isVariable == true)
                        {
                            insererQuadreplet(&q, "ADD",(yyvsp[-2].expression).nameVariable, (yyvsp[0].expression).nameVariable, qcString, qc);
                        }
                        else
                        {
                            if((yyvsp[-2].expression).isVariable == true)
                            {
                                insererQuadreplet(&q, "ADD",(yyvsp[-2].expression).nameVariable, (yyvsp[0].expression).stringValue, qcString, qc);
                            }
                            else
                            {
                                if((yyvsp[0].expression).isVariable == true)
                                {
                                    insererQuadreplet(&q, "ADD",(yyvsp[-2].expression).stringValue, (yyvsp[0].expression).nameVariable, qcString, qc);
                                }
                                else
                                {
                                    insererQuadreplet(&q, "ADD",(yyvsp[-2].expression).stringValue, (yyvsp[0].expression).stringValue, qcString, qc);
                                }
                            }
                        }
                        qc++;
                    }
                    else{
                        if((yyvsp[-2].expression).type == TYPE_INTEGER)
                        {
                            (yyval.expression).integerValue=(yyvsp[-2].expression).integerValue+(yyvsp[0].expression).integerValue;

                            char buff[255];
                            char buff2[255];
                            char qcString[20];
                            sprintf(qcString, "%s%d", "R",qc);
                            strcpy((yyval.expression).nameVariable,qcString);
                            (yyval.expression).isVariable=true;
                            if((yyvsp[-2].expression).isVariable == true & (yyvsp[0].expression).isVariable == true)
                            {
                                insererQuadreplet(&q, "ADD",(yyvsp[-2].expression).nameVariable, (yyvsp[0].expression).nameVariable, qcString, qc);
                            }
                            else
                            {
                                if((yyvsp[-2].expression).isVariable == true)
                                {
                                    sprintf(buff2, "%d", (yyvsp[0].expression).integerValue);
                                    insererQuadreplet(&q, "ADD",(yyvsp[-2].expression).nameVariable, buff2, qcString, qc);
                                }
                                else
                                {
                                    if((yyvsp[0].expression).isVariable == true)
                                    {
                                        sprintf(buff, "%d", (yyvsp[-2].expression).integerValue);
                                        insererQuadreplet(&q, "ADD",buff, (yyvsp[0].expression).nameVariable, qcString, qc);
                                    }
                                    else
                                    {
                                        sprintf(buff, "%d", (yyvsp[-2].expression).integerValue);
                                        sprintf(buff2, "%d", (yyvsp[0].expression).integerValue);
                                        insererQuadreplet(&q, "ADD",buff, buff2,qcString, qc);
                                    }
                                }
                            }
                            qc++;
                        }
                        else {
                            if((yyvsp[-2].expression).type == TYPE_FLOAT)
                            {
                                (yyval.expression).floatValue=(yyvsp[-2].expression).floatValue+(yyvsp[0].expression).floatValue;
                                
                                char buff[255];
                                char buff2[255];
                                char qcString[20];
                                sprintf(qcString, "%s%d", "R",qc);
                                strcpy((yyval.expression).nameVariable,qcString);
                                (yyval.expression).isVariable=true;
                                if((yyvsp[-2].expression).isVariable == true & (yyvsp[0].expression).isVariable == true)
                                {
                                    insererQuadreplet(&q, "ADD",(yyvsp[-2].expression).nameVariable, (yyvsp[0].expression).nameVariable, qcString, qc);
                                }
                                else
                                {
                                    if((yyvsp[-2].expression).isVariable == true)
                                    {
                                        sprintf(buff2, "%f", (yyvsp[0].expression).floatValue);
                                        insererQuadreplet(&q, "ADD",(yyvsp[-2].expression).nameVariable, buff2, qcString, qc);
                                    }
                                    else
                                    {
                                        if((yyvsp[0].expression).isVariable == true)
                                        {
                                            sprintf(buff, "%f", (yyvsp[-2].expression).floatValue);
                                            insererQuadreplet(&q, "ADD",buff, (yyvsp[0].expression).nameVariable, qcString, qc);
                                        }
                                        else
                                        {
                                            sprintf(buff, "%f", (yyvsp[-2].expression).floatValue);
                                            sprintf(buff2, "%f", (yyvsp[0].expression).floatValue);
                                            insererQuadreplet(&q, "ADD",buff, buff2,qcString, qc);
                                        }
                                    }
                                }
                                qc++;
                            }
                            else
                            {
                                if((yyvsp[-2].expression).type == TYPE_BOOLEAN)
                                {
                                    (yyval.expression).type=TYPE_BOOLEAN;
                                    if(((yyvsp[-2].expression).booleanValue) || ((yyvsp[0].expression).booleanValue))
                                    {
                                        (yyval.expression).booleanValue=true;
                                    }
                                    else
                                    {
                                        (yyval.expression).booleanValue=false;
                                    };

                                    char buff[255];
                                    char buff2[255];
                                    char qcString[20];
                                    sprintf(qcString, "%s%d", "R",qc);
                                    strcpy((yyval.expression).nameVariable,qcString);
                                    (yyval.expression).isVariable=true;
                                    if((yyvsp[-2].expression).isVariable == true & (yyvsp[0].expression).isVariable == true)
                                    {
                                        insererQuadreplet(&q, "ADD",(yyvsp[-2].expression).nameVariable, (yyvsp[0].expression).nameVariable, qcString, qc);
                                    }
                                    else
                                    {
                                        if((yyvsp[-2].expression).isVariable == true)
                                        {
                                            strcpy(buff, ((yyvsp[0].expression).booleanValue == true) ? "true" : "false");
                                            insererQuadreplet(&q, "ADD",(yyvsp[-2].expression).nameVariable, buff, qcString, qc);
                                        }
                                        else
                                        {
                                            if((yyvsp[0].expression).isVariable == true)
                                            {
                                                strcpy(buff, ((yyvsp[-2].expression).booleanValue == true) ? "true" : "false");
                                                insererQuadreplet(&q, "ADD",buff, (yyvsp[0].expression).nameVariable, qcString, qc);
                                            }
                                            else
                                            {
                                                strcpy(buff, ((yyvsp[-2].expression).booleanValue == true) ? "true" : "false");
                                                strcpy(buff2, ((yyvsp[0].expression).booleanValue == true) ? "true" : "false");
                                                insererQuadreplet(&q, "ADD",buff, buff2,qcString, qc);
                                            }
                                        }
                                    }
                                    qc++;
                                }
                            }
                        }
                    }
            }
            else
            {
                yyerrorSemantic( "Type mismatch");
            }
    }
#line 1812 "SyntaxiqueAnalyser.tab.c"
    break;

  case 18: /* Expression: Variable  */
#line 357 "SyntaxiqueAnalyser.y"
              {
        if((yyvsp[0].variable).symbole != NULL){
            char valeurString[255];
            char nameString[255];
            (yyval.expression).isVariable = true;
            if((yyvsp[0].variable).symbole->type < simpleToArrayOffset){
                getNom((yyvsp[0].variable).symbole, nameString);
                strcpy((yyval.expression).nameVariable, nameString);
                getValeur((yyvsp[0].variable).symbole, valeurString);
                switch ((yyvsp[0].variable).symbole->type){
                    case TYPE_INTEGER:
                        (yyval.expression).integerValue = atoi(valeurString);
                        (yyval.expression).type = TYPE_INTEGER;
                        break;
                    case TYPE_FLOAT:
                        (yyval.expression).integerValue = atof(valeurString);
                        (yyval.expression).type = TYPE_FLOAT;
                        break;
                    case TYPE_STRING:
                        strcpy((yyval.expression).stringValue, valeurString);
                        (yyval.expression).type = TYPE_STRING;
                        break;
                    case TYPE_BOOLEAN:
                        (yyval.expression).booleanValue = strcmp(valeurString, "true") == 0;
                        (yyval.expression).type = TYPE_BOOLEAN;
                        break;
                    default :
                        (yyval.expression).type = -1;
                        break;
                    }
            }else{
                    getNom((yyvsp[0].variable).symbole,nameString);
                    sprintf((yyval.expression).nameVariable,"%s[%s]",nameString,(yyvsp[0].variable).indexString);
                    getArrayElement((yyvsp[0].variable).symbole, (yyvsp[0].variable).index, valeurString);
                    switch ((yyvsp[0].variable).symbole->type){
                        case TYPE_ARRAY_BOOLEAN:
                            (yyval.expression).booleanValue = strcmp(valeurString, "true") == 0;;
                            (yyval.expression).type = TYPE_BOOLEAN;
                            break;
                        case TYPE_ARRAY_FLOAT:
                            (yyval.expression).floatValue = atof(valeurString);
                            (yyval.expression).type = TYPE_FLOAT;
                            break;
                        case TYPE_ARRAY_INTEGER:
                            (yyval.expression).integerValue = atoi(valeurString);
                            (yyval.expression).type = TYPE_INTEGER;
                            break;
                        case TYPE_ARRAY_STRING:
                            strcpy((yyval.expression).stringValue, valeurString);
                            (yyval.expression).type = TYPE_STRING;
                            break;
                        default:
                            (yyval.expression).type = -1;
                            break;
                }
            }
        }
    }
#line 1875 "SyntaxiqueAnalyser.tab.c"
    break;

  case 19: /* Expression: Expression LESS Expression  */
#line 415 "SyntaxiqueAnalyser.y"
                                 {
            if((yyvsp[-2].expression).type == (yyvsp[0].expression).type){
                    (yyval.expression).type=TYPE_BOOLEAN;
                        if((yyvsp[-2].expression).type == TYPE_STRING)
                        {
                            if(strcmp((yyvsp[-2].expression).stringValue,(yyvsp[0].expression).stringValue)< 0)
                            {
                                (yyval.expression).booleanValue=true;
                            }
                            else{
                                (yyval.expression).booleanValue=false;
                            }
                            char buff[255];
                            char buff2[255];
                            char qcString[20];
                            sprintf(qcString, "%s%d", "R",qc);
                            strcpy((yyval.expression).nameVariable,qcString);
                            (yyval.expression).isVariable=true;
                            if((yyvsp[-2].expression).isVariable == true && (yyvsp[0].expression).isVariable == true)
                            {
                                insererQuadreplet(&q, "LT",(yyvsp[-2].expression).nameVariable, (yyvsp[0].expression).nameVariable,qcString, qc);
                            }
                            else
                            {
                                if((yyvsp[-2].expression).isVariable==true)
                                {
                                    strcpy(buff2, (yyvsp[0].expression).stringValue);
                                    insererQuadreplet(&q, "LT",(yyvsp[-2].expression).nameVariable, buff2,qcString, qc);
                                }
                                else
                                {
                                    if((yyvsp[0].expression).isVariable==true)
                                    {
                                        strcpy(buff, (yyvsp[-2].expression).stringValue);
                                        insererQuadreplet(&q, "LT",buff, (yyvsp[0].expression).nameVariable,qcString, qc);
                                    }
                                    else
                                    {
                                        strcpy(buff, (yyvsp[-2].expression).stringValue);
                                        strcpy(buff2, (yyvsp[0].expression).stringValue);
                                        insererQuadreplet(&q, "LT",buff, buff2,qcString, qc);
                                    }
                                }
                            }
                            qc++;
                        }
                        else{
                            if((yyvsp[-2].expression).type == TYPE_INTEGER)
                            {
                                if((yyvsp[-2].expression).integerValue < (yyvsp[0].expression).integerValue)
                                {
                                    (yyval.expression).booleanValue=true;
                                }
                                else{
                                    (yyval.expression).booleanValue=false;
                                }
                                char buff[255];
                                char buff2[255];
                                char qcString[20];
                                sprintf(qcString, "%s%d", "R",qc);
                                strcpy((yyval.expression).nameVariable,qcString);
                                (yyval.expression).isVariable=true;
                                if((yyvsp[-2].expression).isVariable == true && (yyvsp[0].expression).isVariable == true)
                                {
                                    insererQuadreplet(&q, "LT",(yyvsp[-2].expression).nameVariable, (yyvsp[0].expression).nameVariable,qcString, qc);
                                }
                                else
                                {
                                    if((yyvsp[-2].expression).isVariable==true)
                                    {
                                        sprintf(buff2, "%d", (yyvsp[0].expression).integerValue);
                                        insererQuadreplet(&q, "LT",(yyvsp[-2].expression).nameVariable, buff2,qcString, qc);
                                    }
                                    else
                                    {
                                        if((yyvsp[0].expression).isVariable==true)
                                        {
                                            sprintf(buff, "%d", (yyvsp[-2].expression).integerValue);
                                            insererQuadreplet(&q, "LT",buff, (yyvsp[0].expression).nameVariable,qcString, qc);
                                        }
                                        else
                                        {
                                            sprintf(buff, "%d", (yyvsp[-2].expression).integerValue);
                                            sprintf(buff2, "%d", (yyvsp[0].expression).integerValue);
                                            insererQuadreplet(&q, "LT",buff, buff2,qcString, qc);
                                        }
                                    }
                                }
                                qc++;
                            }
                            else {
                                if((yyvsp[-2].expression).type == TYPE_FLOAT)
                                {
                                    if((yyvsp[-2].expression).floatValue < (yyvsp[0].expression).floatValue)
                                    {
                                        (yyval.expression).booleanValue=true;
                                    }
                                    else{
                                        (yyval.expression).booleanValue=false;
                                    }
                                    char buff[255];
                                    char buff2[255];
                                    char qcString[20];
                                    sprintf(qcString, "%s%d", "R",qc);
                                    strcpy((yyval.expression).nameVariable,qcString);
                                    (yyval.expression).isVariable=true;
                                    if((yyvsp[-2].expression).isVariable == true && (yyvsp[0].expression).isVariable == true)
                                    {
                                        insererQuadreplet(&q, "LT",(yyvsp[-2].expression).nameVariable, (yyvsp[0].expression).nameVariable,qcString, qc);
                                    }
                                    else
                                    {
                                        if((yyvsp[-2].expression).isVariable==true)
                                        {
                                            sprintf(buff2, "%f", (yyvsp[0].expression).floatValue);
                                            insererQuadreplet(&q, "LT",(yyvsp[-2].expression).nameVariable, buff2,qcString, qc);
                                        }
                                        else
                                        {
                                            if((yyvsp[0].expression).isVariable==true)
                                            {
                                                sprintf(buff, "%f", (yyvsp[-2].expression).floatValue);
                                                insererQuadreplet(&q, "LT",buff, (yyvsp[0].expression).nameVariable,qcString, qc);
                                            }
                                            else
                                            {
                                                sprintf(buff, "%f", (yyvsp[-2].expression).floatValue);
                                                sprintf(buff2, "%f", (yyvsp[0].expression).floatValue);
                                                insererQuadreplet(&q, "LT",buff, buff2,qcString, qc);
                                            }
                                        }
                                    }
                                    qc++;
                                }
                            }
                        }   
            }
            else
            {
                yyerrorSemantic( "Type mismatch");
            }
    }
#line 2022 "SyntaxiqueAnalyser.tab.c"
    break;

  case 20: /* Expression: ADD Expression  */
#line 557 "SyntaxiqueAnalyser.y"
                     {
        if((yyvsp[0].expression).type==NULL){
          yyerrorSemantic( "expression est ulle dans 420");

        }
            if((yyvsp[0].expression).type != TYPE_STRING)
            {
                if((yyvsp[0].expression).type == TYPE_INTEGER)
                {
                    (yyval.expression).type=TYPE_INTEGER;
                    (yyval.expression).integerValue=0+(yyvsp[0].expression).integerValue;
                }
                else
                {
                    if((yyvsp[0].expression).type == TYPE_FLOAT)
                    {
                        (yyval.expression).type=TYPE_FLOAT;
                        (yyval.expression).floatValue=0.0+(yyvsp[0].expression).floatValue;
                    }
                }
            }
            else{
                yyerrorSemantic( "Non numeric expression found");
            }
    }
#line 2052 "SyntaxiqueAnalyser.tab.c"
    break;

  case 21: /* Expression: Expression LESS Expression  */
#line 582 "SyntaxiqueAnalyser.y"
                                 {
            if((yyvsp[-2].expression).type == (yyvsp[0].expression).type){
                    (yyval.expression).type=TYPE_BOOLEAN;
                        if((yyvsp[-2].expression).type == TYPE_STRING)
                        {
                            if(strcmp((yyvsp[-2].expression).stringValue,(yyvsp[0].expression).stringValue)< 0)
                            {
                                (yyval.expression).booleanValue=true;
                            }
                            else{
                                (yyval.expression).booleanValue=false;
                            }
                            char buff[255];
                            char buff2[255];
                            char qcString[20];
                            sprintf(qcString, "%s%d", "R",qc);
                            strcpy((yyval.expression).nameVariable,qcString);
                            (yyval.expression).isVariable=true;
                            if((yyvsp[-2].expression).isVariable == true && (yyvsp[0].expression).isVariable == true)
                            {
                                insererQuadreplet(&q, "LT",(yyvsp[-2].expression).nameVariable, (yyvsp[0].expression).nameVariable,qcString, qc);
                            }
                            else
                            {
                                if((yyvsp[-2].expression).isVariable==true)
                                {
                                    strcpy(buff2, (yyvsp[0].expression).stringValue);
                                    insererQuadreplet(&q, "LT",(yyvsp[-2].expression).nameVariable, buff2,qcString, qc);
                                }
                                else
                                {
                                    if((yyvsp[0].expression).isVariable==true)
                                    {
                                        strcpy(buff, (yyvsp[-2].expression).stringValue);
                                        insererQuadreplet(&q, "LT",buff, (yyvsp[0].expression).nameVariable,qcString, qc);
                                    }
                                    else
                                    {
                                        strcpy(buff, (yyvsp[-2].expression).stringValue);
                                        strcpy(buff2, (yyvsp[0].expression).stringValue);
                                        insererQuadreplet(&q, "LT",buff, buff2,qcString, qc);
                                    }
                                }
                            }
                            qc++;
                        }
                        else{
                            if((yyvsp[-2].expression).type == TYPE_INTEGER)
                            {
                                if((yyvsp[-2].expression).integerValue < (yyvsp[0].expression).integerValue)
                                {
                                    (yyval.expression).booleanValue=true;
                                }
                                else{
                                    (yyval.expression).booleanValue=false;
                                }
                                char buff[255];
                                char buff2[255];
                                char qcString[20];
                                sprintf(qcString, "%s%d", "R",qc);
                                strcpy((yyval.expression).nameVariable,qcString);
                                (yyval.expression).isVariable=true;
                                if((yyvsp[-2].expression).isVariable == true && (yyvsp[0].expression).isVariable == true)
                                {
                                    insererQuadreplet(&q, "LT",(yyvsp[-2].expression).nameVariable, (yyvsp[0].expression).nameVariable,qcString, qc);
                                }
                                else
                                {
                                    if((yyvsp[-2].expression).isVariable==true)
                                    {
                                        sprintf(buff2, "%d", (yyvsp[0].expression).integerValue);
                                        insererQuadreplet(&q, "LT",(yyvsp[-2].expression).nameVariable, buff2,qcString, qc);
                                    }
                                    else
                                    {
                                        if((yyvsp[0].expression).isVariable==true)
                                        {
                                            sprintf(buff, "%d", (yyvsp[-2].expression).integerValue);
                                            insererQuadreplet(&q, "LT",buff, (yyvsp[0].expression).nameVariable,qcString, qc);
                                        }
                                        else
                                        {
                                            sprintf(buff, "%d", (yyvsp[-2].expression).integerValue);
                                            sprintf(buff2, "%d", (yyvsp[0].expression).integerValue);
                                            insererQuadreplet(&q, "LT",buff, buff2,qcString, qc);
                                        }
                                    }
                                }
                                qc++;
                            }
                            else {
                                if((yyvsp[-2].expression).type == TYPE_FLOAT)
                                {
                                    if((yyvsp[-2].expression).floatValue < (yyvsp[0].expression).floatValue)
                                    {
                                        (yyval.expression).booleanValue=true;
                                    }
                                    else{
                                        (yyval.expression).booleanValue=false;
                                    }
                                    char buff[255];
                                    char buff2[255];
                                    char qcString[20];
                                    sprintf(qcString, "%s%d", "R",qc);
                                    strcpy((yyval.expression).nameVariable,qcString);
                                    (yyval.expression).isVariable=true;
                                    if((yyvsp[-2].expression).isVariable == true && (yyvsp[0].expression).isVariable == true)
                                    {
                                        insererQuadreplet(&q, "LT",(yyvsp[-2].expression).nameVariable, (yyvsp[0].expression).nameVariable,qcString, qc);
                                    }
                                    else
                                    {
                                        if((yyvsp[-2].expression).isVariable==true)
                                        {
                                            sprintf(buff2, "%f", (yyvsp[0].expression).floatValue);
                                            insererQuadreplet(&q, "LT",(yyvsp[-2].expression).nameVariable, buff2,qcString, qc);
                                        }
                                        else
                                        {
                                            if((yyvsp[0].expression).isVariable==true)
                                            {
                                                sprintf(buff, "%f", (yyvsp[-2].expression).floatValue);
                                                insererQuadreplet(&q, "LT",buff, (yyvsp[0].expression).nameVariable,qcString, qc);
                                            }
                                            else
                                            {
                                                sprintf(buff, "%f", (yyvsp[-2].expression).floatValue);
                                                sprintf(buff2, "%f", (yyvsp[0].expression).floatValue);
                                                insererQuadreplet(&q, "LT",buff, buff2,qcString, qc);
                                            }
                                        }
                                    }
                                    qc++;
                                }
                            }
                        }   
            }
            else
            {
                yyerrorSemantic( "Type mismatch");
            }
    }
#line 2199 "SyntaxiqueAnalyser.tab.c"
    break;

  case 22: /* Expression: INT  */
#line 724 "SyntaxiqueAnalyser.y"
          { (yyval.expression).type = TYPE_INTEGER; (yyval.expression).integerValue = (yyvsp[0].integerValue); }
#line 2205 "SyntaxiqueAnalyser.tab.c"
    break;

  case 23: /* Expression: REAL  */
#line 725 "SyntaxiqueAnalyser.y"
           { (yyval.expression).type = TYPE_FLOAT; (yyval.expression).floatValue = (yyvsp[0].floatValue ); }
#line 2211 "SyntaxiqueAnalyser.tab.c"
    break;

  case 24: /* Expression: STRING  */
#line 726 "SyntaxiqueAnalyser.y"
            { (yyval.expression).type = TYPE_STRING; strcpy((yyval.expression).stringValue, (yyvsp[0].stringValue)); }
#line 2217 "SyntaxiqueAnalyser.tab.c"
    break;

  case 25: /* Expression: BOOL  */
#line 727 "SyntaxiqueAnalyser.y"
           { (yyval.expression).type = TYPE_BOOLEAN; (yyval.expression).booleanValue = (yyvsp[0].booleanValue); }
#line 2223 "SyntaxiqueAnalyser.tab.c"
    break;

  case 45: /* DeclarationInitial: DeclarationSimple Affectation Expression  */
#line 750 "SyntaxiqueAnalyser.y"
                                               {
        if((yyvsp[-2].symbole) != NULL){
            if((yyvsp[-2].symbole)->type == (yyvsp[0].expression).type){
                char valeurString[255];
                valeurToString((yyvsp[0].expression), valeurString);
                setValeur((yyvsp[-2].symbole), valeurString);
                if((yyvsp[0].expression).isVariable)
                {
                    insererQuadreplet(&q, ":=", (yyvsp[0].expression).nameVariable, "", (yyvsp[-2].symbole)->nom, qc);                    
                }
                else
                {
                    
                    insererQuadreplet(&q, ":=", valeurString, "", (yyvsp[-2].symbole)->nom, qc);
                }
                qc++;
            }else{
                yyerrorSemantic( "Type mismatch");
            }
        }
    }
#line 2249 "SyntaxiqueAnalyser.tab.c"
    break;

  case 46: /* DeclarationSimple: SimpleType IDF  */
#line 774 "SyntaxiqueAnalyser.y"
                   {
        if(rechercherSymbole(tableSymboles, (yyvsp[0].identifier)) == NULL){
            // Si l'ID n'existe pas alors l'inserer
            symbole * nouveauSymbole = creerSymbole((yyvsp[0].identifier), (yyvsp[-1].type), false, 0);
            insererSymbole(&tableSymboles, nouveauSymbole);
            (yyval.symbole) = nouveauSymbole;
        }else{
            yyerrorSemantic( "Id already declared");
            (yyval.symbole) = NULL;
        }
    }
#line 2265 "SyntaxiqueAnalyser.tab.c"
    break;

  case 54: /* Aff: Variable INC  */
#line 798 "SyntaxiqueAnalyser.y"
                   {
        if((yyvsp[-1].variable).symbole != NULL){
            if(!(yyvsp[-1].variable).symbole->hasBeenInitialized){
                yyerrorSemantic( "Variable not initialized");
            }else{
                if((yyvsp[-1].variable).symbole->isConstant){
                    yyerrorSemantic("Cannot reassign a value to a constant");
                }else{
                if((yyvsp[-1].variable).symbole->type % simpleToArrayOffset != TYPE_FLOAT
                && (yyvsp[-1].variable).symbole->type % simpleToArrayOffset != TYPE_INTEGER){
                    yyerrorSemantic( "Non numeric variable found");
                }else{

                    char valeurString[255];

                    if((yyvsp[-1].variable).symbole->type < simpleToArrayOffset)

                        {
                            getValeur((yyvsp[-1].variable).symbole, valeurString);
                            if(isForLoop){
                                pushFifo(quadFifo, creerQuadreplet("ADD", (yyvsp[-1].variable).symbole->nom, "1", (yyvsp[-1].variable).symbole->nom, qc));
                            }else{

                                insererQuadreplet(&q, "ADD", (yyvsp[-1].variable).symbole->nom, "1", (yyvsp[-1].variable).symbole->nom, qc);
                                qc++;
                            }
                        
                        }
                    else
                        {
                            getArrayElement((yyvsp[-1].variable).symbole, (yyvsp[-1].variable).index, valeurString);

                            char buff[255];
                            sprintf(buff, "%s[%d]", (yyvsp[-1].variable).symbole->nom, (yyvsp[-1].variable).index);
                        if(isForLoop){
                            pushFifo(quadFifo, creerQuadreplet("ADD", buff, "1", buff, qc));
                        }else{

                            insererQuadreplet(&q, "ADD", buff, "1", buff, qc);
                            qc++;
                        }
                        }


                    if((yyvsp[-1].variable).symbole->type % simpleToArrayOffset == TYPE_INTEGER){
                        int valeur = atoi(valeurString);
                        valeur++;
                        sprintf(valeurString, "%d", valeur);
                    }else{
                        double valeur = atof(valeurString);
                        valeur++;
                        sprintf(valeurString,"%.4f",valeur);
                    };
                    if((yyvsp[-1].variable).symbole->type < simpleToArrayOffset)

                        {
                            setValeur((yyvsp[-1].variable).symbole, valeurString);
                        }
                    else
                        {
                            setArrayElement((yyvsp[-1].variable).symbole, (yyvsp[-1].variable).index, valeurString);
                        }

                }
            }
        }
        }
            
    }
#line 2339 "SyntaxiqueAnalyser.tab.c"
    break;

  case 69: /* While: DebutWhile Bloc acolladefermante  */
#line 902 "SyntaxiqueAnalyser.y"
                                     {
        char adresse[10];
    char adresseCondWhile [10];
    int sauvAdrDebutWhile = depiler(stack);
    int sauvAdrCondWhile = depiler(stack);
    sprintf(adresseCondWhile,"%d",sauvAdrCondWhile);
    insererQuadreplet(&q,"BR",adresseCondWhile,"","",qc);
    qc++;
    sprintf(adresse,"%d",qc);
    updateQuadreplet(q,sauvAdrDebutWhile,adresse);

    }
#line 2356 "SyntaxiqueAnalyser.tab.c"
    break;

  case 70: /* DebutWhile: ConditionWhile Expression parenthesefermante acolladeouvrante  */
#line 916 "SyntaxiqueAnalyser.y"
                                                                      {
            if((yyvsp[-2].expression).type == TYPE_BOOLEAN){
        char r[10]; // contien le resultat de l'expression de la condition
        sprintf(r,"R%d",qc-1);	// this writes R to the r string
		insererQuadreplet(&q,"BZ","tmp","",r,qc); // jump if condition returns false(0) 
        // to finWhile
		empiler(stack,qc); // on sauvgarde l'addresse de cette quadreplet pour updater le
        // quadreplet
		qc++;
    }else{
        yyerrorSemantic( "Non boolean expression found");
    }

        }
#line 2375 "SyntaxiqueAnalyser.tab.c"
    break;

  case 71: /* ConditionWhile: WHILE parentheseouvrante  */
#line 931 "SyntaxiqueAnalyser.y"
                                {
        empiler(stack,qc);
      }
#line 2383 "SyntaxiqueAnalyser.tab.c"
    break;

  case 77: /* Valeur: INT  */
#line 944 "SyntaxiqueAnalyser.y"
          { (yyval.expression).type = TYPE_INTEGER; (yyval.expression).integerValue = (yyvsp[0].integerValue); }
#line 2389 "SyntaxiqueAnalyser.tab.c"
    break;

  case 78: /* Valeur: REAL  */
#line 945 "SyntaxiqueAnalyser.y"
           { (yyval.expression).type = TYPE_FLOAT; (yyval.expression).floatValue = (yyvsp[0].floatValue ); }
#line 2395 "SyntaxiqueAnalyser.tab.c"
    break;

  case 79: /* Valeur: STRING  */
#line 946 "SyntaxiqueAnalyser.y"
            { (yyval.expression).type = TYPE_STRING; strcpy((yyval.expression).stringValue, (yyvsp[0].stringValue)); }
#line 2401 "SyntaxiqueAnalyser.tab.c"
    break;

  case 80: /* Valeur: BOOL  */
#line 947 "SyntaxiqueAnalyser.y"
           { (yyval.expression).type = TYPE_BOOLEAN; (yyval.expression).booleanValue = (yyvsp[0].booleanValue); }
#line 2407 "SyntaxiqueAnalyser.tab.c"
    break;

  case 85: /* Variable: IDF  */
#line 958 "SyntaxiqueAnalyser.y"
        {
        symbole * s = rechercherSymbole(tableSymboles, (yyvsp[0].identifier));
        if(s==NULL){
            yyerrorSemantic( "Unknown variable");
            (yyval.variable).symbole = NULL;
        }else if(s->type >= simpleToArrayOffset){
            yyerrorSemantic( "Wrong array referencement syntax, did you mean ID[<index>]");
            (yyval.variable).symbole = NULL;
        }else{
            (yyval.variable).symbole = s;
            (yyval.variable).index = -1;
        }
    }
#line 2425 "SyntaxiqueAnalyser.tab.c"
    break;


#line 2429 "SyntaxiqueAnalyser.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 975 "SyntaxiqueAnalyser.y"

void yysuccess(char *s){
    currentColumn+=yyleng;
}

void yyerror(const char *s) {
    fprintf(stdout, "File '%s', line %d, character %d :"GREEN" %s "RESET"\n", file, yylineno, currentColumn, s);
    hasFailed = true;
}

void yyerrorSemantic(char *s){
    fprintf(stdout, "File '%s', line %d, character %d, ssemantic error: " RED " %s " RESET "\n", file, yylineno, currentColumn, s);
    hasFailed = true;
    return;
}

int main (void)
{
    // yydebug = 1;
    yyin=fopen(file, "r");
    if(yyin==NULL){
        printf("Erreur dans louverture du fichier\n");
        return 1;
    }

    stack = (pile *)malloc(sizeof(pile));
    quadFifo = initializeFifo();

    yyparse();  
    if (!hasFailed){

    afficherTableSymboles(tableSymboles);
    
    afficherQuad(q);
    }
    
    if(tableSymboles != NULL){
        free(tableSymboles);
    }

    free(stack);
    free(quadFifo);
    fclose(yyin);


    return 0;
}

void showLexicalError() {

    char line[256], introError[80]; 

    fseek(yyin, 0, SEEK_SET);
    
    int i = 0; 

    while (fgets(line, sizeof(line), yyin)) { 
        i++; 
        if(i == yylineno) break;  
    } 
        
    sprintf(introError, "Lexical error in Line %d : Unrecognized character : ", yylineno);
    printf("%s%s", introError, line);  
    int j=1;
    while(j<currentColumn+strlen(introError)) { printf(" "); j++; }
    printf("^\n");
    hasFailed=true;


}
