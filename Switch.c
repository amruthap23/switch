#include <stdio.h>
int main() {
    int x;
    printf("Menu items: \n\n 1. Pizza,Rs239 \n 2. Burger,Rs129 \n 3. Pasta,Rs179 \n 4. French fries,Rs99 \n 5. Sandwich,Rs149 \n");
    printf("Enter random number from 1-5 : ");
    scanf("%d", &x);
    switch(x)
    {
        case '1' :
            printf("Food item: Pizza \n Price: Rs239 \n");
            break;

        case '2' :
            printf("Food item: Burger \n Price: Rs129 \n");
            break;

        case '3' :
            printf("Food item: Pasta \n Price: Rs179 \n");
            break;

        case '4' :
            printf("Food item: French fries \n Price: Rs99 \n");
            break;

        case '5' :
            printf("Food item: sandwich \n Price: Rs149 \n");
            break;

        default:
            printf("Error! Number doesn't exist from 1-5");
    }

    return 0;
}

    


    
