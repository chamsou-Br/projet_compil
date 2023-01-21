%{
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

%}





%token ID
%token ENTIER
%token RETURN
%token INT
%token LONG
%token FLOAT
%token key_simple
%token CHAR
%token IF
%token ELSE
%token FOR
%token WHILE
%token READ
%token WRITE
%token VOID
%token FALSE
%token TRUE
%token SUPERIEUR
%token INFERIEUR
%token INFERIEROREQUALS
%token SUPERIEROREQUALS
%token EGALE
%token DIFF
%token NOT
%token INC
%token DEC
%token AND
%token OR
%token PLUS
%token MOINS
%token AFFECTATION

%token MODE
%token FOIS
%token DIVISE
%token COMMA
%token SEMI
%token DOT
%token LPAREN
%token RPAREN
%token LBRACK
%token RBRACK
%token LBRACE
%token RBRACE
%token COMMENTAIRE
%token key_decaff
%token key_incaff
%token NFLOAT
%token NLONG
%token key_chaindc
%token CHIFFRE
%token LIST
%token MAIN
%token CHARAC
%token CHAINE
%token STRING
%token TYPESTRUCT

%nonassoc IFX
%nonassoc ELSE

%right EGALE
%left OR
%left AND
%nonassoc INFERIEUR SUPERIEUR SUPERIEROREQUALS INFERIEROREQUALS
%left PLUS MOINS
%left FOIS DIVISE MODE
%left NOT


%union 
{
int 	pos;
char 	mot[20];
pathfinder *def;
int 	adress ;
Exp_Structure	Exp_Type;
elenco 	next;
char charac ;
char *string;

}

%type<mot> type LIST Type_list INT VOID MAIN CHAR LONG STRING FLOAT  AFFECTATION OR AND NOT FOIS_DIVISE_MODE PLUS_MOINS SUP_INF_EGALE_DIFF FOIS DIVISE MODE MOINS ENTIER TRUE FALSE NFLOAT NLONG key_chaindc CHIFFRE PLUS SUPERIEROREQUALS INFERIEUR SUPERIEUR INFERIEROREQUALS EGALE DIFF var 
%type<def> Declaration_mul Declaration_var Declaration 
%type<pos> var_decl_id ID 
%type<adress> Adress1
%type<Exp_Type> expression Expr_log Expr_log_or Expr_log_not  Expression_comp	expression_add Expression_fois_divise Expression_Neg Expression_par constant Adress2
%type<next> WHYNOT bloc expression_decl if_instruction while_instruction instructions instruction BLOC_MAIN
%start MAIN_FUNCTION
%%

//------------------main function-----------------------
MAIN_FUNCTION:type MAIN ID BLOC_MAIN {
nature="main";Update_table_symbole($1,Creation($3));
};
BLOC_MAIN: bloc  {$$=$1;};

//------------------Declaration variables-----------------------

Declaration 		:Declaration_var { $$=$1; isloc=1;}
					;

Declaration_var				:type Declaration_mul SEMI {$$=$2;Update_table_symbole($1,$2);}
					;

Declaration_mul				:Declaration_mul COMMA var_decl_id { nature="var";$$=Insertion($$,$3);}
					|var_decl_id { nature="var";$$=Creation($1);}
					;

var_decl_id			:ID {$$=$1;}
					|ID LBRACK ENTIER  RBRACK { $$=$1;}					
					;

/*
Declaration_struct : TYPESTRUCT ID LBRACE Champs_struct RBRACE

Champs_struct : Type_list ID  
| Type_list ID COMMA Champs_struct 
| LIST INFERIEUR Type_list SUPERIEUR ID 
| LIST INFERIEUR Type_list SUPERIEUR ID COMMA Champs_struct 
;
*/

//-------------------FUNCTION--------------------------------------

Function 			:type ID LPAREN ENTRES RPAREN bloc {nature="fct";Update_table_symbole($1,Creation($2)); Global_Local_Var(Creation($2),"GLOBAL_F");}			
					;
				
Functions:           Functions Function|/* vide */;

ENTRES			:ENTRES COMMA ENTRE 
					|ENTRE 
					;

ENTRE			:type ID {nature="arg";Update_table_symbole($1,Creation($2));isloc=0;Global_Local_Var(Creation($2),"LOCAL_F");}
					| /* vide */
					;

//-------------------  Type variables ---------------------------	

type				:INT { strcpy($$,$1);}
					|VOID { strcpy($$,$1);}
					|CHAR { strcpy($$,$1);}
					|LONG { strcpy($$,$1);}
					|FLOAT { strcpy($$,$1);}
					|LIST INFERIEUR Type_list SUPERIEUR  { strcpy($$,$1);}
					;

Type_list           :INT { strcpy($$,$1);}
					|VOID { strcpy($$,$1);}
					|CHAR { strcpy($$,$1);}
					|LONG { strcpy($$,$1);}
					|FLOAT { strcpy($$,$1);}
					;





instructions		:LBRACE  WHYNOT RBRACE
					{
						$$.svt=$2.svt;
					}
					;
					
WHYNOT				:WHYNOT  bloc Adress1
					{
						modifier_quad($3,$2.svt);$$.svt=$2.svt;
					}
					|WHYNOT Declaration_var {/*LOCAL MISE*/ Global_Local_Var($2,"LOCAL");}
					|{$$.svt=NULL;}
					;

bloc		        :instruction
					|instructions	{$$.svt=$1.svt;}
					;

instruction         :expression_decl {$$.svt=$1.svt;}
					|if_instruction	{$$.svt=$1.svt;}
					|while_instruction	{$$.svt=$1.svt;}
					|Return_statment	{$$.svt=NULL;}
					|COMMENTAIRE {$$.svt=NULL;}
					|Appel_function {$$.svt=NULL;}
					|Declaration
					|Function
					| READ LPAREN ID RPAREN SEMI { printf("// LIRE VARIABLE \n"); }
					| WRITE LPAREN ID RPAREN SEMI   {printf("// WRITE VARIABLE\n"); }	
					| /* */
					;
Appel_function			:ID LPAREN ENTRES RPAREN bloc
					:var AFFECTATION ID LPAREN ENTRES RPAREN bloc {$$.svt=NULL;}
					;
/*
arg_list				:arg_list COMMA ID 
					|ID
					|
					;
*/

expression_decl	    :expression SEMI  { $$.svt=$1.false; }
				    |SEMI {$$.svt=NULL;}
					;

//------------------)------if statement ------------------------------
 
if_instruction		:IF LPAREN expression RPAREN Adress1 bloc %prec IFX 
					{

						modifier_quad($5,$3.true);
						Fusion(&$$.svt,$3.false,NULL);
					}
					|IF LPAREN expression RPAREN Adress1 bloc ELSE Adress1 Adress2 bloc 
					{
						
						modifier_quad($8+1,$3.false);
						Fusion(&$3.false,$9.false,NULL);
						modifier_quad($5,$3.false);
						Fusion(&$$.svt,$3.false,NULL);
						elenco *p;
						p=(elenco *)malloc(sizeof(elenco));
						p=NULL;
						//Fusion(&$$.svt,$10.svt,p);
					}
					;


//------------------------while statement---------------------------
while_instruction	:WHILE LPAREN Adress1 expression RPAREN Adress1 bloc
					{
						modifier_quad($6,$4.true);
						;$$.svt=$4.false;
						generer_quad( "BR","","",""); 
						QC();
						sprintf(quad[quadsuiv-1].up4,"%d",$3);
					}
					|FOR LPAREN ID AFFECTATION constant SEMI Adress1 Expr_log SEMI Adress1 expression  RPAREN Adress1  bloc
					{
						generer_quad( "BR","","",""); 
						QC();
						sprintf(quad[quadsuiv-1].up4,"%d",$7);
						$$.svt=$8.false;

					}
				;

//-------------------Return statement---------------------------
Return_statment		:RETURN SEMI
					|RETURN expression SEMI

/*					;
RETURN_INT:RETURN ENTIER SEMI
| RETURN Expression SEMI
;

RETURN_CHAR:RETURN CHARAC SEMI
| RETURN Expression SEMI
;

RETURN_BOOL:RETURN FALSE SEMI
|RETURN TRUE SEMI
| RETURN Expr_log SEMI
;

RETURN_FLOAT:RETURN NFLOAT SEMI
| RETURN Expression SEMI
;

RETURN_STRING:RETURN CHAINE SEMI
| RETURN Expression SEMI
;
*/

//--------------------------Expression---------------------------

expression 			:var AFFECTATION expression 
					{
							generer_quad($2,$3.info,"",$1);
							updateValue($1 , $3.info);
							QC();
							strcpy($$.info,$1);
							$$.true=NULL; $$.false=NULL;

					}
					|var DEC
					{
						
						sprintf(temp_value,"T%d",count++);
						generer_quad("-",$1,"1",temp_value);
						QC();
						generer_quad("=",temp_value,"",$1);
						QC();
						strcpy($$.info,temp_value);
						$$.true=NULL; $$.false=NULL;
						printf("%d ll",quadsuiv);
					}
					|var INC
					{
				
						sprintf(temp_value,"T%d",count++);
						generer_quad("+",$1,"1",temp_value);
/*
						int  j =  getVariable($1);
						printf("mm %s",TableSymboles[j].val);
						char value[20];
						updateValue($1 ,itoa(value, atoi(TableSymboles[j].val)+1), 10); ;

*/						
					    QC();
						generer_quad("=",temp_value,"",$1);
						QC();
						strcpy($$.info,temp_value);
						$$.true=NULL; $$.false=NULL;
						printf("%d",quadsuiv);
					}
					|Expr_log
					{
						$$.true=$1.true; $$.false=$1.false;
						strcpy($$.info,$1.info);
					}
					;

var					:ID { strcpy($$,TableSymboles[$1].nom); }
					;

//-----------------------Expression logique---------------------------
Expr_log			:Expr_log OR Adress1 Expr_log_or 
					{
						generer_quad("BR","","","");
						QC();
						modifier_quad($3,$1.false);
						$$.false=$4.false;
						Fusion(&$$.true,$1.true,$4.true);		
					}
					|Expr_log_or 
					{
						$$.true=$1.true; $$.false=$1.false;
						strcpy($$.info,$1.info);	
					}
					;

Expr_log_or			:Expr_log_or AND Adress1 Expr_log_not
					{
						modifier_quad($3,$1.false);
						$$.true=$4.true;
						Fusion(&$$.false,$1.false,$4.false);
					}
					|Expr_log_not
					{
						$$.true=$1.true; $$.false=$1.false;
						strcpy($$.info,$1.info);
					}
					;

Expr_log_not		:NOT Expr_log_not 
					{
						$$.true=$2.false; $$.false=$2.true;
						sprintf(temp_value,"T%d",count++);
						generer_quad($1,"",$2.info,temp_value);
						QC();	
						strcpy($$.info,temp_value);
					}
					|Expression_comp	
					{
						$$.true=$1.true; $$.false=$1.false;
						strcpy($$.info,$1.info);	
					}
					;


Expression_comp		:expression_add SUP_INF_EGALE_DIFF expression_add
					{
						sprintf(temp_value,"T%d",count++);
						strcpy($$.info,temp_value);
						char operand[50];
						if (strcmp($2,"<")==0) {
							strcpy(operand,"BME");
						}
						if (strcmp($2,"<=")==0) {
							strcpy(operand,"BM");
						}
						if (strcmp($2,">")==0) {
							strcpy(operand,"BLE");
						}
						if (strcmp($2,">=")==0) {
							strcpy(operand,"BL");
						}
						if (strcmp($2,"==")==0) {
							strcpy(operand,"BNE");
						}
						if (strcmp($2,"!=")==0) {
							strcpy(operand,"BE");
						}
						generer_quad(operand,$1.info,$3.info,"");
						QC();	
						creation_list(&$$.true,quadsuiv) ; 
						creation_list(&$$.false,quadsuiv-1) ;
					}
					|expression_add
					{
						strcpy($$.info,$1.info);
						$$.true=$1.true; $$.false=$1.false;
					}
					;

SUP_INF_EGALE_DIFF	 :SUPERIEROREQUALS {strcpy($$,$1); }
					|INFERIEUR {strcpy($$,$1); }
					|SUPERIEUR {strcpy($$,$1); }
					|INFERIEROREQUALS {strcpy($$,$1); }
					|EGALE {strcpy($$,$1); }
					|DIFF {strcpy($$,$1); }
					;

//-------------------Expression PLUS---------------------------

expression_add		:expression_add PLUS_MOINS Expression_fois_divise
					{
						sprintf(temp_value,"T%d",count++);
						generer_quad($2,$1.info,$3.info,temp_value);
						QC();	
						strcpy($$.info,temp_value);
						$$.true=$1.true; $$.false=$1.false;
					}
					|Expression_fois_divise
					{
						strcpy($$.info,$1.info);
						$$.true=$1.true; $$.false=$1.false;
					}
					;

PLUS_MOINS			:PLUS {strcpy($$,$1); }
					|MOINS {strcpy($$,$1); }
					;

//------------------- fois divise---------------------------
Expression_fois_divise	:Expression_fois_divise FOIS_DIVISE_MODE Expression_Neg 
					{
						sprintf(temp_value,"T%d",count++);
						generer_quad($2,$1.info,$3.info,temp_value);	
						QC();
						strcpy($$.info,temp_value);
						$$.true=$1.true; $$.false=$1.false;

				
					}
									|Expression_Neg 
					{
						strcpy($$.info,$1.info);
						$$.true=$1.true; $$.false=$1.false;
					}
					;

FOIS_DIVISE_MODE	:FOIS	{strcpy($$,$1);}
					|DIVISE	{strcpy($$,$1);}
					|MODE	{strcpy($$,$1);}
					;

Expression_Neg		:MOINS Expression_Neg 
					{
						sprintf(temp_value,"T%d",count++);
						generer_quad($1,"",$2.info,temp_value);	
						strcpy($$.info,temp_value);
						QC();
						$$.true=$2.true; $$.false=$2.false;
					}
					|Expression_par
					{
						$$.true=$1.true; $$.false=$1.false;
						strcpy($$.info,$1.info);
					}
					;

Expression_par		:LPAREN expression RPAREN 
					{

						$$.true=$2.true; $$.false=$2.false;
						strcpy($$.info,$2.info);
						strcpy($$.val,$2.val);
					}
					|var	
					{
						strcpy($$.info,$1);
					}
					|constant {strcpy($$.info,$1.info);}
					;

constant			:ENTIER	{strcpy($$.info,$1);strcpy($$.val,$1);}	
					|TRUE	{strcpy($$.info,$1);strcpy($$.val,$1);}
					|FALSE	{strcpy($$.info,$1);strcpy($$.val,$1);}	
					|NFLOAT	{strcpy($$.info,$1);strcpy($$.val,$1);}
					|NLONG	{strcpy($$.info,$1);strcpy($$.val,$1);}
					|key_chaindc	{strcpy($$.info,$1);strcpy($$.val,$1);}
					|CHIFFRE	{strcpy($$.info,$1);strcpy($$.val,$1);}
					;

Adress1 : { $$=quadsuiv; } ;
Adress2 : {	
	generer_quad("BR","","","");	
	QC();
	creation_list(&$$.false,quadsuiv-1) ;$$.true=NULL; 
	}
	;	

%%


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
         

