#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;

    printf("Entrez une opération (+, -, *, /) : ");
    scanf("%f %c %f", &num1, &op, &num2);

    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Erreur : division par zéro\n");
                return 1;
            }
            break;
        default:
            printf("Opération non valide\n");
            return 1;
    }

    printf("Résultat : %.2f\n", result);

    return 0;
}
