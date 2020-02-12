#include<stdio.h>
int addTen(int x) //นิยามฟังก์ชั่น
{
    x = x+10;
    return x; 
}
int addTwenty(); 
int x = 1000;
int main()
{
    int x = 50; // int มีขนาด 4 bytes 
    int y = addTen(x);//เรียกใช้ฟังก์ชัน
    printf("x in main = %d\n",x);
    printf("addTen in main = %d\n",y);
    printf("addTwenty in main = %d\n",addTwenty());
}
int addTwenty(){
    printf("x in addTwenty = %d\n",x); //x เป็น 1000 ตามที่ประกาศ int x=1000
    x = x+20; // คือ การเอาค่า x ที่เก็บไว้มา + ด้วย 20 แล้ว ให้ x เป็น ค่าใหม่ที่บวกเข้าไปแล้วแทน
    return x; // เมื่อ return แล้ว ค่าที่อยู่บน heap memory นี้จะถูกล้างทั้งหมด
} 