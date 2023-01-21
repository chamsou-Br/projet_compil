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


#line 129 "bison.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_BISON_TAB_H_INCLUDED  */
