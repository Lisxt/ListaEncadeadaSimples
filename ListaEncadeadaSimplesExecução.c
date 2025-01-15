#include <stdio.h>
#include "ListaEncadeadaSimples.c"

int main (void){
    Lista* l; /* declara uma lista n�o iniciada */
    l = inicializa(); /* inicia lista vazia */
    
    l = insere_ordenado(l, 23,67); /* insere na lista a nota do aluno 23 */
    l = insere_ordenado(l, 45,98); /* insere na lista a nota do aluno elemento 45 */
    l = insere_ordenado(l, 56,87); /* insere na lista a nota do aluno elemento 56 */
    l = insere_ordenado(l, 78,89); /* insere na lista a nota do aluno elemento 78 */
     
  //l = insere_inicio(l, 23,67); 
  //l = insere_inicio(l, 45,98); 
  //l = insere_inicio(l, 56,87); 
  //l = insere_inicio(l, 78,89); 
    
    imprime(l); /* imprimir�: nota dos alunos 78 56 45 23 */
    l= busca(l, 45);
    printf("O valor eh %i\n", l->nota);
    l = retira(l, 78);
    imprime(l); /* imprimir�: 56 45 23 */
    l = retira(l, 45);
    imprime(l); /* imprimir�: 56 23 */
    libera(l);
    getchar();
    return 0;
}

