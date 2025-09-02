#include <stdio.h>

int main() {
    int i = 2; // กำหนดค่าเริ่มต้นของ i เป็น 2
    
    printf("Output:\n"); // พิมพ์ข้อความ "Output:"
    while (i <= 10) { // ลูป while ที่ทำงานจนกว่า i จะมากกว่า 10
        printf("%d ", i); // พิมพ์ค่าปัจจุบันของ i
        i += 2;// เพิ่มค่า i ทีละ 2
    }
    printf("\nEnd of loop\n"); // พิมพ์ข้อความ "End of loop" เมื่อออกจากลูป
    
    return 0;
}
