#include "head.h"
// prototipo de la funcion parser generada por yacc/bison
int yyparse();

int main(int argc, char **argv){
  if ((argc > 1) && (freopen(argv[1], "r", stdin) == NULL)){
    printf("%s Archivo: %s no puede ser abierto. \n  ",argv[0],argv[1]);
    exit(1);
  	}
  else {
	limpiar_archivo();
	}
	yyparse();
  	return 0;
}
