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
    int minutes;
    printf("請輸入通話分鐘數：");
    scanf("%d", &minutes);

    double cost;

    if (minutes <= 800) {
        cost = minutes * 0.9;
    } else if (minutes > 800 && minutes <= 1500) {
        cost = (800 * 0.9 + (minutes - 800) * 0.9)* 0.9;
    } else {
        cost = (800 * 0.9 + 700 * 0.9 + (minutes - 1500) * 0.9) * 0.79;
    }

    // 手動四捨五入到小數點以下第一位
    double roundedCost =(cost * 10) / 10;
    roundedCost = manualRound(roundedCost, 1);
    printf("通話費用為：%.1lf\n", roundedCost);

    return 0;
}
