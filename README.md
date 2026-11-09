# Домашнее задание к работе 11

## Условие задачи

<img width="676" height="246" alt="{3CB63A66-486C-4809-B559-C374499410DB}" src="https://github.com/user-attachments/assets/53677c93-bbca-4f5b-a54c-976f67126f80" />

`Пояснение`: Создать структуру для хранения записи, указанной в индивидуальном варианте. Организовать ввод трех значений структур. Выполнить обработку 3 переменных структурного типа согласно варианту: отбор записей по условию, вычисление характеристики, поиск экстремального значения или сортировку. Вывести результат. В отчёте представить описание структуры, ввод данных, основную функцию обработки и результаты проверки.

`Общие требования`: не вводить реальные персональные данные; для дат использовать единый формат и явно указывать дату, относительно которой вычисляется возраст, стаж или срок. Для задач с длительностью событий предусмотреть переход через полночь или хранить дату вместе со временем.


## 1. Алгоритм и блок-схема

1. Начало.
2. Установка локали для корректного отображения русского языка в консоли.
3. Объявление структуры `Date` для хранения даты (день, месяц, год) и структуры `Product` для хранения параметров товара (символ, срок годности, цена, номер серии).
4. Объявление функции `get_date` для расчета конечной даты срока годности.
5. Ввод данных для `Товара 1` (символ наименования, дата производства, срок годности в днях, цена, номер серии).
6. Ввод данных для `Товара 2` (символ наименования, дата производства, срок годности в днях, цена, номер серии).
7. Ввод данных для `Товара 3` (символ наименования, дата производства, срок годности в днях, цена, номер серии).
8. Вызов функции `get_date` для каждого товара для вычисления даты «годен до» (с прибавлением дней и пересчетом лишних дней в месяцы и годы).
9. Вывод результатов обработки: отображение наименования и рассчитанной даты окончания срока годности для всех трех товаров в отформатированном виде.
10. Конец

### Блок-схема

<img width="1344" height="813" alt="{DC2E4E14-5886-49A5-8906-682B28A84605}" src="https://github.com/user-attachments/assets/cf827929-bee5-4fc1-824a-0e297ff6da7b" />

[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=combined_product_date_flowchart%20(1).drawio&dark=auto#R%3Cmxfile%3E%3Cdiagram%20id%3D%22combined-flow%22%20name%3D%22%D0%9E%D0%B1%D1%89%D0%B0%D1%8F%20%D0%B1%D0%BB%D0%BE%D0%BA-%D1%81%D1%85%D0%B5%D0%BC%D0%B0%22%3E7V1bk6O2Ev41rtp9sEsXro87M7tJ5Vap2qqck6ctxmZsZ7FxMM6M8%2BsjQMIgAeYi%2BcJoHjxIloRRf93qbn3ABD9u3n6IvN3q13DhBxMEFm8T%2FDRBCDu2Rf4lNcesBhkuzGqW0XqR1RUqvq7%2F9WkloLWH9cLflxrGYRjE6125ch5ut%2F48LtV5URS%2Blpu9hEH5rDtv6QsVX%2BdeINb%2Bb72IV7TWAuD0xY%2F%2Berlip8bsm43HWtOK%2FcpbhK%2BFKvx5gh%2BjMIyzo83box8k08cmJuv3pebb%2FJdF%2FjZu02HzbR97USx2oyPt4yO7atKRTDApPLyu1rH%2FdefNk29eiZBJ3SreBKQEyaG332Wz%2FrJ%2B88l5Hl7WQfAYBmFE6oJkWqYLL%2Fr%2BYYLwl%2FRvgh7z44%2Bk%2FT6Owu8%2B60G%2BAulf%2Fg2bdJSMHW7j6rFpp3Ts7PgjbU8RBS1Szi7zHy840MucPIGJ%2B5R8PoAJuR7HZsfk8yH9%2FEw7%2BVHsvxWmi07xD3648ePoSJqsCigwqchfC5BhMKCjOKY9M7MaqhtTi7bwKGaX%2BeAnqZIDKtg6Ia%2B3FcgQRUzQuEsOSSsvCPwgXEbehkzSzo%2FW5Kx%2BxH%2F3%2B%2BmLc6i4VRCYVSDYwdnW2%2FhpP7D7BmcL73gqbEj31al49L2oFyIsU0AEtsuIsDHiEIFkAeJZI6IbIvbkJFTqcLaL1nM%2FL20Pm342oQ8CIDDlQABpBHRBACrZBFS0CahsE9CFbQK0ZSFCG4WOkCgYBVQyCuiyRiHvNRQCWCOgCwJwySjgolHAZaOAL2wUMJKFCG0UOkKiYBRwySjgyxoFA0pxFknkG7SKH6LwsF0kId8TGJlQI39PLhekBbD0428LL%2FY%2FtIsMqI%2BYgOKjLPU3jLLsLZePHPNsxHDZt%2FITRy17VCX7Nh4gdQWUyn4KHV7xJQq%2FlT8wauHjKuG3WempyVcqfGg5ijQ%2FPLRKC%2Bp1vypnlKwXJ4SkpQJE0nKGESsgM%2FvwnBwtk6NSlJlYntIoiBsF1Y2Cy6Pg0iiYG2WAZ5rnIooQdbm1yRbiVVMORP3tog1E31Pm%2BhPNUCefWRbbTLPYVj%2Bvs0%2FOGlpSktY%2BHcRfCLsxorDDQzT3GSwKWxpFFJBxvtJiGMWrcBluveDzqfahvIqd2vwShjuKkL%2F8OD5SKXiHOCzjh%2BDxU7K%2FRIrPQTj%2FnlV9WQesQRkfbaQ%2BHDfZRJApIavXKaiDInwq0RD5gRev%2FylLYJhcYV%2B55r9aS7VOqs%2FXEysaINZnLddGuaLriRX3FyvSUm2W6hW11RggVq2tzXLF1xOr2V%2BsWEu1WapX1FZrgFi1trIR%2FLd1%2FP%2FkmmYmsGj5z7TsOqz89EYvOi0cC4VC3iKtG4IGlrkDM8M2cD1C6HC%2Fh2si5byby0IwGnCZfLyVQZf24nCW%2F7RW0PvzCxH83%2FM%2FwE8%2FIXv9728%2Ff3t5mRqaTNQlMbTIEi2b7B9Nw%2BwnvRKCYjyOuGyLLWRbbBm7QNVA0DsDhyDOcms0RbxIjtBDJmE%2BLUfb0%2Bwb7bGpbZdl5WizYy%2FAVOXnzu8bOjLSc9WIabedsAo3z4f9qNGCLG%2BTXE0qcFKBQU8BV5gEbo%2FAFjYHXUMCN6BawIY2CZxJKFVNqahbmQa%2BMrUrsBdOXBEm0CrDBObpXoYSGZyiapSY794MnITKGQKIegm4jSEwHZ5JKiNTXy1hS9uBc%2Fo8pdJus%2FxzdWotAR9gQOgqw4mtY4nOsJIWO3B7eTm5gMkdy7jboFru7qRnSqPARtM5jWJOo5DRgI3ZjImQ32oM8%2BUlvGrSGVBgsDgc7DIEKEtoML%2BnKxgbp02DszXQkGygDTJNZs8N6sZr02hojYarbZ9UowHJRIPeZOEXrimYAYBK2XgTs7Wsazb%2BPLjMCnBl%2Fvd%2B521LorH%2BPoSpY%2B7Nvy9TIUzn2QV%2BIu0K1xgtnz%2BkBP0ksVs8%2BEgpdrXfZ2rBTsT8f4G8lf9GguDsZ9KGnXccwMy2sNt6hWZNwpeXva9m6e3JL9DqdUa9tkQuuX4ZrCZTMMPMK04alpaOxVJfHTPuRccMemu%2FLO0icw1B%2B%2B28eu0ieEqzhazFLumxL7YQvGiYB%2FF5cofP4iveFjR7ckoaQTRCVa4P2fqsoTVLJFN%2FehKm%2B%2FCM3l%2FERztpi4XOqku9KtToAca8HligUXPE%2BJPvQg6yn1FzSsDny4S8qmrV68n7afSRRqh6vbMrZf9USnbFvpdVUrInKj9C68mO0uCXE69b9wJkae6efAjbMiFsjRbCDfa4weHpFTsNdJCq8gxXxJcjE1%2F2aPF1id2XIlJLUAVnoNcyJi%2FcuTucnOoYkt1zk%2BOYQOye8c5ZBr2mwxnfvMK5F56Kodg5dzRd9nbpslMIeIDYykgxDmqDhNGTYu6cLzuFBg8Zx1QGGU2YvTxhdio8UMV1VVEhHU2YvVfCbG4YThl3ZSjRhNlrEGanyOWcR6jsZhpHM2bvlzHLEyfzCvkw6ZkqKj3KTYfuKomTLOBTTZzEQuSCOdQp5k06MtNKjmjs3is22%2BIMycbZMMvUk9LdeG0aDa3RcFu8SbZoykGDJnbx69ZleZOO5k3eFm%2BSvTJJq9doeJOO5k0O1a4evEnk8EkcPpereHvIRTI1WdMmb5g2OcxFU0qbNPh9WZboqtMbIfjke5wjTfIpEyGzplrvZN554GjamJBYKfumLfWuvOCanfWujv1wk%2BuoGl%2BVGAgX2kjpclqt01MMeZtwhnst9jBNtvfWkuDB2xGDT72qtiMyb3vQdqRz2kPTTwVUd4awzNsHHE0%2FvTr9tDJdc0V8OfVw0gw4QVSLizLgoG0JT4xUxoBz3TZIGP0m950z4Ih3KTwyUhkDLudpvGPuy%2BUpcNAW3iuljgMHQYO%2F8U7Nwr2Q4ETuizoWHATo3ZuCa9DgoGnX5PpUyFi%2FcfB%2BeXDQhZw1UMeEg6D3S0wKL7YcYZh6Q1Q4FvmppsJBN7mNB%2BR%2FsBzPXJgXl%2FvQUhIqbA41UlujzpWNuoGGSuYTCtjFaTi0hUPu4twMHmTe7p9fnQbElchxeVhy%2B3sQ74QdB4FMZrrWsIKGXY8fl2eJbl%2FNRkWQgzw16NIMOQhk3lmQw2iE2jwCjtxAZ00pSQ7l70Noy5LL4tLGPmf4LQjwGZVLE%2BXy80lSPzRa9bvO4wU15S1Rd8eCjtIFskbBhdS42enZoVenrxFzorX7utmJKlb4TSrv7TLYINv9koTi8W4O3A2HrTqrck2I9X65er4%2BF%2FF0EvY88Pb79bwMhjKaFv6LdwjiX7xnP3jIdZ9JZOclv6hWgGcfLNhj%2F6c7FKscFzIJLWVc3Idk4Wel3Aubk02UpJrVHPCxrsG%2F%2Ba5m66jiefzg2is76uK3VyJzG279wbDsC5UbwQQ2iW9pk19nI8PCtuWUpCq8e701PlxozkwIoGHbpgNNhJrHVQ6WLm7g%2BJbF3nlQYjSBU7S25cTo0Ge5Ft52OCghAmYIWee21bsGPy47CQfalqEPl0zprUr8QBbiCGjKdaeL86l1p9ZPmQGEZCrOIAcyVxzDtM7tbXW%2B25ZD%2FplnIAv32pqdnoHMn633ksWpGby0mnW5Y1erWWmJsnhFwzIVTcZ97UTRELt3rAvxC8pCt7CM8Dxm5fhu9ShYfZsUnQi178KeGvx7pBDPIpSXWmAOi5b8DUgeGvyb9BqjxhrJk2IUJinUk4kgk776NVz4SYv%2FAA%3D%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)

## 2. Программа

Программа написана на языке **C++**.
```cpp
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
```

## 3. Результаты работы программы
```text

Товар 1:
Символ наименования: +
Дата производства (д м г): 12 02 22
Срок годности (дней): 30
Цена: 450
Номер серии: 333

Товар 2:
Символ наименования: )
Дата производства (д м г): 12 09 20
Срок годности (дней): 3
Цена: 9999
Номер серии: 2223

Товар 3:
Символ наименования: (
Дата производства (д м г): 24 07 98
Срок годности (дней): 12
Цена: 4500
Номер серии: 4444


========================================
          РЕЗУЛЬТАТЫ ОБРАБОТКИ
========================================
Товар 1 == Наименование: +  == Годен до: 12.03.22
Товар 2 == Наименование: )  == Годен до: 15.09.20
Товар 3 == Наименование: (  == Годен до: 06.08.98
========================================
```



## 4. Информация о разработчике

```text
Имя: Коноваленко Ярослав
Вариант: 13
Группа: бИЦТ-261
Подгруппа: 1
```
