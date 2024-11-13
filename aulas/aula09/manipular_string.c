#include <stdio.h>
#include <string.h>


int main() {

char primeiro_nome[20];
char ultimo_nome[20];
char nome[40];

printf("Entre com o seu primeiro nome: ");
scanf("%[^\n]s", primeiro_nome); //%[^\n]s
while(getchar() != '\n');

printf("Entre com o seu ultimo nome: ");
scanf("%[^\n]s", ultimo_nome);
while(getchar() != '\n');

//nao da pra por nome  = primeiro_nome entao colocamos:
strcpy(nome, primeiro_nome);
printf("%s\n", nome );

//nome = nome + ultimo_nome
strcat(nome, " "); //deixar separado
strcat(nome, ultimo_nome);
printf("%s\n", nome );
//strcat concatena

//tamanho da string preenchida
printf("A palavra '%s' tem %i caracteres\n", primeiro_nome, strlen(primeiro_nome));

//comparar strings strcmp eh compacto

if (strcmp(primeiro_nome, ultimo_nome)> 0){
    printf("A ordem eh %s, %s\n", ultimo_nome, primeiro_nome);
} else{
    printf("A ordem eh %s, %s\n", primeiro_nome, ultimo_nome);
}

// procurar por uma string
if(strstr(nome, "Silva")){
printf("Voce pertence a familia Silva\n");
}else {
    printf("Voce nao pertence a familia Silva. Corra imediatamente\n");
}


//preencher uma string com um caracter

memset(nome, 'a', 10);
printf("%s\n", nome);
memset(nome, 'b', 20);
printf("%s\n", nome);
memset(nome, 0, sizeof(nome)); //limpa a string
printf("%s\n", nome);



    return 0;
}