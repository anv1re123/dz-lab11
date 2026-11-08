#include <stdio.h>
#include <locale.h>


struct Date {
    int day;
    int month;
    int year;
};

struct Product {
    char name;
    int srok;
    double price;
    int num;
};


struct Date get_date(int d, int m, int y, int s);

int main() {
    setlocale(LC_ALL, "RUS");

    struct Product p1, p2, p3;
    struct Date p_1, p_2, p_3, res1, res2, res3;

    printf("\nТовар 1:\n");
    printf("Символ наименования: ");
    scanf(" %c", &p1.name);
    printf("Дата производства (д м г): ");
    scanf("%d %d %d", &p_1.day, &p_1.month, &p_1.year);
    printf("Срок годности (дней): ");
    scanf("%d", &p1.srok);
    printf("Цена: ");
    scanf("%lf", &p1.price);
    printf("Номер серии: ");
    scanf("%d", &p1.num);

    printf("\nТовар 2:\n");
    printf("Символ наименования: ");
    scanf(" %c", &p2.name);
    printf("Дата производства (д м г): ");
    scanf("%d %d %d", &p_2.day, &p_2.month, &p_2.year);
    printf("Срок годности (дней): ");
    scanf("%d", &p2.srok);
    printf("Цена: ");
    scanf("%lf", &p2.price);
    printf("Номер серии: ");
    scanf("%d", &p2.num);

    printf("\nТовар 3:\n");
    printf("Символ наименования: ");
    scanf(" %c", &p3.name);
    printf("Дата производства (д м г): ");
    scanf("%d %d %d", &p_3.day, &p_3.month, &p_3.year);
    printf("Срок годности (дней): ");
    scanf("%d", &p3.srok);
    printf("Цена: ");
    scanf("%lf", &p3.price);
    printf("Номер серии: ");
    scanf("%d", &p3.num);

    res1 = get_date(p_1.day, p_1.month, p_1.year, p1.srok);
    res2 = get_date(p_2.day, p_2.month, p_2.year, p2.srok);
    res3 = get_date(p_3.day, p_3.month, p_3.year, p3.srok);

    printf("\n\n========================================\n");
    printf("          РЕЗУЛЬТАТЫ ОБРАБОТКИ          \n");
    printf("========================================\n");
    printf("Товар 1 == Наименование: %c  == Годен до: %02d.%02d.%d\n", p1.name, res1.day, res1.month, res1.year);
    printf("Товар 2 == Наименование: %c  == Годен до: %02d.%02d.%d\n", p2.name, res2.day, res2.month, res2.year);
    printf("Товар 3 == Наименование: %c  == Годен до: %02d.%02d.%d\n", p3.name, res3.day, res3.month, res3.year);
    printf("========================================\n");

    return 0;
}


struct Date get_date(int d, int m, int y, int s) {
    struct Date result;

    result.day = d + s;
    result.month = m;
    result.year = y;

    while (result.day > 30) {
        result.day = result.day - 30;
        result.month++;
    }

    while (result.month > 12) {
        result.month = result.month - 12;
        result.year++;
    }
    return result;
}