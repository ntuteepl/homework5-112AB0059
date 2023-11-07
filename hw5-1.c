#include <stdio.h>

double manualRound(double value, int decimalPlaces) {
    double multiplier = 1;
    for (int i = 0; i < decimalPlaces; i++) {
        multiplier *= 10;
    }

    double roundedValue = (int)(value * multiplier + 0.5) / multiplier;
    return roundedValue;
}

int main() {
    double celsius;
    printf("請輸入攝氏溫度：");
    scanf("%lf", &celsius);

    double fahrenheit = (celsius * 9 / 5) + 32;
    fahrenheit = manualRound(fahrenheit, 1); // 手動四捨五入到小數點第一位

    printf("華氏溫度為：%.1lf\n", fahrenheit);
    return 0;
}
