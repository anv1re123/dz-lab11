#include <stdio.h>
#include <locale.h>

struct Product {

    int index;
    int day;
    int month;
    int year;
    char name;
    int srok;
    double price;
    int num;
};

typedef struct Product Product;

void inputnameend(Product res,Product p);
Product inputname();
Product getdate(int d,int m,int y,int s);

int main() {

    setlocale(LC_ALL,"RUS");

    Product p1;
    Product p2;
    Product p3;
    Product res1;
    Product res2;
    Product res3;

    p1 = inputname();
    p2 = inputname();
    p3 = inputname();

    res1 = getdate(p1.day,p1.month,p1.year,p1.srok);
    res2 = getdate(p2.day,p2.month,p2.year,p2.srok);
    res3 = getdate(p3.day,p3.month,p3.year,p3.srok);

    printf("\n\n========================================\n");
    printf("          РЕЗУЛЬТАТЫ ОБРАБОТКИ          \n");
    printf("========================================\n");

    inputnameend(res1,p1);
    inputnameend(res2,p2);
    inputnameend(res3,p3);

    printf("========================================\n");

    return 0;
}

Product inputname() {

    Product p;

    printf("Товар №");
    scanf("%d",&p.index);
    printf("Символ наименования: ");
    scanf(" %c",&p.name);
    printf("Дата производства (д м г): ");
    scanf("%d %d %d",&p.day,&p.month,&p.year);
    printf("Срок годности (дней): ");
    scanf("%d",&p.srok);
    printf("Цена: ");
    scanf("%lf",&p.price);
    printf("Номер серии: ");
    scanf("%d",&p.num);
    printf("\n");

    return p;
}

void inputnamend(Product res,Product p) {
    printf("Товар %d == Наименование: %c  == Годен до: %02d.%02d.%d\n",p.index,p.name,res.day,res.month,res.year);
}

Product getdate(int d,int m,int y,int s) {

    Product result;

    result.day = (d+s)%30;
    result.month += m;
    result.year = y;

    return result;
}
