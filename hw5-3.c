#include <stdio.h>

int main() {
    int hours;      // 工時
    double hourlyPay; // 時薪
    double salary;  // 薪水

    printf("請輸入工時（整數）：");
    scanf("%d", &hours);

    printf("請輸入時薪（小數）：");
    scanf("%lf", &hourlyPay);

    if (hours <= 60) {
        salary = hours * hourlyPay;
    } else if (hours > 60 && hours <= 120) {
        salary = 60 * hourlyPay + (hours - 60) * hourlyPay * 1.33;
    } else {
        salary = 60 * hourlyPay + 60 * hourlyPay * 1.33 + (hours - 120) * hourlyPay * 1.66;
    }

    printf("應獲得的工資為：%.1lf\n", salary);

    return 0;
}
