#include <stdio.h>
int main()
{
    //pointer
    int x = 100;
    // int a = 0144; //เลขฐาน 8
    // int b = 0x64; //เลขฐาน 16
    // printf("x = %d",x);
    // printf("reference x = %lu\n", &x); //ปริ้น address ออกมา
    // printf("reference x = %p\n", &x); //ปริ้น address ฐาน 16 ออกมา

    // int number[] = {3, 4, 5, 6, 7};
    // int number[100];
    // int number[100] = {3, 4, 5, 6, 7};
    // printf("index 1 = %d\n", number[1]);
    // printf("reference number[1] = %p\n", &number[1]+1); //addressบวกอีก 1 address จะเพิ่มaddress 4 บิต เพราะ int มี 4 บิต ,ถ้าเป็น double จะบวกaddressเพิ่ม 8 บิต
    // printf("reference number[0] = %p\n", &number[0]); //ปริ้น address ฐาน 16 ออกมา
    // printf("reference number = %p\n", &number); //ปริ้น address ฐาน 16 ออกมา
    // printf("reference number[2000] = %p\n", &number[2000]);

    //----------------------------------------------------------

    int number[] = {3, 4, 5, 6, 7}; // ตำแหน่งของแต่ละตัวคือ {00, 04, 08, 12, 16} เพราะ int จองช่องไว้ตัวละ 4 ช่อง
    int *ptr = &x;
    int *arrPtr;
    arrPtr = number; // pointer = ... ไม่ได้เป็นการเทียบค่า แต่เป็นการชี้ไปที่ค่านั้นที่ตำแหน่งเดียวกันเฉยๆ ในจุดนี้ชี้ไปที่ index แรก ตำแหน่ง {00} ก็คือชี้ไปที่ค่า 3
    arrPtr += 2; // คือ การบวกช่องใน array ไปอีก 2 ช่อง (0 -> 2) address 2 คือ 5 (0 = 3, 1 = 4, 2 = 5 , 3 = 6, 4 = 7) 
    *arrPtr = *arrPtr + 10; //*arrPtr คือค่าบน address นั้น ๆ ก็คือจะดึงค่าจาก address นั้นมาบวก 10 แล้วเก็บค่าที่บวกแล้วแทนที่ค่าเดิม 
    printf("arrptr = %p, *arrPtr = %d",arrPtr, *arrPtr); /*output -> arrptr = 0028FF18, *arrPtr = 15 */
    printf("arrptr = %p, *arrPtr = %d",arrPtr, *arrPtr);
    // printf("number[2 = %d\n]",number[2]); /*output -> number[2] = 15 */ 

    //----------------------------------------------------------

    // int number[] = {3, 4, 5, 6, 7};
    // for (int *ptr = number; ptr <= &number[4]; ptr++)
    // {
    //     printf("[%p] = %d\n",ptr, *ptr);
    // }
    // int *ptr2 = number;
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("[%p] = %d\n",ptr2+i, *(ptr2+i));
    // }
    
    //----------------------------------------------------------

    // char input[100];
    // int count = 0;
    // char c;
    // while ((c = getchar()) != '\n')
    // {
    //     input[count] = c;
    //     ++count;
    // }
    // input[count] = '\0';
    // for (char *cPtr = input;*cPtr != '\0' ; cPtr++)
    // {
    //     printf("%c\n", *cPtr);
    // }

    // //----------------------------------------------------------

    // char c;
    // int i;
    // char s[100];
    // scanf("%d-%c-%s",&i ,&c ,s);
    // printf("%d %c %s", i, c, s);
}