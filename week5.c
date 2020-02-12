#include <stdio.h>
//Pass by ref & Pass by value
int addTen(int *number, int n){
    for (int i = 0; i < n; i++){
        printf("[%p] = %d\n", number + i, *(number+i));
        *(number + i) += 10;
    }
    return 1;
}

void addTwenty(int *n){ //ค่า n ใน main จะเปลี่ยนด้วยเพราะเป็นการส่งที่อยู่นั้นมา แล้วเปลี่ยนค่าที่ตำแหน่งนั้น (Pass by ref.)

    *n += 20;
}

int main(){
    int numbers[] = {4, 5, 6, 7, 8};
    int n = 5;

    addTen(numbers, n); // (Pass by value.) ค่าเดิมจะไม่เปลี่ยน

    for (int i = 0; i < n; i++)
        printf("main [%p] = %d\n", numbers + i, *(numbers +i));

    addTwenty(&n); // & คือการส่งที่อยู่ไปในฟังก์ชัน (Pass by ref.) ค่าเดิมจะเปลี่ยนด้วย เพราะเราเปลี่ยนค่าที่ตำแหน่ง
    printf("n = %d\n", n);
}