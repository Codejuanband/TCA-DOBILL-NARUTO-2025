#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
#define CLS (_WIN32 ? system("cls") : system("clear"));
typedef struct
{
    char *nome_jutsu;
    char *tipo_jutsu;
    char *element_jutsu;
    int custo_chakra;
    int poder_atk;
} Jutsus;

typedef struct
{
    char *nome_clan;
    char *conjunto_skill;
    char *tecnica_trad;
} Clan;

typedef struct
{
    char *nome_ninja;
    char *rank_ninja;
    int qtd_chakra;
    Clan cla;
    char *afn_elementos;
    Jutsus jutsu;
} Ninja;

typedef struct
{
    char *titulo_missao;
    char *lider;
    char *dificuldade;
    char *status_missao;
    char *ninjas_participantes;
} Missao;

/*Variaveis globais*/
Jutsus *_jutsus = NULL;
int num_jutsus = 0;

Clan *_clans = NULL;
int num_clans = 0;

Ninja *_ninjas = NULL;
int num_ninjas = 0;

Missao *_missoes = NULL;
int num_missoes = 0;

/*---------Funções--------------*/
/*Funções de menu*/
void menuNinja();
void menuJutsu();
void menuClan();
void menuMissao();
/*Funções de criação*/
void CriarNinja();
void CriarJutsu();
void CriarClan();
void CriarMissao();
/*------------------------------*/

void menuNinja()
{
    int opc2;
    do
    {

        printf("\n=====NINJA MENU=====\n");
        printf("Cadastrar ninja-1");
        printf("Remover ninja-2");
        printf("Atualizar ninja-3");
        printf("Listar ninjas-4");
        printf("Escolha:>");
        scanf("%d", &opc2);

        switch (opc2)
        {
        case 1:
            CriarNinja();
        case 2: // funxao remove
        case 3: // funxao att
        case 4: // funxao lista

        default:
            printf("Valor invalido..");
        }
    } while (opc2 != 0);
}

void menuJutsu()
{
    int opc3;
    do
    {
        printf("\n=====JUTSUS MENU=====\n");
        printf("Cadastrar Jutsu-1");
        printf("Remover Jutsu-2");
        printf("Atualizar Jutsu-3");
        printf("Listar Jutsu-4");
        printf("Escolha:>");
        scanf("%d", &opc3);

        switch (opc3)
        {
        case 1: // funxao de criar
        case 2: // funxao remove
        case 3: // funxao att
        case 4: // funxao lista

        default:
            printf("Valor invalido..");
        }
    } while (opc3 != 0);
}

void menuClan()
{
    int opc4;
    do
    {
        printf("\n=====MENU CLÃ=====\n");
        printf("Cadastrar clã-1");
        printf("Remover clã-2");
        printf("Atualizar clã-3");
        printf("Listar clã-4");
        printf("Escolha:>");
        scanf("%d", &opc4);

        switch (opc4)
        {
        case 1: // funxao de criar
        case 2: // funxao remove
        case 3: // funxao att
        case 4: // funxao lista

        default:
            printf("Valor invalido..");
        }
    } while (opc4 != 0);
}

void menuMissao()
{
    int opc5;
    do
    {
        printf("\n=====MENU MISSÕES=====\n");
        printf("Cadastrar missão-1");
        printf("Remover missão-2");
        printf("Atualizar missão-3");
        printf("Listar missão-4");
        printf("Escolha:>");
        scanf("%d", &opc5);

        switch (opc5)
        {
        case 1: // funxao de criar
        case 2: // funxao remove
        case 3: // funxao att
        case 4: // funxao lista

        default:
            printf("Valor invalido..");
        }
    } while (opc5 != 0);
}

void CriarNinja()
{
    char straux[MAX];
    int r1, r2;
    Ninja *ninjas;

    printf("Digite o nome do ninja: ");
    gets(straux);
    ninjas->nome_ninja = (char *)malloc(strlen(straux) + 1);
    strcpy(ninjas->nome_ninja, straux);

    fflush(stdin);
    printf("Digite o rank do seu ninja:");
    gets(straux);
    ninjas->rank_ninja = (char *)malloc(strlen(straux) + 1);
    strcpy(ninjas->rank_ninja, straux);

    fflush(stdin);
    printf("Digite o chakra do seu ninja:");
    scanf("%d", ninjas->qtd_chakra);

    fflush(stdin);
    printf("Deseja criar um clã?\n(1-Sim,2-Não>)");
    scanf("%d", &r1);
    if (r1 == 1)
    {
        // trigga funxao criar clã
    }
    else
    {
        // verifica se tem clã se n tiver da erro e volta
    }

    fflush(stdin);
    printf("Digite quais elementos seu ninja tem afinidades:");
    gets(straux);
    ninjas->afn_elementos = (char *)malloc(strlen(straux) + 1);
    strcpy(ninjas->afn_elementos, straux);

    fflush(stdin);
    printf("Deseja criar um Jutsu?\n(1-Sim,2-Não>)");
    scanf("%d", &r2);
    if (r2 == 1)
    {
        CriarJutsu();
    }
    else
    {
        // verifica se tem jutsu se n tiver da erro e volta
    }

    num_ninjas++;
}

void CriarJutsu()
{
    char straux[MAX];

    Jutsus *jutsu;

    printf("Digite seu jutsu:");
    gets(straux);
    jutsu->nome_jutsu = (char *)malloc(strlen(straux) + 1);
    strcpy(jutsu->nome_jutsu, straux);

    fflush(stdin);
    printf("Digite o tipo do seu jutsu");
    gets(straux);
    jutsu->tipo_jutsu = (char *)malloc(strlen(straux) + 1);
    strcpy(jutsu->tipo_jutsu, straux);

    fflush(stdin);
    printf("Digite o elemento do seu Jutsu:");
    gets(straux);
    jutsu->element_jutsu = (char *)malloc(strlen(straux) + 1);
    strcpy(jutsu->element_jutsu, straux);

    fflush(stdin);
    printf("Digite quanto de chakra seu jutsu consome:");
    scanf("%d", jutsu->custo_chakra);
}

void CriarClan()
{
    char straux[MAX];
    Clan *cla;

    fflush(stdin);
    printf("Digite o nome do Clã:");
    gets(straux);
    cla->nome_clan = (char *)malloc(strlen(straux) + 1);
    strcpy(cla->nome_clan, straux);

    fflush(stdin);
    printf("Digite seu conjunto de skills:");
    gets(straux);
    cla->conjunto_skill = (char *)malloc(strlen(straux) + 1);
    strcpy(cla->conjunto_skill, straux);

    fflush(stdin);
    printf("Digite o tecnica tradicional do seu clã:");
    gets(straux);
    cla->tecnica_trad = (char *)malloc(strlen(straux) + 1);
    strcpy(cla->tecnica_trad, straux);
}

void CriarMissao()
{
    char straux[MAX];
    Missao *missao;

    fflush(stdin);
    printf("Digite o título da missão:");
    gets(straux);
    missao->titulo_missao = (char *)malloc(strlen(straux) + 1);
    strcpy(missao->titulo_missao, straux);

    fflush(stdin);
    printf("Digite o líder da missão:");
    gets(straux);
    missao->lider = (char *)malloc(strlen(straux) + 1);
    strcpy(missao->lider, straux);

    fflush(stdin);
    printf("Digite a dificuldade da missão\n(D, C, B, A ou S)\n:");
    gets(straux);
    missao->dificuldade = (char *)malloc(strlen(straux) + 1);
    strcpy(missao->dificuldade, straux);

    fflush(stdin);
    printf("Digite o status da missão:");
    gets(straux);
    missao->status_missao = (char *)malloc(strlen(straux) + 1);
    strcpy(missao->status_missao, straux);

    fflush(stdin); // Alterar isso mais tarde, não esta certo
    printf("Digite os ninjas participantes da missão:");
    gets(straux);
    missao->ninjas_participantes = (char *)malloc(strlen(straux) + 1);
    strcpy(missao->ninjas_participantes, straux);
}

void SalvarNinjas()
{
    FILE *fp = fopen("ninjas.txt", "w");
    if (fp == NULL)
    {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return;
    }
    for (int i = 0; i < num_ninjas; i++)
    {
        fprintf(fp, "%s,%s,%d,%s,%s,%s,%s,%d\n",
                _ninjas[i].nome_ninja,
                _ninjas[i].rank_ninja,
                _ninjas[i].qtd_chakra,
                _ninjas[i].cla.nome_clan,
                _ninjas[i].afn_elementos,
                _ninjas[i].jutsu.nome_jutsu,
                _ninjas[i].jutsu.tipo_jutsu,
                _ninjas[i].jutsu.custo_chakra);
    }
    fclose(fp);
}

void SalvarJutsus()
{
    FILE *fp = fopen("jutsus.txt", "w");
    if (fp == NULL)
    {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return;
    }
    for (int i = 0; i < num_jutsus; i++)
    {
        fprintf(fp, "%s,%s,%s,%d,%d\n",
                _jutsus[i].nome_jutsu,
                _jutsus[i].tipo_jutsu,
                _jutsus[i].element_jutsu,
                _jutsus[i].custo_chakra,
                _jutsus[i].poder_atk);
    }
    fclose(fp);
}

void SalvarClans()
{
    FILE *fp = fopen("clans.txt", "w");
    if (fp == NULL)
    {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return;
    }
    for (int i = 0; i < num_clans; i++)
    {
        fprintf(fp, "%s,%s,%s\n",
                _clans[i].nome_clan,
                _clans[i].conjunto_skill,
                _clans[i].tecnica_trad);
    }
    fclose(fp);
}

void SalvarMissoes()
{
    FILE *fp = fopen("missoes.txt", "w");
    if (fp == NULL)
    {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return;
    }
    for (int i = 0; i < num_missoes; i++)
    {
        fprintf(fp, "%s,%s,%s,%s,%s\n",
                _missoes[i].titulo_missao,
                _missoes[i].lider,
                _missoes[i].dificuldade,
                _missoes[i].status_missao,
                _missoes[i].ninjas_participantes);
    }
    fclose(fp);
}
OpAlterarNinja()
{
    int op, idc;
    char straux[MAX];

    if (num_ninjas == 0)
    {
        printf("ERRO:Nenhum ninja cadastrado para alterar:(\n");
        return;
    }
    if (num_ninjas >= 1)
    {
        do{
        printf("\n=====ALTERAR NINJA=====\n");
        printf("Qual ninja deseja alterar [%d-%d]?\n:", 1, num_ninjas);
        gets(straux);


        if (op < 1 || op > num_ninjas)
        {
            printf("Opção inválida.\n");
            return;
        }

      } while (op < 1 || op > num_ninjas);
    }
    else
    {
        idc = 1;
    }
   MenuAlterarNinja();
}
void MenuAlterarNinja()
{
    int op, idc;
    do
    {
        printf("\n=====MENU ALTERAR NINJA=====\n");
        printf("1- Nome do ninja\n");
        printf("2- Rank do ninja\n");
        printf("3- Quantidade de chakra\n");
        printf("4- Clã\n");
        printf("5- Afinidades com elementos\n");
        printf("6- Jutsu\n");
        printf("0- Voltar\n");
        printf("Escolha o que deseja alterar:>");
        scanf("%d", &op);

        if (op != 0)
        {
            AlterarNinja(op, idc);
        }

    } while (op != 0);
}

AlterarNinja(int op, int idc)
{
    char straux[MAX];
    int flag = 1;

    switch (op)
    {
    case 1:
        printf("Digite o novo nome do ninja: ");
       
        for (int i = 0; i < num_ninjas; i++)
        {
            if(strcmp(_ninjas[i].nome_ninja, straux) == 0)
            {
                printf("ERRO: Já tem um ninja com esse nome.\n");
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            strcpy(_ninjas[idc].nome_ninja, straux);
        }
         gets(straux);
        _ninjas[idc].nome_ninja = (char *)malloc(strlen(straux) + 1);
       
        break;
    case 2:
        fflush(stdin);
        printf("Digite o novo rank do seu ninja:");
        gets(straux);
        _ninjas[idc].rank_ninja = (char *)malloc(strlen(straux) + 1);
        strcpy(_ninjas[idc].rank_ninja, straux);
        break;
    case 3:
        fflush(stdin);
        printf("Digite o novo chakra do seu ninja:");
        scanf("%d", &_ninjas[idc].qtd_chakra);
        break;
    case 4:
        // Alterar clã
        break;
    case 5:
        fflush(stdin);
        printf("Altere quais elementos seu ninja tem afinidades:");
        gets(straux);
        _ninjas[idc].afn_elementos = (char *)malloc(strlen(straux) + 1);
        strcpy(_ninjas[idc].afn_elementos, straux);
        break;
    case 6:
        // Alterar jutsu
        break;
    default:
        printf("Opção inválida.\n");
        flag = 0;
        break;
    }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8); //Evita problemas com acentos no Windows
    int opc, c;
    char *palavra = "Bem vindo ao sistema de cadastros ONU!\n";

    CLS for (int i = 0; palavra[i] != '\0'; i++)
    {
        printf("%c", palavra[i]);
        Sleep(30);
    }
    Sleep(500);

    int tam = strlen(palavra);
    for (int i = 0; i < tam; i++)
    {
        printf("\b \b");
        Sleep(30);
    }
    Sleep(30);
    printf("Aperte qualquer tecla para continuar...");
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }

    do
    {

        printf("\n=========== SISTEMA CADASTROS ONU (Organização dos Ninjas Unidos) ===========\n");
        printf("1- Ninja\n");
        printf("2- Jutsu\n");
        printf("3- Clã\n");
        printf("4- Missão\n");
        printf("0- Sair\n");
        printf("Escolha:> ");
        scanf("%d", &opc);

        switch (opc)
        {
        case 0:
            printf("Saindo do sistema, até mais!\n");
            break;
        case 1:
            menuNinja();
            break;
        case 2:
            menuJutsu();
            break;
        case 3:
            menuClan();
            break;
        case 4:
            menuMissao();
            break;

        default:
            printf("Valor invalido..");
        }
    } while (opc != 0);
}
