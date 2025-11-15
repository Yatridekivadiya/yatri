#include<stdio.h>
int main()
{
    int women,total_population,men,women_illiteracy,men_illiteracy;

    total_population=1441981744;
    women=(total_population-(total_population*48.4)/100);
    printf("the total population of women is : %d",women);

    men=total_population-women;
    printf("\nthe total population of men is : %d",men);

    women_illiteracy=((women*62.84)/100);
    printf("\nthe total population of women illiteracy : %d",women_illiteracy);

    men_illiteracy=((men*80.95)/100);
    printf("\nthe total population of men illiteracy : %d",men_illiteracy);

    printf("\nThis program is developed by yatri dekivadiya");
}
