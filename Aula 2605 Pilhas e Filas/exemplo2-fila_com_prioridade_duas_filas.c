#include <stdio.h>
#include <stdlib.h>
// Estrutura do paciente
struct Paciente
{
    char nome[30];
    int idade;
    struct Paciente prox;
    // Nome do paciente (sem espaços)
    // Idade do paclente
    // Próximo paciente na fila
};
// Inserir paciente na fila correta (prioritária ou comum)
void inserirPaciente(struct Paciente inicioPrioritaria, struct Paciente struct Paciente inicioComum, struct Paciente fimPrioritaria, fimComum)
{
    struct Paciente novo(struct Paciente) lloc(sizeof(struct Paciente)); // Aloca memória
    print("Digite o nome do paciente (sem espaços): ");
    scanf("%s", novo nome);
    // Lê nome
    print("Digite a idade do paciente: ");
    scanf("%d", &novo->idade);
    // Lê idade
    novo prox = NULL; // Novo paciente ainda não aponta para ninguém
    if (novo->idade >= 68)
    {
        // Inserir no fila prioritária
        if (fimPrioritaria = NULL)
        {
            *inicioPrioritaria novo;
            fimPrioritaria novo;
        }
        else
        {
            (*fimPrioritaric) prox πονο;
            fimPrioritaria = novo;
        }
        print("Paciente PRIORITÁRIO inserido.\n");
    }
    else
    {
        // Inserir no fila comun
        if (fimComun == NULL)
        {
            inicioComum novoj
                fimComun novo;
        }
        else
        {
            (fimComum) prox = novo;
            *FimComun novo;
        }
        printf("Paciente COMUM inserido.\n");
    }
}

// Atender paciente (fila prioritório primeiro)
void atenderPaciente(struct Paciente **inicioPrioritaria, struct Paciente **fimPrioritaria, struct Paciente iniciocomum, struct Paciente fimComum)
{
    struct Paciente temp;
    if (inicioPrioritaria = NULL)
    {
        // Atende da fila prioritário
        temp inicioPrioritaria;
        print("Atendendo (PRIORITÁRIO): %s (idade %2)\n", temp->nome, tempidade);
        inicioPrioritaria temp->prox;
        if (inicioPrioritaria NULL)
        {
            fimPrioritaria = NULL;
        }
        free(temp); // Libera a memória
    }
    else if (inicioComum != NULL)
    {
        // Atende da fila comum
        temp inicioComum;
        printf("Atendendo (COMUM): %s (idade %d)\n", tempnome, temp->idade);
        inicioComum temp prox;
        if (iniciocomum == NULL)
        {
            fimComum NULL;
        }
        free(temp); // Libera a memória
    }
    else
    {
        print("Nenhum paciente na fila.\n");
    }
}

// Mostrar fila (comum ou prioritério)
void mostrarFila(const char titulo, struct Paciente inicio) ( 
print("\n%s\n", titulo); 
it (inicio == NULL) {
    printf("(varia)\n");
    return;
    while (inicio != NULL)
    {
        printf("%s (idade %d)\n", inicio nome, inicio idade);
        inicio inicio - prox;
    }
}

// Função principal com menu 
int main() {
    struct Paciente inicioPrioritaria = NULL;
    struct Paciente fimPrioritaria = NULL;
    struct Paciente inicioComum = NULL;
    struct Paciente fimComum = NULL;

    int opcao;
    do
    {
        printf("\n=====MENU FILA COM PRIORIDADE (DUAS FILAS) =====\n");
        printf("1. Inserir paciente na fila\n");
        printf("2. Atender próximo paciente\n");
        printf("3. Mostrar fila completa\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            inserirPaciente(&inicioPrioritaria, &fimPrioritaria, &inicioComum, &fimComum);
            break;
        case 2:
            atenderPaciente(&inicioPrioritaria, &fimPrioritaria, &inicioComum, &fimComum);
            break;
        case 3:
            mostrarFila("Fila PRIORITARIA:", inicioPrioritaria);
            mostrarFila("Fila COMUM:", inicioComum);
            break;
        case 0:
            printf("Encerrando...\n");
            break;
        default:
            print("Opção inválida.\n");
        }

    } while (opcao != 0);
    // Libera todos os pacientes restantes
    while (inicioPrioritaria != NULL || inicioComum != NULL)
    {
        atenderPaciente(SinicioPrioritaria, &fimPrioritaria, SinicioComum, &fimComum);
    }
    return 0;
}