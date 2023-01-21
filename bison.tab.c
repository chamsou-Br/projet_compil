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
#line 1 "bison.y"

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

// structure pour les erreurs
typedef struct err{
		char *s;
		int num;
		}Error;

typedef struct li { int info; struct li *svt; } elenco;
typedef struct {int pos; char info[50];elenco* true; elenco* false;char val[50]; } Exp_Structure ;
typedef struct qc { int i;char up1[50];char up2[50];char up3[50];char up4[50];} quadrapulet_structure;

char temp[1000]; int indice=0;
quadrapulet_structure quad[500];int quadsuiv=1 ;
char temp_value[50]="vide"; 
typedef struct elt{
		int niv;
		int nba;
		char val[20];
		int  pos;
		char nom[20];
		char type[20];
		char port[20];
		char nat[20];
		}table_symboles_structure;

typedef struct liste{
    int pos;
    struct liste *nxt;
}pathfinder;

void initialisation();
void Fusion(elenco ** tete1,elenco *tete2,elenco *tete3);
void creation_list(elenco **tete,int qc);
void modifier_quad(int br,elenco *tete) ;
void Global_Local_Var(pathfinder *liste,char * port);
void Not_declared();
void Update_table_symbole(char * type,pathfinder *liste);
pathfinder *Insertion(pathfinder *liste, int pos);
void play();
pathfinder* Creation( int pos);
void start_quad();
void QC();
void generer_quad(char up1[20],char up2[20],char up3[20],char up4[20]);
void affiche(elenco *tet);

int isloc=0;
table_symboles_structure TableSymboles[1000];
int position=0;
int ligne=1,car=0,j=0;
char *nature=NULL;
char *port=NULL;
char *type1=NULL;
char *type2=NULL;
static int count=1;


#line 132 "bison.tab.c"

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
#ifndef YY_YY_BISON_TAB_H_INCLUDED
# define YY_YY_BISON_TAB_H_INCLUDED
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
    ID = 258,
    ENTIER = 259,
    RETURN = 260,
    INT = 261,
    LONG = 262,
    FLOAT = 263,
    key_simple = 264,
    CHAR = 265,
    IF = 266,
    ELSE = 267,
    FOR = 268,
    WHILE = 269,
    READ = 270,
    WRITE = 271,
    VOID = 272,
    FALSE = 273,
    TRUE = 274,
    SUPERIEUR = 275,
    INFERIEUR = 276,
    INFERIEROREQUALS = 277,
    SUPERIEROREQUALS = 278,
    EGALE = 279,
    DIFF = 280,
    NOT = 281,
    INC = 282,
    DEC = 283,
    AND = 284,
    OR = 285,
    PLUS = 286,
    MOINS = 287,
    AFFECTATION = 288,
    MODE = 289,
    FOIS = 290,
    DIVISE = 291,
    COMMA = 292,
    SEMI = 293,
    DOT = 294,
    LPAREN = 295,
    RPAREN = 296,
    LBRACK = 297,
    RBRACK = 298,
    LBRACE = 299,
    RBRACE = 300,
    COMMENTAIRE = 301,
    key_decaff = 302,
    key_incaff = 303,
    NFLOAT = 304,
    NLONG = 305,
    key_chaindc = 306,
    CHIFFRE = 307,
    LIST = 308,
    MAIN = 309,
    CHARAC = 310,
    CHAINE = 311,
    STRING = 312,
    TYPESTRUCT = 313,
    IFX = 314
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 138 "bison.y"

int 	pos;
char 	mot[20];
pathfinder *def;
int 	adress ;
Exp_Structure	Exp_Type;
elenco 	next;
char charac ;
char *string;


#line 256 "bison.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_BISON_TAB_H_INCLUDED  */



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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   335

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  171

#define YYUNDEFTOK  2
#define YYMAXUTOK   314


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
      55,    56,    57,    58,    59
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   160,   160,   163,   167,   170,   173,   174,   177,   178,
     193,   198,   199,   202,   203,   208,   209,   210,   211,   212,
     213,   216,   217,   218,   219,   220,   227,   233,   237,   238,
     241,   242,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   257,   258,   267,   268,   273,   279,   295,
     303,   314,   315,   342,   351,   363,   382,   389,   393,   401,
     408,   414,   421,   429,   437,   465,   472,   473,   474,   475,
     476,   477,   482,   490,   497,   498,   502,   512,   519,   520,
     521,   524,   532,   539,   546,   550,   553,   554,   555,   556,
     557,   558,   559,   562,   563
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "ENTIER", "RETURN", "INT", "LONG",
  "FLOAT", "key_simple", "CHAR", "IF", "ELSE", "FOR", "WHILE", "READ",
  "WRITE", "VOID", "FALSE", "TRUE", "SUPERIEUR", "INFERIEUR",
  "INFERIEROREQUALS", "SUPERIEROREQUALS", "EGALE", "DIFF", "NOT", "INC",
  "DEC", "AND", "OR", "PLUS", "MOINS", "AFFECTATION", "MODE", "FOIS",
  "DIVISE", "COMMA", "SEMI", "DOT", "LPAREN", "RPAREN", "LBRACK", "RBRACK",
  "LBRACE", "RBRACE", "COMMENTAIRE", "key_decaff", "key_incaff", "NFLOAT",
  "NLONG", "key_chaindc", "CHIFFRE", "LIST", "MAIN", "CHARAC", "CHAINE",
  "STRING", "TYPESTRUCT", "IFX", "$accept", "MAIN_FUNCTION", "BLOC_MAIN",
  "Declaration", "Declaration_var", "Declaration_mul", "var_decl_id",
  "Function", "ENTRES", "ENTRE", "type", "Type_list", "instructions",
  "WHYNOT", "bloc", "instruction", "Appel_function", "expression_decl",
  "if_instruction", "while_instruction", "Return_statment", "expression",
  "var", "Expr_log", "Expr_log_or", "Expr_log_not", "Expression_comp",
  "SUP_INF_EGALE_DIFF", "expression_add", "PLUS_MOINS",
  "Expression_fois_divise", "FOIS_DIVISE_MODE", "Expression_Neg",
  "Expression_par", "constant", "Adress1", "Adress2", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314
};
# endif

#define YYPACT_NINF (-110)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     115,  -110,  -110,  -110,  -110,  -110,    -6,    23,   -18,    63,
    -110,    34,  -110,  -110,  -110,  -110,  -110,    29,   194,  -110,
      14,  -110,   232,    20,    22,    25,    28,    32,  -110,  -110,
       1,   283,  -110,     1,  -110,  -110,  -110,  -110,  -110,  -110,
    -110,  -110,  -110,  -110,    78,  -110,  -110,  -110,  -110,  -110,
    -110,  -110,  -110,    45,   -11,    56,    60,  -110,  -110,   272,
       9,  -110,  -110,  -110,   115,  -110,  -110,    52,     7,     1,
      88,  -110,    90,    91,  -110,  -110,  -110,    54,   143,    19,
      -8,  -110,  -110,  -110,  -110,   259,  -110,  -110,  -110,  -110,
    -110,  -110,  -110,  -110,  -110,  -110,   283,   283,  -110,  -110,
    -110,   283,   -23,  -110,    96,  -110,     1,    62,    73,     1,
      66,    67,  -110,  -110,  -110,  -110,   115,   106,   109,  -110,
      74,  -110,     1,     1,    46,     9,  -110,   115,  -110,  -110,
    -110,     6,    72,    77,    81,  -110,    -9,    83,    82,  -110,
     115,    60,  -110,  -110,   194,    89,  -110,  -110,  -110,   194,
    -110,     5,   116,  -110,   194,  -110,   194,  -110,     1,  -110,
    -110,  -110,   -17,   194,  -110,  -110,     1,    92,  -110,   194,
    -110
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    15,    18,    19,    17,    16,     0,     0,     0,     0,
       1,     0,    21,    24,    25,    23,    22,     0,    42,    20,
      57,    86,     0,     0,     0,     0,     0,     0,    88,    87,
       0,     0,    46,     0,    29,    36,    89,    90,    91,    92,
       2,    38,     4,    39,     0,    31,     3,    30,    37,    32,
      33,    34,    35,     0,    84,    56,    59,    61,    63,    65,
      73,    77,    82,    85,    14,    57,    51,     0,    84,     0,
       0,    93,     0,     0,    84,    62,    81,     0,     0,     8,
       0,     7,    45,    55,    54,     0,    93,    93,    68,    67,
      69,    66,    70,    71,    74,    75,     0,     0,    80,    78,
      79,     0,     0,    12,     0,    52,     0,     0,     0,     0,
       0,     0,    83,    26,     4,    93,    14,     0,     0,     5,
      57,    53,     0,     0,    64,    72,    76,    14,    43,    13,
      93,     0,     0,     0,     0,    27,     0,     0,     8,     6,
      14,    58,    60,    11,    42,     0,    93,    40,    41,    42,
       9,     0,    47,    93,    42,    10,    42,    93,     0,    49,
      44,    94,     0,    42,    93,    48,     0,     0,    93,    42,
      50
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -110,  -110,  -110,  -110,    53,  -110,    12,  -110,  -109,     8,
       2,  -110,  -110,  -110,   -52,  -110,  -110,  -110,  -110,  -110,
    -110,   -21,   -22,   -24,    15,   -27,  -110,  -110,    42,  -110,
      43,  -110,   -25,  -110,    10,   -48,  -110
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,    40,    41,    42,    80,    81,    43,   102,   103,
      44,    17,    45,    78,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    96,    59,    97,
      60,   101,    61,    62,    63,   109,   163
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      68,    67,     8,    75,    65,    21,    76,   136,    74,    74,
      21,    68,    77,    86,   127,     9,    83,    84,   128,    28,
      29,   164,    85,    10,    28,    29,   115,    30,   127,   118,
     119,   151,   149,    31,    83,    84,    11,    18,   122,   123,
     106,    33,   127,    98,    99,   100,   156,    68,   107,    19,
      36,    37,    38,    39,    64,    36,    37,    38,    39,   116,
      69,   117,    70,    68,   121,    71,   104,   135,    72,    12,
      13,    14,    73,    15,    74,    74,   126,    94,    95,    74,
      16,    79,   144,    82,    68,   121,    86,    68,   132,    87,
     105,   108,   152,   110,   111,   112,   142,   155,   154,   129,
      74,    74,   159,   130,   160,   158,   131,   133,   134,   161,
     137,   165,   138,   146,   140,   147,   166,   170,   104,   148,
     169,     1,     2,     3,   117,     4,   150,   153,   157,   104,
     139,   114,     5,   168,   162,   143,    74,   141,   124,     0,
     125,   145,   104,     0,    68,   167,    20,    21,    22,     1,
       2,     3,     0,     4,    23,     0,    24,    25,    26,    27,
       5,    28,    29,     0,     0,     0,     0,     0,     6,    30,
       0,     0,     0,     0,     0,    31,     0,     0,     0,     0,
       0,    32,     0,    33,     0,     0,     0,    34,   113,    35,
       0,     0,    36,    37,    38,    39,     6,    20,    21,    22,
       1,     2,     3,     0,     4,    23,     0,    24,    25,    26,
      27,     5,    28,    29,     0,     0,     0,     0,     0,     0,
      30,     0,     0,     0,     0,     0,    31,     0,     0,     0,
       0,     0,    32,     0,    33,    65,    21,     0,    34,     0,
      35,     0,     0,    36,    37,    38,    39,     6,     0,     0,
      28,    29,     0,     0,     0,     0,     0,     0,    30,     0,
       0,     0,   120,    21,    31,     0,     0,     0,     0,     0,
      66,     0,    33,     0,     0,     0,     0,    28,    29,     0,
       0,    36,    37,    38,    39,    30,    65,    21,     0,     0,
       0,    31,    88,    89,    90,    91,    92,    93,     0,    33,
       0,    28,    29,    94,    95,     0,     0,     0,    36,    37,
      38,    39,     0,     0,     0,    31,     0,     0,     0,     0,
       0,     0,     0,    33,     0,     0,     0,     0,     0,     0,
       0,     0,    36,    37,    38,    39
};

static const yytype_int16 yycheck[] =
{
      22,    22,     0,    30,     3,     4,    31,   116,    30,    31,
       4,    33,    33,    30,    37,    21,    27,    28,    41,    18,
      19,    38,    33,     0,    18,    19,    78,    26,    37,    37,
      38,   140,    41,    32,    27,    28,    54,     3,    86,    87,
      33,    40,    37,    34,    35,    36,    41,    69,    69,    20,
      49,    50,    51,    52,    40,    49,    50,    51,    52,    40,
      40,    42,    40,    85,    85,    40,    64,   115,    40,     6,
       7,     8,    40,    10,    96,    97,   101,    31,    32,   101,
      17,     3,   130,    38,   106,   106,    30,   109,   109,    29,
      38,     3,   144,     3,     3,    41,   123,   149,   146,     3,
     122,   123,   154,    41,   156,   153,    33,    41,    41,   157,
       4,   163,     3,    41,    40,    38,   164,   169,   116,    38,
     168,     6,     7,     8,    42,    10,    43,    38,    12,   127,
     118,    78,    17,    41,   158,   127,   158,   122,    96,    -1,
      97,   131,   140,    -1,   166,   166,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    53,    26,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    40,    -1,    -1,    -1,    44,    45,    46,
      -1,    -1,    49,    50,    51,    52,    53,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    40,     3,     4,    -1,    44,    -1,
      46,    -1,    -1,    49,    50,    51,    52,    53,    -1,    -1,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    -1,     3,     4,    32,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    40,    -1,    -1,    -1,    -1,    18,    19,    -1,
      -1,    49,    50,    51,    52,    26,     3,     4,    -1,    -1,
      -1,    32,    20,    21,    22,    23,    24,    25,    -1,    40,
      -1,    18,    19,    31,    32,    -1,    -1,    -1,    49,    50,
      51,    52,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    50,    51,    52
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     6,     7,     8,    10,    17,    53,    61,    70,    21,
       0,    54,     6,     7,     8,    10,    17,    71,     3,    20,
       3,     4,     5,    11,    13,    14,    15,    16,    18,    19,
      26,    32,    38,    40,    44,    46,    49,    50,    51,    52,
      62,    63,    64,    67,    70,    72,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    88,
      90,    92,    93,    94,    40,     3,    38,    81,    82,    40,
      40,    40,    40,    40,    82,    85,    92,    81,    73,     3,
      65,    66,    38,    27,    28,    33,    30,    29,    20,    21,
      22,    23,    24,    25,    31,    32,    87,    89,    34,    35,
      36,    91,    68,    69,    70,    38,    33,    81,     3,    95,
       3,     3,    41,    45,    64,    74,    40,    42,    37,    38,
       3,    81,    95,    95,    88,    90,    92,    37,    41,     3,
      41,    33,    81,    41,    41,    95,    68,     4,     3,    66,
      40,    84,    85,    69,    95,    94,    41,    38,    38,    41,
      43,    68,    74,    38,    95,    74,    41,    12,    95,    74,
      74,    95,    83,    96,    38,    74,    95,    81,    41,    95,
      74
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    60,    61,    62,    63,    64,    65,    65,    66,    66,
      67,    68,    68,    69,    69,    70,    70,    70,    70,    70,
      70,    71,    71,    71,    71,    71,    72,    73,    73,    73,
      74,    74,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    76,    74,    77,    77,    78,    78,    79,
      79,    80,    80,    81,    81,    81,    81,    82,    83,    83,
      84,    84,    85,    85,    86,    86,    87,    87,    87,    87,
      87,    87,    88,    88,    89,    89,    90,    90,    91,    91,
      91,    92,    92,    93,    93,    93,    94,    94,    94,    94,
      94,    94,    94,    95,    96
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     1,     1,     3,     3,     1,     1,     4,
       6,     3,     1,     2,     0,     1,     1,     1,     1,     1,
       4,     1,     1,     1,     1,     1,     3,     3,     2,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     5,     0,     4,     7,     2,     1,     6,    10,     7,
      14,     2,     3,     3,     2,     2,     1,     1,     4,     1,
       4,     1,     2,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     3,     1,     1,     1,
       1,     2,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     0
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
  case 2:
#line 160 "bison.y"
                                     {
nature="main";Update_table_symbole((yyvsp[-3].mot),Creation((yyvsp[-1].pos)));
}
#line 1596 "bison.tab.c"
    break;

  case 3:
#line 163 "bison.y"
                 {(yyval.next)=(yyvsp[0].next);}
#line 1602 "bison.tab.c"
    break;

  case 4:
#line 167 "bison.y"
                                         { (yyval.def)=(yyvsp[0].def); isloc=1;}
#line 1608 "bison.tab.c"
    break;

  case 5:
#line 170 "bison.y"
                                                                   {(yyval.def)=(yyvsp[-1].def);Update_table_symbole((yyvsp[-2].mot),(yyvsp[-1].def));}
#line 1614 "bison.tab.c"
    break;

  case 6:
#line 173 "bison.y"
                                                                           { nature="var";(yyval.def)=Insertion((yyval.def),(yyvsp[0].pos));}
#line 1620 "bison.tab.c"
    break;

  case 7:
#line 174 "bison.y"
                                                     { nature="var";(yyval.def)=Creation((yyvsp[0].pos));}
#line 1626 "bison.tab.c"
    break;

  case 8:
#line 177 "bison.y"
                                    {(yyval.pos)=(yyvsp[0].pos);}
#line 1632 "bison.tab.c"
    break;

  case 9:
#line 178 "bison.y"
                                                                  { (yyval.pos)=(yyvsp[-3].pos);}
#line 1638 "bison.tab.c"
    break;

  case 10:
#line 193 "bison.y"
                                                                   {nature="fct";Update_table_symbole((yyvsp[-5].mot),Creation((yyvsp[-4].pos))); Global_Local_Var(Creation((yyvsp[-4].pos)),"GLOBAL_F");}
#line 1644 "bison.tab.c"
    break;

  case 13:
#line 202 "bison.y"
                                 {nature="arg";Update_table_symbole((yyvsp[-1].mot),Creation((yyvsp[0].pos)));isloc=0;Global_Local_Var(Creation((yyvsp[0].pos)),"LOCAL_F");}
#line 1650 "bison.tab.c"
    break;

  case 15:
#line 208 "bison.y"
                                     { strcpy((yyval.mot),(yyvsp[0].mot));}
#line 1656 "bison.tab.c"
    break;

  case 16:
#line 209 "bison.y"
                                              { strcpy((yyval.mot),(yyvsp[0].mot));}
#line 1662 "bison.tab.c"
    break;

  case 17:
#line 210 "bison.y"
                                              { strcpy((yyval.mot),(yyvsp[0].mot));}
#line 1668 "bison.tab.c"
    break;

  case 18:
#line 211 "bison.y"
                                              { strcpy((yyval.mot),(yyvsp[0].mot));}
#line 1674 "bison.tab.c"
    break;

  case 19:
#line 212 "bison.y"
                                               { strcpy((yyval.mot),(yyvsp[0].mot));}
#line 1680 "bison.tab.c"
    break;

  case 20:
#line 213 "bison.y"
                                                                             { strcpy((yyval.mot),(yyvsp[-3].mot));}
#line 1686 "bison.tab.c"
    break;

  case 21:
#line 216 "bison.y"
                         { strcpy((yyval.mot),(yyvsp[0].mot));}
#line 1692 "bison.tab.c"
    break;

  case 22:
#line 217 "bison.y"
                                              { strcpy((yyval.mot),(yyvsp[0].mot));}
#line 1698 "bison.tab.c"
    break;

  case 23:
#line 218 "bison.y"
                                              { strcpy((yyval.mot),(yyvsp[0].mot));}
#line 1704 "bison.tab.c"
    break;

  case 24:
#line 219 "bison.y"
                                              { strcpy((yyval.mot),(yyvsp[0].mot));}
#line 1710 "bison.tab.c"
    break;

  case 25:
#line 220 "bison.y"
                                               { strcpy((yyval.mot),(yyvsp[0].mot));}
#line 1716 "bison.tab.c"
    break;

  case 26:
#line 228 "bison.y"
                                        {
						(yyval.next).svt=(yyvsp[-1].next).svt;
					}
#line 1724 "bison.tab.c"
    break;

  case 27:
#line 234 "bison.y"
                                        {
						modifier_quad((yyvsp[0].adress),(yyvsp[-1].next).svt);(yyval.next).svt=(yyvsp[-1].next).svt;
					}
#line 1732 "bison.tab.c"
    break;

  case 28:
#line 237 "bison.y"
                                                                {/*LOCAL MISE*/ Global_Local_Var((yyvsp[0].def),"LOCAL");}
#line 1738 "bison.tab.c"
    break;

  case 29:
#line 238 "bison.y"
                                         {(yyval.next).svt=NULL;}
#line 1744 "bison.tab.c"
    break;

  case 31:
#line 242 "bison.y"
                                                        {(yyval.next).svt=(yyvsp[0].next).svt;}
#line 1750 "bison.tab.c"
    break;

  case 32:
#line 245 "bison.y"
                                     {(yyval.next).svt=(yyvsp[0].next).svt;}
#line 1756 "bison.tab.c"
    break;

  case 33:
#line 246 "bison.y"
                                                        {(yyval.next).svt=(yyvsp[0].next).svt;}
#line 1762 "bison.tab.c"
    break;

  case 34:
#line 247 "bison.y"
                                                                {(yyval.next).svt=(yyvsp[0].next).svt;}
#line 1768 "bison.tab.c"
    break;

  case 35:
#line 248 "bison.y"
                                                                {(yyval.next).svt=NULL;}
#line 1774 "bison.tab.c"
    break;

  case 36:
#line 249 "bison.y"
                                                     {(yyval.next).svt=NULL;}
#line 1780 "bison.tab.c"
    break;

  case 37:
#line 250 "bison.y"
                                                        {(yyval.next).svt=NULL;}
#line 1786 "bison.tab.c"
    break;

  case 40:
#line 253 "bison.y"
                                                                     { printf("// LIRE VARIABLE \n"); }
#line 1792 "bison.tab.c"
    break;

  case 41:
#line 254 "bison.y"
                                                                        {printf("// WRITE VARIABLE\n"); }
#line 1798 "bison.tab.c"
    break;

  case 44:
#line 258 "bison.y"
                                                                                      {(yyval.next).svt=NULL;}
#line 1804 "bison.tab.c"
    break;

  case 45:
#line 267 "bison.y"
                                      { (yyval.next).svt=(yyvsp[-1].Exp_Type).false; }
#line 1810 "bison.tab.c"
    break;

  case 46:
#line 268 "bison.y"
                                          {(yyval.next).svt=NULL;}
#line 1816 "bison.tab.c"
    break;

  case 47:
#line 274 "bison.y"
                                        {

						modifier_quad((yyvsp[-1].adress),(yyvsp[-3].Exp_Type).true);
						Fusion(&(yyval.next).svt,(yyvsp[-3].Exp_Type).false,NULL);
					}
#line 1826 "bison.tab.c"
    break;

  case 48:
#line 280 "bison.y"
                                        {
						
						modifier_quad((yyvsp[-2].adress)+1,(yyvsp[-7].Exp_Type).false);
						Fusion(&(yyvsp[-7].Exp_Type).false,(yyvsp[-1].Exp_Type).false,NULL);
						modifier_quad((yyvsp[-5].adress),(yyvsp[-7].Exp_Type).false);
						Fusion(&(yyval.next).svt,(yyvsp[-7].Exp_Type).false,NULL);
						elenco *p;
						p=(elenco *)malloc(sizeof(elenco));
						p=NULL;
						//Fusion(&$$.svt,$10.svt,p);
					}
#line 1842 "bison.tab.c"
    break;

  case 49:
#line 296 "bison.y"
                                        {
						modifier_quad((yyvsp[-1].adress),(yyvsp[-3].Exp_Type).true);
						;(yyval.next).svt=(yyvsp[-3].Exp_Type).false;
						generer_quad( "BR","","",""); 
						QC();
						sprintf(quad[quadsuiv-1].up4,"%d",(yyvsp[-4].adress));
					}
#line 1854 "bison.tab.c"
    break;

  case 50:
#line 304 "bison.y"
                                        {
						generer_quad( "BR","","",""); 
						QC();
						sprintf(quad[quadsuiv-1].up4,"%d",(yyvsp[-7].adress));
						(yyval.next).svt=(yyvsp[-6].Exp_Type).false;

					}
#line 1866 "bison.tab.c"
    break;

  case 53:
#line 343 "bison.y"
                                        {
							generer_quad((yyvsp[-1].mot),(yyvsp[0].Exp_Type).info,"",(yyvsp[-2].mot));
							updateValue((yyvsp[-2].mot) , (yyvsp[0].Exp_Type).info);
							QC();
							strcpy((yyval.Exp_Type).info,(yyvsp[-2].mot));
							(yyval.Exp_Type).true=NULL; (yyval.Exp_Type).false=NULL;

					}
#line 1879 "bison.tab.c"
    break;

  case 54:
#line 352 "bison.y"
                                        {
						
						sprintf(temp_value,"T%d",count++);
						generer_quad("-",(yyvsp[-1].mot),"1",temp_value);
						QC();
						generer_quad("=",temp_value,"",(yyvsp[-1].mot));
						QC();
						strcpy((yyval.Exp_Type).info,temp_value);
						(yyval.Exp_Type).true=NULL; (yyval.Exp_Type).false=NULL;
						printf("%d ll",quadsuiv);
					}
#line 1895 "bison.tab.c"
    break;

  case 55:
#line 364 "bison.y"
                                        {
				
						sprintf(temp_value,"T%d",count++);
						generer_quad("+",(yyvsp[-1].mot),"1",temp_value);
/*
						int  j =  getVariable($1);
						printf("mm %s",TableSymboles[j].val);
						char value[20];
						updateValue($1 ,itoa(value, atoi(TableSymboles[j].val)+1), 10); ;

*/						
					    QC();
						generer_quad("=",temp_value,"",(yyvsp[-1].mot));
						QC();
						strcpy((yyval.Exp_Type).info,temp_value);
						(yyval.Exp_Type).true=NULL; (yyval.Exp_Type).false=NULL;
						printf("%d",quadsuiv);
					}
#line 1918 "bison.tab.c"
    break;

  case 56:
#line 383 "bison.y"
                                        {
						(yyval.Exp_Type).true=(yyvsp[0].Exp_Type).true; (yyval.Exp_Type).false=(yyvsp[0].Exp_Type).false;
						strcpy((yyval.Exp_Type).info,(yyvsp[0].Exp_Type).info);
					}
#line 1927 "bison.tab.c"
    break;

  case 57:
#line 389 "bison.y"
                                            { strcpy((yyval.mot),TableSymboles[(yyvsp[0].pos)].nom); }
#line 1933 "bison.tab.c"
    break;

  case 58:
#line 394 "bison.y"
                                        {
						generer_quad("BR","","","");
						QC();
						modifier_quad((yyvsp[-1].adress),(yyvsp[-3].Exp_Type).false);
						(yyval.Exp_Type).false=(yyvsp[0].Exp_Type).false;
						Fusion(&(yyval.Exp_Type).true,(yyvsp[-3].Exp_Type).true,(yyvsp[0].Exp_Type).true);		
					}
#line 1945 "bison.tab.c"
    break;

  case 59:
#line 402 "bison.y"
                                        {
						(yyval.Exp_Type).true=(yyvsp[0].Exp_Type).true; (yyval.Exp_Type).false=(yyvsp[0].Exp_Type).false;
						strcpy((yyval.Exp_Type).info,(yyvsp[0].Exp_Type).info);	
					}
#line 1954 "bison.tab.c"
    break;

  case 60:
#line 409 "bison.y"
                                        {
						modifier_quad((yyvsp[-1].adress),(yyvsp[-3].Exp_Type).false);
						(yyval.Exp_Type).true=(yyvsp[0].Exp_Type).true;
						Fusion(&(yyval.Exp_Type).false,(yyvsp[-3].Exp_Type).false,(yyvsp[0].Exp_Type).false);
					}
#line 1964 "bison.tab.c"
    break;

  case 61:
#line 415 "bison.y"
                                        {
						(yyval.Exp_Type).true=(yyvsp[0].Exp_Type).true; (yyval.Exp_Type).false=(yyvsp[0].Exp_Type).false;
						strcpy((yyval.Exp_Type).info,(yyvsp[0].Exp_Type).info);
					}
#line 1973 "bison.tab.c"
    break;

  case 62:
#line 422 "bison.y"
                                        {
						(yyval.Exp_Type).true=(yyvsp[0].Exp_Type).false; (yyval.Exp_Type).false=(yyvsp[0].Exp_Type).true;
						sprintf(temp_value,"T%d",count++);
						generer_quad((yyvsp[-1].mot),"",(yyvsp[0].Exp_Type).info,temp_value);
						QC();	
						strcpy((yyval.Exp_Type).info,temp_value);
					}
#line 1985 "bison.tab.c"
    break;

  case 63:
#line 430 "bison.y"
                                        {
						(yyval.Exp_Type).true=(yyvsp[0].Exp_Type).true; (yyval.Exp_Type).false=(yyvsp[0].Exp_Type).false;
						strcpy((yyval.Exp_Type).info,(yyvsp[0].Exp_Type).info);	
					}
#line 1994 "bison.tab.c"
    break;

  case 64:
#line 438 "bison.y"
                                        {
						sprintf(temp_value,"T%d",count++);
						strcpy((yyval.Exp_Type).info,temp_value);
						char operand[50];
						if (strcmp((yyvsp[-1].mot),"<")==0) {
							strcpy(operand,"BME");
						}
						if (strcmp((yyvsp[-1].mot),"<=")==0) {
							strcpy(operand,"BM");
						}
						if (strcmp((yyvsp[-1].mot),">")==0) {
							strcpy(operand,"BLE");
						}
						if (strcmp((yyvsp[-1].mot),">=")==0) {
							strcpy(operand,"BL");
						}
						if (strcmp((yyvsp[-1].mot),"==")==0) {
							strcpy(operand,"BNE");
						}
						if (strcmp((yyvsp[-1].mot),"!=")==0) {
							strcpy(operand,"BE");
						}
						generer_quad(operand,(yyvsp[-2].Exp_Type).info,(yyvsp[0].Exp_Type).info,"");
						QC();	
						creation_list(&(yyval.Exp_Type).true,quadsuiv) ; 
						creation_list(&(yyval.Exp_Type).false,quadsuiv-1) ;
					}
#line 2026 "bison.tab.c"
    break;

  case 65:
#line 466 "bison.y"
                                        {
						strcpy((yyval.Exp_Type).info,(yyvsp[0].Exp_Type).info);
						(yyval.Exp_Type).true=(yyvsp[0].Exp_Type).true; (yyval.Exp_Type).false=(yyvsp[0].Exp_Type).false;
					}
#line 2035 "bison.tab.c"
    break;

  case 66:
#line 472 "bison.y"
                                           {strcpy((yyval.mot),(yyvsp[0].mot)); }
#line 2041 "bison.tab.c"
    break;

  case 67:
#line 473 "bison.y"
                                                   {strcpy((yyval.mot),(yyvsp[0].mot)); }
#line 2047 "bison.tab.c"
    break;

  case 68:
#line 474 "bison.y"
                                                   {strcpy((yyval.mot),(yyvsp[0].mot)); }
#line 2053 "bison.tab.c"
    break;

  case 69:
#line 475 "bison.y"
                                                          {strcpy((yyval.mot),(yyvsp[0].mot)); }
#line 2059 "bison.tab.c"
    break;

  case 70:
#line 476 "bison.y"
                                               {strcpy((yyval.mot),(yyvsp[0].mot)); }
#line 2065 "bison.tab.c"
    break;

  case 71:
#line 477 "bison.y"
                                              {strcpy((yyval.mot),(yyvsp[0].mot)); }
#line 2071 "bison.tab.c"
    break;

  case 72:
#line 483 "bison.y"
                                        {
						sprintf(temp_value,"T%d",count++);
						generer_quad((yyvsp[-1].mot),(yyvsp[-2].Exp_Type).info,(yyvsp[0].Exp_Type).info,temp_value);
						QC();	
						strcpy((yyval.Exp_Type).info,temp_value);
						(yyval.Exp_Type).true=(yyvsp[-2].Exp_Type).true; (yyval.Exp_Type).false=(yyvsp[-2].Exp_Type).false;
					}
#line 2083 "bison.tab.c"
    break;

  case 73:
#line 491 "bison.y"
                                        {
						strcpy((yyval.Exp_Type).info,(yyvsp[0].Exp_Type).info);
						(yyval.Exp_Type).true=(yyvsp[0].Exp_Type).true; (yyval.Exp_Type).false=(yyvsp[0].Exp_Type).false;
					}
#line 2092 "bison.tab.c"
    break;

  case 74:
#line 497 "bison.y"
                                      {strcpy((yyval.mot),(yyvsp[0].mot)); }
#line 2098 "bison.tab.c"
    break;

  case 75:
#line 498 "bison.y"
                                               {strcpy((yyval.mot),(yyvsp[0].mot)); }
#line 2104 "bison.tab.c"
    break;

  case 76:
#line 503 "bison.y"
                                        {
						sprintf(temp_value,"T%d",count++);
						generer_quad((yyvsp[-1].mot),(yyvsp[-2].Exp_Type).info,(yyvsp[0].Exp_Type).info,temp_value);	
						QC();
						strcpy((yyval.Exp_Type).info,temp_value);
						(yyval.Exp_Type).true=(yyvsp[-2].Exp_Type).true; (yyval.Exp_Type).false=(yyvsp[-2].Exp_Type).false;

				
					}
#line 2118 "bison.tab.c"
    break;

  case 77:
#line 513 "bison.y"
                                        {
						strcpy((yyval.Exp_Type).info,(yyvsp[0].Exp_Type).info);
						(yyval.Exp_Type).true=(yyvsp[0].Exp_Type).true; (yyval.Exp_Type).false=(yyvsp[0].Exp_Type).false;
					}
#line 2127 "bison.tab.c"
    break;

  case 78:
#line 519 "bison.y"
                                {strcpy((yyval.mot),(yyvsp[0].mot));}
#line 2133 "bison.tab.c"
    break;

  case 79:
#line 520 "bison.y"
                                                {strcpy((yyval.mot),(yyvsp[0].mot));}
#line 2139 "bison.tab.c"
    break;

  case 80:
#line 521 "bison.y"
                                                {strcpy((yyval.mot),(yyvsp[0].mot));}
#line 2145 "bison.tab.c"
    break;

  case 81:
#line 525 "bison.y"
                                        {
						sprintf(temp_value,"T%d",count++);
						generer_quad((yyvsp[-1].mot),"",(yyvsp[0].Exp_Type).info,temp_value);	
						strcpy((yyval.Exp_Type).info,temp_value);
						QC();
						(yyval.Exp_Type).true=(yyvsp[0].Exp_Type).true; (yyval.Exp_Type).false=(yyvsp[0].Exp_Type).false;
					}
#line 2157 "bison.tab.c"
    break;

  case 82:
#line 533 "bison.y"
                                        {
						(yyval.Exp_Type).true=(yyvsp[0].Exp_Type).true; (yyval.Exp_Type).false=(yyvsp[0].Exp_Type).false;
						strcpy((yyval.Exp_Type).info,(yyvsp[0].Exp_Type).info);
					}
#line 2166 "bison.tab.c"
    break;

  case 83:
#line 540 "bison.y"
                                        {

						(yyval.Exp_Type).true=(yyvsp[-1].Exp_Type).true; (yyval.Exp_Type).false=(yyvsp[-1].Exp_Type).false;
						strcpy((yyval.Exp_Type).info,(yyvsp[-1].Exp_Type).info);
						strcpy((yyval.Exp_Type).val,(yyvsp[-1].Exp_Type).val);
					}
#line 2177 "bison.tab.c"
    break;

  case 84:
#line 547 "bison.y"
                                        {
						strcpy((yyval.Exp_Type).info,(yyvsp[0].mot));
					}
#line 2185 "bison.tab.c"
    break;

  case 85:
#line 550 "bison.y"
                                                  {strcpy((yyval.Exp_Type).info,(yyvsp[0].Exp_Type).info);}
#line 2191 "bison.tab.c"
    break;

  case 86:
#line 553 "bison.y"
                                        {strcpy((yyval.Exp_Type).info,(yyvsp[0].mot));strcpy((yyval.Exp_Type).val,(yyvsp[0].mot));}
#line 2197 "bison.tab.c"
    break;

  case 87:
#line 554 "bison.y"
                                                {strcpy((yyval.Exp_Type).info,(yyvsp[0].mot));strcpy((yyval.Exp_Type).val,(yyvsp[0].mot));}
#line 2203 "bison.tab.c"
    break;

  case 88:
#line 555 "bison.y"
                                                {strcpy((yyval.Exp_Type).info,(yyvsp[0].mot));strcpy((yyval.Exp_Type).val,(yyvsp[0].mot));}
#line 2209 "bison.tab.c"
    break;

  case 89:
#line 556 "bison.y"
                                                {strcpy((yyval.Exp_Type).info,(yyvsp[0].mot));strcpy((yyval.Exp_Type).val,(yyvsp[0].mot));}
#line 2215 "bison.tab.c"
    break;

  case 90:
#line 557 "bison.y"
                                                {strcpy((yyval.Exp_Type).info,(yyvsp[0].mot));strcpy((yyval.Exp_Type).val,(yyvsp[0].mot));}
#line 2221 "bison.tab.c"
    break;

  case 91:
#line 558 "bison.y"
                                                        {strcpy((yyval.Exp_Type).info,(yyvsp[0].mot));strcpy((yyval.Exp_Type).val,(yyvsp[0].mot));}
#line 2227 "bison.tab.c"
    break;

  case 92:
#line 559 "bison.y"
                                                        {strcpy((yyval.Exp_Type).info,(yyvsp[0].mot));strcpy((yyval.Exp_Type).val,(yyvsp[0].mot));}
#line 2233 "bison.tab.c"
    break;

  case 93:
#line 562 "bison.y"
          { (yyval.adress)=quadsuiv; }
#line 2239 "bison.tab.c"
    break;

  case 94:
#line 563 "bison.y"
          {	
	generer_quad("BR","","","");	
	QC();
	creation_list(&(yyval.Exp_Type).false,quadsuiv-1) ;(yyval.Exp_Type).true=NULL; 
	}
#line 2249 "bison.tab.c"
    break;


#line 2253 "bison.tab.c"

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
#line 570 "bison.y"



int main(int argc, char *argv[])
{


yyin=fopen("test","r");
//initialisation();
 yyparse(); 
 yylex();
Not_declared();
play();
start_quad();
return 0;
}
 ///////////////////////////////////////////// 

void affiche(elenco *tet)
{
elenco *p;
for(p=tet;p!=NULL;p=p->svt) printf("voila %d \n",p->info);

}

void Fusion(elenco ** tete1,elenco *tete2,elenco *tete3)
{elenco *p;

for(p=tete2;p->svt!=NULL;p=p->svt);
p->svt=tete3;
*tete1=tete2;
}


void modifier_quad(int br,elenco *tete) 
{
elenco *p;  
for(p=tete;p!=NULL;p=p->svt) 
sprintf(quad[p->info].up4,"%d",br); 

}


void creation_list(elenco **tete,int qc)
{
elenco *p;
p=(elenco *)malloc(sizeof(elenco));
p->info=qc;
p->svt=NULL;
*tete=p;
}



void QC()
{
quadsuiv++;
}

void generer_quad(char up1[50],char up2[50],char up3[50],char up4[50])
{
quad[quadsuiv].i=quadsuiv;
strcpy(quad[quadsuiv].up1,up1);
strcpy(quad[quadsuiv].up2,up2);
strcpy(quad[quadsuiv].up3,up3);
strcpy(quad[quadsuiv].up4,up4);
}

void initialisation()
{
int i=0;
for(i;i<500-1;i++)
{
strcpy(quad[i].up1,"1");
strcpy(quad[i].up2,"vide");
strcpy(quad[i].up3,"vide");
strcpy(quad[i].up4,"vide");
}

}

void start_quad()
{
char a[5],b[5],c[5],d[5],e[5];
strcpy(a,"Num");
strcpy(b,"Ope");
strcpy(c,"Opr1");
strcpy(d,"Opr2");
strcpy(e,"Resu");
int i=1;
printf("\x1B[35m\n\n----------------TABLE DES QUADRUPLETS---\n");
printf("%5s   | %5s   |%5s   |%5s   |%5s  \n",a,b,c,d,e);
printf("%5c   | %5c   |%5c   |%5c   |%5c  \n",45,45,45,45,45);
for(i;i<quadsuiv;i++)
{
printf("%5d   | %5s   |%5s   |%5s   |%5s  \n",quad[i].i,quad[i].up1,quad[i].up2,quad[i].up3,quad[i].up4);

}

printf("%5d   | %5c   |%5c   |%5c   |%5c  \n\x1B[0m",quadsuiv,45,45,45,45);

}

void play()
{
char a[5],b[5],c[5],d[5],e[5],f[5];
strcpy(a,"Pos");
strcpy(b,"Nom");
strcpy(c,"Type");
strcpy(d,"Nat");
strcpy(e,"Porté");
strcpy(f,"value");
printf("\x1B[36m\n\n----------------TABLE DES SYMBOLES----------\n");
printf("%7s   | %7s   |%7s   |%7s    |%7s  \n",a,b,c,d,f);
printf("%7c   | %7c   |%7c   |%7c   |%7c  \n",45,45,45,45,45);
int z;
for (z=0;z<position;z++)
{
printf("%7d   | %7s   |%7s   |%7s   |%7s\n",TableSymboles[z].pos,TableSymboles[z].nom,TableSymboles[z].type,TableSymboles[z].nat,TableSymboles[z].val);

}
printf("%7c   | %7c   |%7c   |%7c   |%7c  \n",45,45,45,45,45);

}

// inserer variable dans un liste de variables de meme type en cas de Declaration multiple
pathfinder* Insertion(pathfinder *liste, int pos)
{
    pathfinder* nouvelElement = malloc(sizeof(pathfinder));
    nouvelElement->pos = pos;
    nouvelElement->nxt = NULL;

        pathfinder* temp=liste;
        while(temp->nxt != NULL )
        {	if(temp->pos==pos){
		    Error* monerreur = malloc(sizeof(Error));


			monerreur->num=0;
			monerreur->s=TableSymboles[temp->pos].nom;
			yyerror((void *)monerreur);
			monerreur->num=1;
			monerreur->s=TableSymboles[temp->pos].nom;
			yyerror((void *)monerreur);	}
            temp = temp->nxt;
        }
        temp->nxt = nouvelElement;
        return liste;
}

// creation d'un list de variables en cas de Declaration multiple
pathfinder* Creation( int pos)
{	
    pathfinder* nouvelElement = malloc(sizeof(pathfinder));
    nouvelElement->pos = pos;
    nouvelElement->nxt = NULL;

        return nouvelElement;
}


// defini si le variable est local ou global
void Global_Local_Var(pathfinder *liste,char * port)
{


	char *t=NULL;
        pathfinder* temp=liste;
        while(temp->nxt != NULL)
        {
		strcpy(TableSymboles[temp->pos].port,port);
		temp = temp->nxt;
        }

	strcpy(TableSymboles[temp->pos].port,port);

}

// ajouter les information de  variables in Table de symboles
void Update_table_symbole(char * type,pathfinder *liste)
{	char *t=NULL;
        pathfinder* temp=liste;
        while(temp->nxt != NULL)
        {
		if(strcmp("",TableSymboles[temp->pos].type)!=0){
		    Error* monerreur = malloc(sizeof(Error));


			monerreur->num=0;
			monerreur->s=TableSymboles[temp->pos].nom;
			yyerror((void *)monerreur);


			monerreur->num=3;
			monerreur->s=TableSymboles[temp->pos].nom;
			yyerror((void *)monerreur);
	 ;}     
		strncpy(TableSymboles[temp->pos].type,type,7);
		strcpy(TableSymboles[temp->pos].nat,nature);
		//if(port!=NULL) strcpy(TableSymboles[temp->pos].port,port);   
		temp = temp->nxt;

        }
if(strcmp("",TableSymboles[temp->pos].type)!=0){
		    Error* monerreur = malloc(sizeof(Error));


			monerreur->num=0;
			monerreur->s=TableSymboles[temp->pos].nom;
			yyerror((void *)monerreur);


			monerreur->num=3;
			monerreur->s=TableSymboles[temp->pos].nom;
			yyerror((void *)monerreur);
	 ;}
	strncpy(TableSymboles[temp->pos].type,type,7); 
	strcpy(TableSymboles[temp->pos].nat,nature);
		//if(port!=NULL) strcpy(TableSymboles[temp->pos].port,port);   

}

// ajouter variable in table de symbole
addVariable(char * idf){
int v=getVariable(idf);
if (v==-1)
{
	strcpy(TableSymboles[position].nom,idf);
	TableSymboles[position].pos=position;
	position++;
	return(position-1);
}
else{
	return v;

}


}

void updateValue(char *chaine,char *value)
{
	int j = 0;
	int stop = 0 ;
	while(j<=position && stop == 0){
	    if(strcmp(TableSymboles[j].nom,chaine)==0) stop = 1;
		j = j + 1 ; 
	}
	if (stop == 1) {
		strcpy(TableSymboles[j-1].val,value);

	}

}



///////////////////////////////////////////////
// chercher un variable dans table de symbole
int getVariable(char *chaine)
{int j;

for(j=0;j<=position;j++)
{
if(strcmp(TableSymboles[j].nom,chaine)==0) return j;
}

return -1;
}

void Not_declared()
{int z;
for (z=0;z<position;z++)
{

if(strcmp("",TableSymboles[z].type)==0){
		    Error* monerreur = malloc(sizeof(Error));
			monerreur->num=4;
			monerreur->s=TableSymboles[z].nom;
			yyerror((void *)monerreur);

}

}
}

////////////////////////////////////////////////

yyerror(void *s) {

	Error *new;
	new =(Error*) s;

switch( new->num ) 
{
    case 0 :printf("\e[32m ligne :%d Erreur: redéclaration de '%s' sans lien\n",yylineno,new->s);
        break;
    case 1 :printf("\e[32m ligne :%d Erreur: déclaration précédente de '%s' existe deja\n",yylineno,new->s);
        break;
    case 2 :printf(" \e[32mligne :%d Erreur: attention: la variable non utilisé '%s' [-Wunused-variable]|\n",yylineno,new->s);
        break;
    case 3 :printf("\e[32m ligne :%d Erreur: types contradictoires de '%s'\n",yylineno,new->s);
        break;
    case 4 :printf("\e[32m Erreur: «%s» non déclaré (première utilisation dans cette fonction) \n",new->s);
        break;

    default:printf("\e[32m ligne :%d Erreur: attendu '=', ',', ';', 'asm' or '__attribut__' avant '%s'\n",yylineno,yytext);
        break;

}


}
         

