#include <stdio.h>

int main()

{

    int startTm, endTm, durationTm;

    scanf("%d %d", &startTm, &endTm);

    durationTm = endTm - startTm;

    if (durationTm < 0)

    {

        durationTm = 24 + (endTm - startTm);

    }

    if (startTm == endTm)

    {

        printf("O JOGO DUROU 24 HORA(S)\n");

    }

    else
        printf("O JOGO DUROU %d HORA(S)\n", durationTm);
        return 0;
}
