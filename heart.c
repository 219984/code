#include <stdio.h>
#include <math.h>
#include <windows.h>

// 设置控制台颜色
void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int main() {
    float x, y, z;
    int i, j;
    
    // 跳动次数
    for (i = 0; i < 30; i++) {
        system("cls");
        
        // 跳动效果：大小随时间变化
        float scale = 0.8 + 0.3 * sin(i * 0.5);
        
        for (y = 1.3; y >= -1.1; y -= 0.1) {
            for (x = -1.2; x <= 1.2; x += 0.05) {
                // 爱心形状的数学公式
                z = x * x + y * y - 1;
                float heart = z * z * z - x * x * y * y * y;
                
                // 应用缩放
                heart *= scale;
                
                if (heart <= 0.0) {
                    setColor(12); // 亮红色
                    printf("❤");
                } else {
                    printf("  ");
                }
            }
            printf("\n");
        }
        
        // 控制跳动速度（毫秒）
        Sleep(300);
    }
    
    // 恢复默认颜色
    setColor(7);
    printf("\n\n    Love from C Language! \n");
    
    return 0;
}