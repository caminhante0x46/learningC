#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

//funcao drink, produz cerveja, vinho, leite e suco kkk
int option(){

    int drink;
    int beer = 1;    //declara inteiro beer = 1 < ponteiro
    int wine = 2;
    int juicy = 3;
    int milk = 4;
    int sair = 666;

    printf("CATALOG OF DRINKS: [beer - 1], [wine - 2], [juicy - 3], [milk - 4], [exit -666]\n");
    printf("\t[#] What are you wish today  [#]: ");
    scanf("%d", &drink);   //verifica a variavel drink

// mostra a variavel drink   printf("%s", drink);

    //verifica qual opcao escolhida    
    if (drink == beer){
        printf("\t[#] Preparing a cold beer for you, wait.. [#]\n");
        sleep(2);
        printf("\t[BEER_MUG] Enjoy your beer, sir! [BEER_MUG]\n");
        return 0;}

    else if (drink == wine){
        printf("\t[#] Preparing a good Montalcino for you, wait.. [#]\n");
        sleep(2);
        printf("\t[WINE_GLASS] Enjoy your wine, sir! [WINE_GLASS]\n");
        return 0;}

    else if (drink == juicy){
        printf("\t[#] Preparing a good Orange Juicy for you, wait.. [#]\n");
        sleep(2);
        printf("\t[GLASS_ORANGE] Enjoy your juicy, sir! [GLASS_ORANGE]\n");
        return 0;}

    else if (drink == milk){
        printf("\t[#] Preparing a good Milk for you, wait.. [#]\n");
        sleep(2);
        printf("\t[CUP_MILK] Enjoy your Milk, sir! [CUP_MILK]\n");
        return 0;}

    else if (drink == sair){
        printf("\t[#] See you later, sir! [#]\n");
        exit(0);}

    //verifica se nao e nenhuma das opcoes
    else{
        (drink != beer || drink != wine || drink != juicy || drink != milk || drink != sair);
        printf("\t\nWrong INPUT!!!! *jeeezz.\n");
        return option();}
}

//funcao principal, check idade e menu
int main(){

    //define variavel idade como inteiro, solicita uma idade e armazena na variavel idade o valor digitado
    int idade;
    printf("\nEnter your age: ");
    scanf("%d", &idade);

    if (idade >= 18){
        sleep(1);
        printf("\nChecking your age..\n");
        sleep(1);
        printf("\n\t[#] WELCOME TO DRINKING CODE [#]\n");
        option(); //caso seja maior de 18 abre a funcao drink
    }
    else{
        sleep(1);
        printf("\nChecking your age..\n");
        sleep(1);
        printf("\nU need to study more, no drinks for you!\n");    
    return 1;}
}
