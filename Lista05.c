//QUESTÃO 1
#include <stdio.h>

int main() {
    float notas[5];
    int aprovados = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);

        if (notas[i] >= 7.0) {
            aprovados++;
        }
    }

    printf("Quantidade de alunos aprovados: %d\n", aprovados);

    return 0;
}

//QUESTÃO 2
#include <stdio.h>

int main() {
    int num, soma = 0, dig;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    while (num != 0) {
        dig = num % 10; 
        soma += dig; 
        num /= 10; 
    }

    printf("A soma dos digitos do numero e: %d\n", soma);

    return 0;
}

//QUESTÃO 3
#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("Divisores de %d: ", num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

//QUESTÃO 4
#include <stdio.h>

int main() {
    int num = 5;
    float alt, soma_alt = 0, media_alt;

    for (int i = 0; i < num; i++) {
        printf("Digite a altura da pessoa %d: ", i + 1);
        scanf("%f", &alt);
        soma_alt += alt;
    }

    media_alt = soma_alt / num;

    printf("A media de altura das %d pessoas e: %.2f metros\n", num, media_alt);

    return 0;
}

//QUESTÃO 5
#include <stdio.h>

int main() {
    for (int i = 1; i <= 100; i++) {

        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz ");
        }
        else if (i % 3 == 0) {
            printf("Fizz ");
        }
        else if (i % 5 == 0) {
            printf("Buzz ");
        }
        else {
            printf("%d ", i);
        }
    }

    return 0;
}

//QUESTÃO 6
#include <stdio.h>

int main() {
    int num, dig, soma = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    while (num != 0) {
        dig = num % 10; 
        if (dig % 2 == 0) { 
            soma += dig; 
        }
        num /= 10; 
    }

    printf("A soma dos digitos pares do numero e: %d\n", soma);

    return 0;
}

//QUESTÃO 7
#include <stdio.h>

int main() {
    int num, dig, inverso = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    while (num != 0) {
        dig = num % 10; 
        inverso = inverso * 10 + dig; 
        num /= 10; 
    }

    printf("O numero invertido e: %d\n", inverso);

    return 0;
}

//QUESTÃO 8
#include <stdio.h>

int main() {
    int num = 1; 
    int soma; 

    while (num <= 100) {
        soma += num;
        num++; 
    }

    printf("A soma dos numeros de 1 a 100 e: %d\n", soma);

    return 0;
}

//QUESTÃO 9
#include <stdio.h>

int main() {
    int num = 1; 
    int produto = 1; 

    while (num <= 5) {
        produto *= num;
        num++; 
    }

    printf("O produto dos numeros de 1 a 5 e: %d\n", produto);

    return 0;
}

//QUESTÃO 10
#include <stdio.h>

int main() {
    int multi = 1;
    
    printf("Tabuada do 9:\n");

    while (multi <= 10) {
        int resul = 9 * multi; 
        printf("9 x %d = %d\n", multi, resul); 
        multi++;
    }

    return 0;
}

//QUESTÃO 11
#include <stdio.h>

int main() {
    int num, maior, menor;
    int quantid = 0;

    printf("Digite um numero inteiro (0 para parar): ");
    scanf("%d", &num);

    if (num != 0) {
        maior = menor = num;
        quantid = 1; 
    }

    while (num != 0) {
        if (num > maior) {
            maior = num;
        }
        if (num < menor) {
            menor = num;
        }
        printf("Digite um numero inteiro (0 para parar): ");
        scanf("%d", &num);

        if (num != 0) {
            quantid++;
        }
    }

    if (quantid > 0) {
        printf("O maior numero digitado foi: %d\n", maior);
        printf("O menor numero digitado foi: %d\n", menor);
    } else {
        printf("Nenhum numero foi digitado.\n");
    }
    
    return 0;
}

//QUESTÃO 12
#include <stdio.h>

int main() {
    int num, soma = 0, quant = 0;

    printf("Digite um numero inteiro (-1 para parar): ");
    scanf("%d", &num);

    while (num != -1) {
        soma += num; 
        quant++; 
        
        printf("Digite um numero inteiro (-1 para parar): ");
        scanf("%d", &num);
    }

    if (quant > 0) {
        double media = (double) soma / quant; 
        printf("A media dos numeros digitados e: %.2f\n", media);
    } else {
        printf("Nenhum numero foi digitado.\n");
    }

    return 0;
}

//QUESTÃO 13
#include <stdio.h>
#include <math.h>

int main() {
    int num, dig, soma = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    int a = num;
    while (a != 0) {
        dig = a % 10;  
        soma += pow(dig, 3);  
        a /= 10;  
    }

    printf("A soma dos digitos elevados ao cubo do numero e: %d\n", soma);

    return 0;
}

// QUESTÃO 14

#include <stdio.h>

int main() {
    int numero = 1;

    printf("Números ímpares de 1 a 100:\n");

    while (numero <= 100) {
        if (numero % 2 != 0) {
            printf("%d ", numero);
        }
        numero++;
    }

    printf("\n");

    return 0;
}

// QUESTÃO 15

#include <stdio.h>

int main() {
    int numero = 1;

    printf("Múltiplos de 3 no intervalo de 1 a 50:\n");

    while (numero <= 50) {
        if (numero % 3 == 0) {
            printf("%d ", numero);
        }
        numero++;
    }

    printf("\n");

    return 0;
}

// QUESTÃO 16

#include <stdio.h>

int main() {
    int contador = 0;
    int notas_lidas = 0;
    float nota;
    printf("Digite as notas dos 5 alunos:\n");

    while (notas_lidas < 5) {
        printf("Nota do aluno %d: ", notas_lidas + 1);
        scanf("%f", &nota);

        if (nota >= 7.0) {
            contador++;
        }

        notas_lidas++;
    }

    printf("Número de alunos aprovados: %d\n", contador);

    return 0;
}

// QUESTÃO 17

#include <stdio.h>

int main() {
    int numero;
    int pares = 0;
    int impares = 0;
    int primeiro_impar_encontrado = 0;

    printf("Digite uma sequência de números inteiros (para parar, digite 0):\n");

    while (1) {
        printf("Número: ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero % 2 == 0) {
            pares++;
        } else {
            if (!primeiro_impar_encontrado) {
                primeiro_impar_encontrado = 1;
            } else {
                impares++;
            }
        }
    }

    printf("Quantidade de números pares antes do primeiro número ímpar: %d\n", pares);
    printf("Quantidade de números ímpares após o primeiro número ímpar: %d\n", impares);

    return 0;
}

// QUESTÃO 18

#include <stdio.h>

int main() {
    int numero;
    int pares = 0;
    int impares = 0;

    printf("Digite uma sequência de números inteiros (para parar, digite 0):\n");

    while (1) {
        printf("Número: ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);

    return 0;
}

// QUESTÃO 19

#include <stdio.h>

int main() {
    int numero;
    int divisiveis_por_2 = 0;
    int divisiveis_por_3 = 0;
    int divisiveis_por_5 = 0;

    printf("Digite uma sequência de números inteiros (para parar, digite 0):\n");

    while (1) {
        printf("Número: ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero % 2 == 0) {
            divisiveis_por_2++;
        }
        if (numero % 3 == 0) {
            divisiveis_por_3++;
        }
        if (numero % 5 == 0) {
            divisiveis_por_5++;
        }
    }

    printf("Quantidade de números divisíveis por 2: %d\n", divisiveis_por_2);
    printf("Quantidade de números divisíveis por 3: %d\n", divisiveis_por_3);
    printf("Quantidade de números divisíveis por 5: %d\n", divisiveis_por_5);

    return 0;
}

// QUESTÃO 20

#include <stdio.h>

int main() {
    int numero;
    int soma = 0;
    int quantidade = 0;

    printf("Digite uma sequência de números inteiros (para parar, digite 0):\n");

    while (1) {
        printf("Número: ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero % 3 == 0) {
            soma += numero;
            quantidade++;
        }
    }

    if (quantidade > 0) {
        float media = (float)soma / quantidade;
        printf("A média dos números divisíveis por 3 é: %.2f\n", media);
    } else {
        printf("Nenhum número divisível por 3 foi digitado.\n");
    }

    return 0;
}

// QUESTÃO 21

#include <stdio.h>

int main() {
    int numero;
    int contagem = 0;

    printf("Digite uma sequência de números inteiros (para parar, digite 0):\n");

    while (1) {
        printf("Número: ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero >= 100 && numero <= 999) {
            contagem++;
        }
    }

    printf("Quantidade de números com mais de três dígitos: %d\n", contagem);

    return 0;
}

// QUESTÃO 23

#include <stdio.h>

int main() {
    int numero;
    int soma = 0;
    int quantidade = 0;

    printf("Digite uma sequência de números inteiros (para parar, digite 0):\n");

    while (1) {
        printf("Número: ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero >= 50 && numero <= 100) {
            soma += numero;
            quantidade++;
        }
    }

    if (quantidade > 0) {
        float media = (float)soma / quantidade;
        printf("A média dos números entre 50 e 100 é: %.2f\n", media);
    } else {
        printf("Nenhum número entre 50 e 100 foi digitado.\n");
    }

    return 0;
}

// QUESTÃO 24

#include <stdio.h>

int main() {
    int primeiro, ultimo;
    int pares = 0, impares = 0;
    
    printf("Digite uma sequência de números inteiros (para parar, digite 0):\n");

    while (1) {
        printf("Número: ");
        scanf("%d", &primeiro);

        if (primeiro == 0) {
            break;
        }

        ultimo = primeiro;

        while (1) {
            printf("Número: ");
            scanf("%d", &ultimo);

            if (ultimo == 0) {
                break;
            }

            if (ultimo % 2 == 0) {
                pares++;
            } else {
                impares++;
            }
        }

        break;
    }

    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);

    return 0;
}


