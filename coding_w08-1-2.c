#include <stdio.h>

int main() {
    printf("Output:\n"); // พิมพ์ข้อความ "Output:"
    for (int i = 2; i <= 10; i += 2) { // วนลูป: กำหนดค่าเริ่มต้น i=2, เงื่อนไข i<=10, เพิ่มค่า i ทีละ 2
        printf("%d ", i); // พิมพ์ค่าของ i
    }
    printf("\nEnd of loop\n"); // พิมพ์ข้อความ "End of loop" เมื่อจบการทำงานของลูป
    
    return 0;
}
