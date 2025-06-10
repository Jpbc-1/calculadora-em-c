#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ad()
{
    float a, b;
    printf("Digite o primeiro número: \n");
    scanf("%f", &a);
    printf("Digite o segundo número: \n");
    scanf("%f", &b);
    printf("Resultado: %.2f + %.2f = %.2f\n", a, b, a + b);
}
void sub()
{
    float a, b;
    printf("Digite o primeiro número: \n");
    scanf("%f", &a);
    printf("Digite o segundo número: \n");
    scanf("%f", &b);
    printf("Resultado: %.2f - %.2f = %.2f\n", a, b, a - b);
}
void mul()
{
    float a, b;
    printf("Digite o primeiro número: \n");
    scanf("%f", &a);
    printf("Digite o segundo número: \n");
    scanf("%f", &b);
    printf("Resultado: %.2f * %.2f = %.2f\n", a, b, a * b);
}
void dive()
{
    float a, b;
    printf("Digite o primeiro número: \n");
    scanf("%f", &a);
    printf("Digite o segundo número: \n");
    scanf("%f", &b);
    if (b == 0)
    {
#ifdef _WIN32
        system("cls");
#else
        system("clear");
#endif
        printf("Erro: Divisão por zero não é permitida.\n");
        return;
    }
    printf("Resultado: %.2f / %.2f = %.2f\n", a, b, a / b);
}
int main()
{
    int n, x;
    char c;
    do
    {
#ifdef _WIN32
        system("cls");
#else
        system("clear");
#endif
        printf("===============================\n   Calculadora Simples\n===============================\n");
        printf("Selecione uma operação:\n1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Sair\nOpção:");
        x = scanf("%d", &n);
        while (n < 1 || n > 5 || x == 0)
        {
            if (x != 1)
            {
                while (getchar() != '\n'); 
            }

#ifdef _WIN32
            system("cls");
#else
            system("clear");
#endif
            printf("Resposta inválida. Por favor, digite um número que está dentro das opções por favor!\n");
            printf("===============================\n   Calculadora Simples\n===============================\n");
            printf("Selecione uma operação:\n1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Sair\nOpção:");
            x = scanf("%d", &n);
        }
        switch (n)
        {
        case 1:
            ad();
            break;
        case 2:
            sub();
            break;
        case 3:
            mul();
            break;
        case 4:
            dive();
            break;
        case 5:
            printf("Obrigado por usar a calculadora! Até a próxima.");
            return 0;
        }
        printf("Deseja realizar outra operação? (s/n):");
        scanf(" %c", &c);
        while (c != 's' && c != 'n' && c != 'S' && c != 'N')
        {
            printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
            printf("Deseja realizar outra operação? (s/n):");
            scanf(" %c", &c);
        }

    } while (c == 's' || c == 'S');
    printf("Obrigado por usar a calculadora! Até a próxima.");
    return 0;
}
