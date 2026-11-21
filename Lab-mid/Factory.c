#include <stdio.h>

int calculateBonus(int good_products, int defective_products)
{
    int bonus = 0;
    if (good_products >= 90 && defective_products <= 3)
        bonus = 150;
    else if (good_products >= 70 && defective_products <= 7)
        bonus = 80;

    return bonus;
}

int main()
{

    int day, shifts, overall_bonus = 0, max_bonus_recive = 0, no_bonus = 0, Highest_bonus_Day = 1, Highest_bonus_amount = 0;

    printf("Enter number of days (D): ");
    scanf("%d", &day);
    printf("Enter shifts per day (S): ");
    scanf("%d", &shifts);

    // printf("%d %d", day, shifts);

    for (int i = 1; i <= day; i++)
    {
        int bonus = 0;

        for (int j = 1; j <= shifts; j++)
        {
            int total_products, defective_products, good_products = 0;

            printf("Enter total produced : ");
            scanf("%d", &total_products);
            printf("Enter defective products : ");
            scanf("%d", &defective_products);

            good_products = total_products - defective_products;

            int shift_bonus = calculateBonus(good_products, defective_products);
            if (shift_bonus == 150)
            {
                max_bonus_recive++;
            }
            else if (shift_bonus == 0)
            {
                no_bonus++;
            }

            printf("\n\nDay %d, Shift %d: %d Tk\n\n", i, j, shift_bonus);

            bonus = bonus + shift_bonus;

            // printf("total: %d , def: %d ",total_products,defective_products);
        }
        if (Highest_bonus_amount < bonus)
        {
            Highest_bonus_amount = bonus;
            Highest_bonus_Day = i;
        }

        overall_bonus += bonus;
        printf("Day %d total bonus: %d Tk\n\n", i, bonus);
    }

    printf("\n\nOverall bonus: %d Tk\n", overall_bonus);
    printf("Shifts receiving 150 Tk : %d\n", max_bonus_recive);
    printf("Shifts receiving no bonus : %d\n", no_bonus);
    printf("Highest bonus : Day %d(%d Tk)\n", Highest_bonus_Day, Highest_bonus_amount);

    return 0;
}
