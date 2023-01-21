%{
#include<stdio.h>
#include "bison.tab.c"
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int line = 1;
typedef char UTF8;
%}


id [a-zA-Z][_0-9a-zA-Z]*
chiffre [0-9]*
entier [-]?[0-9]|[-]?[0-9][0-9]|[-]?[0-9][0-9][0-9]|[-]?[0-9][0-9][0-9][0-9]|[-]?[0-9][0-9][0-9][0-9][0-9]
nfloat {entier}"."{chiffre}
nlong [-]?[0-9]{chiffre}{6,10}
chaindc {ID}+
commentaire (\/\*([^*]|\*[^/])*\*+\/)
%%
int 				{strcpy(yylval.mot,yytext);return INT;}
long 				{strcpy(yylval.mot,yytext);return LONG;}
float 				{strcpy(yylval.mot,yytext);return FLOAT;}
char 				{strcpy(yylval.mot,yytext);return CHAR;}
string            {strcpy(yylval.mot,yytext);return STRING;}
entier 			{strcpy(yylval.mot,yytext);return ENTIER;}
list {strcpy(yylval.mot,yytext);return LIST;}


void::			{strcpy(yylval.mot,yytext);return VOID;}
main:: {strcpy(yylval.mot,yytext);return MAIN;}
if			{return IF;}
else 			{return ELSE;}
for			{return FOR;}
while		        {return WHILE;}
scannerInput		{return READ;}
writeOutput	         {return WRITE;}
return	                {return RETURN;}
false		        {return FALSE; }
true			{return TRUE;}
Type	       return(TYPESTRUCT);
{commentaire}			{return COMMENTAIRE;}
{id} 				{  yylval.pos=addVariable(yytext);return ID;}
{chiffre}			{strcpy(yylval.mot,yytext); return CHIFFRE;}
{entier}			{int val=atoi(yytext); if(-32768>val || val>32767){printf("OVERFLOW ligne :%d \n",yylineno);} strncpy(yylval.mot,yytext,5);return ENTIER;}
{nfloat}			{strcpy(yylval.mot,yytext);return NFLOAT;}
{nlong}				{int val=atoi(yytext); if(-2147483648>val || val>2147483647){printf("OVERFLOW ligne :%d \n",yylineno);}strncpy(yylval.mot,yytext,11);return NLONG;}

">" 					{strcpy(yylval.mot,yytext);return SUPERIEUR;}
"<" 					{strcpy(yylval.mot,yytext);return INFERIEUR;}
"<=" 					{strcpy(yylval.mot,yytext);return INFERIEROREQUALS;}
">=" 					{strcpy(yylval.mot,yytext);return SUPERIEROREQUALS;}
"==" 					{strcpy(yylval.mot,yytext);return EGALE;}
"!=" 					{strcpy(yylval.mot,yytext);return DIFF;}
"!" 					{strcpy(yylval.mot,yytext);return NOT;}
"&&" 					{strcpy(yylval.mot,yytext);return AND;}
"||" 					{strcpy(yylval.mot,yytext);return OR;}
"+" 					{strcpy(yylval.mot,yytext);return PLUS;}
"-" 					{strcpy(yylval.mot,yytext);return MOINS;}
"=" 					{strcpy(yylval.mot,yytext);return AFFECTATION;}
"++" 					{strcpy(yylval.mot,yytext);return INC;}
"--" 					{strcpy(yylval.mot,yytext);return DEC;}
"%" 					{strcpy(yylval.mot,yytext);return MODE;}
"*" 					{strcpy(yylval.mot,yytext);return FOIS;}
"/" 					{strcpy(yylval.mot,yytext);return DIVISE;}

","					{return COMMA;}
"."					{return DOT;}
";"					{return SEMI;}
"(" 					{return LPAREN;}
")" 					{return RPAREN;}
"[" 					{return LBRACK;}
"]" 					{return RBRACK;}
"{" 					{return LBRACE;}
"}" 					{return RBRACE;}


"\t"					{}
"\n"   					{ yylineno++;}
.				{}
%%



