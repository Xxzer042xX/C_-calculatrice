/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculator.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 18:01:04 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/06/26 18:01:04 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void) 
{
    float num1;
    float num2;
    float result;
    char op;

    while (1)
    {
        printf("Enter an operation (+, -, *, /, %%): ");
        scanf("%f %c %f", &num1, &op, &num2);

        switch (op) 
        {
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
                } 
                else {
                    printf("Error: division by zero\n");
                    return (1);
                }
                break;
            case '%':
                if ((int)num2 != 0) {
                    result = (int)num1 % (int)num2;
                } 
                else {
                    printf("Error: division by zero\n");
                    return (1);
                }
                break;
            default:
                printf("Invalid operation\n");
                continue ;
        }
        if (op == '%')
            printf("Result: %d\n", (int)result);
        else    
            printf("Result: %.2f\n", result);
    }
    return (0);
}

