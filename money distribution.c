#include <stdio.h>

int main(void){
    int M, N;

    printf("Enter M: ");
    scanf("%d", &M);
    printf("Enter N: ");
    scanf("%d", &N);

    int res = M/N;

    int hundredrupee = 0, fiftyRupee = 0, twentyRupee = 0, tenRupee = 0, fiveRupee = 0, twoRupee = 0, oneRupee = 0;
    for( ; res > 0; ){
        if(res >= 100){
            hundredrupee++;
            res -= 100;
        }
        else if(res >= 50){
            fiftyRupee++;
            res -= 50;
        }
        else if(res >= 20){
            twentyRupee++;
            res -= 20;
        }
        else if(res >= 10){
            tenRupee++;
            res -= 10;
        }
        else if(res >= 5){
            fiveRupee++;
            res -= 5;
        }
        else if(res >= 2){
            twoRupee++;
            res -= 2;
        }
        else if(res >= 1){
            oneRupee++;
            res -= 1;
        }
    }

    printf("100 rupee notes: %d\n", hundredrupee);
    printf("50 rupee notes: %d\n", fiftyRupee);
    printf("20 rupee notes: %d\n", twentyRupee);
    printf("10 rupee notes: %d\n", tenRupee);
    printf("5 rupees coins: %d\n", fiveRupee);
    printf("2 rupee coins: %d\n", twoRupee);
    printf("1 rupee coins: %d\n", oneRupee);
    return 0;
}
