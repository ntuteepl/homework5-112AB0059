#include <stdio.h>

int main() {
    int hours, minutes;
    double angle;

    printf("請輸入時間（HH MM）：");
    scanf("%d %d", &hours, &minutes);

    if (hours < 1 || hours > 12 || minutes < 0 || minutes > 59) {
        printf("輸入時間不合法。\n");
        return 1;
    }

    // 計算時針和分針的角度
    // 每小時時針轉動 30 度，每分鐘時針轉動 0.5 度
    double hour_angle = (hours % 12) * 30 + (minutes * 0.5);
    double minute_angle = minutes * 6;

    // 計算兩者夾角
    angle = hour_angle - minute_angle;

    // 將角度限制在0到180度之間
    if (angle < 0) {
        angle = -angle;
    }
    if (angle > 180) {
        angle = 360 - angle;
    }

    // 四捨五入到小數點後3位
    double multiplier = 1000.0;
    angle = (int)(angle * multiplier + 0.5) / multiplier;

    printf("時針和分針夾角為：%.3f \n", angle);

    return 0;
}
