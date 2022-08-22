#include <stdio.h>

int main()

{

    int starttime, endtime, durationtime;

    scanf("%d %d", &starttime, &endtime);

    durationtime = endtime - starttime;

    if (durationtime < 0)

    {

        durationtime= 24 + (endtime - starttime);

    }

    if (starttime == endtime)

    {

        printf("O JOGO DUROU 24 HORA(S)\n");

    }

    else
        printf("O JOGO DUROU %d HORA(S)\n", durationtime);
        return 0;
}
