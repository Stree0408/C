// *** 변수에 대하여 알아봅시다.
// - 정수형     short 형:
//            int 형:
//            long
//            long long
// - 실수형     float 형
//             double형
// - 문자형     char형
// - 문자열형    char name[100]


// [변수명 사용규칙]
// - 영문자, 숫자, _사용가능
// - 첫 글자는 영문자 또는 _만 가능
// - 예약어는 사용불가능


// [변수 선언방법]
// ** 변수를 사용하기 전에 변수의 형과 변수명을 정의해 주어야 한다.
// int      val = 100;
// 변수형    변수명   초기값


// 1
// int su = 100;
// float a1 = 90.5;
// char cval = 'o';
// char sval[] = "APPLE";


// 2
// int num1, num2;
// float f_num1, f_num2;
// char cval;

// num1 = 10;
// num2 = 20;
// f_num = 3.14;
// f_num2 = 5.5;
// cval = 'A';


// 1. 정수형 변수를 선언하고 초기 값을 저장한 후 출력하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    int value_1 = 10;
//    int value_2 = 20;
//
//    printf("%d  %d\n", value_1, value_2);
//    printf("%d\n", value_1+value_2);
//}


// 2. 정수형 변수를 선언하고 값을 저장한 후 출력하여 봅시다.
//#include<stdio.h>
//int main()
//{
//    int num1, num2, num3;
//    num1 = 10;
//    num2 = 20;
//    num3 = 30;
//
//    printf("num1=%d num2=%d num3=%d\n", num1, num2, num3);
//    printf("합= %d\n", num1+num2+num3);
//}


// 3. 실수형 변수를 선언하고 초기 값을 저장한 후 출력하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    float vb1 = 5.7;
//    float vb2 = 3.1;
//    printf("%.1f %.1f\n", vb1, vb2);
//    printf("%.1f\n", vb1+vb2);
//}


// 4. 여러가지 형의 변수에 저장된 값을 어떻게 출력하는지 알아 봅시다.
//#include <stdio.h>
//int main()
//{
//    int age = 27;
//    float sight = 1.567;
//    char se='M';
//    char name[70]="Sally";    // [] --> 기억장소 크기, 글자하나당 1 byte, 한글은 2 byte, 뒤에는 항상 NULL, '\0' -> 1 byte
//
//
//    printf("%d\n", age);    // 27
//    printf("%.2f\n", sight);    // 1.57
//    printf("%c\n", se);     // M
//    printf("%s\n", name);   //  Sally
//}


// 5. 위의 결과를 다음과 같이 출력되도록 수정하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    int a = 10;
//    float b = 3.567;
//    char c='S';
//    char d[70]="Sally";
//
//    printf("a에 저장된 값 : %d  ", a);    // 27
//    printf("b에 저장된 값 : %.3f\n", b);    // 1.57
//    printf("c에 저장된 값 : %c   ", c);     // M
//    printf("d에 저장된 값 : %s\n", d);   //  Sally
//}



// 6. 다음의 실행결과를 적어 봅시다.
//#include <stdio.h>
//int main()
//{
//    int amount, price, sum;
//    amount = 50;
//    price = 100;
//    sum = amount * price;
//    printf("수량= %d\n", amount);
//    printf("단가= %d\n", price);
//    printf("금액= %d\n",sum);
//}



// 7. 위의 프로그램을 출력포맷에 맞추어 다시 작성하여 봅시다.
//#include<stdio.h>
//int main()
//{
//    int amount = 50;
//    int price = 100;
//    int sum;
//    sum = amount * price;
//
//    printf("%10s%10s%10s\n", "amount", "price", "sum");
//    printf("%10d%10d%10d\n", amount, price, sum);
//}



// 8. C programming, 15000, 031-715-8354 을 변수에 저장하고 왼쪽 정렬하여 출력하여 봅시다.
//#include<stdio.h>
//int main()
//{
//    char book_name[20]="C programming";
//    char tel_no[15]= "031-715-8354";
//    int price = 5000;
//
//    printf("%-20s%-20s%-20s\n", "book_name", "price", "tel_no");
//    printf("%-20s%-20d%-20s\n", book_name, price, tel_no);
//}



// 9. 위의 프로그램과 다른점을 찾아보고 설명하여 봅시다.
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char book_name[20];
//    int price;
//    char tel_no[15];
//
//    strcpy(book_name, "C programming");
//    price = 5000;
//    strcpy(tel_no, "031-715-8354");
//
//    printf("%-20s%-20s%-20s\n", "book_name", "price", "tel_no");
//    printf("%-20s%-20d%-20s\n", book_name, price, tel_no);
//}


// 10. 위의 프로그램을 다음과 같이 출력되도록 수정하여 봅시다.
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char book_name[20];
//    int price;
//    char tel_no[15];
//
//    strcpy(book_name, "C programming");
//    price = 3000;
//    strcpy(tel_no, "031-715-8354");
//
//    printf("제   목 : %s\n", book_name);
//    printf("단   가 : %d 원\n", price);
//    printf("전화번호 : %s\n", tel_no);
//}


// 11. 다음과 같이 변수를 선언하고 값을 저장한 후 결과와 같이 출력되도록 하여 봅시다.
//#include<stdio.h>
//#include <string.h>
//int main()
//{
//    char name[10];
//    char bname[10];
//    int age;
//    float weight;
//    float height;
//
//    strcpy(name, "gongyu");
//    strcpy(bname, "ddokkabi");
//    age = 500;
//    weight = 70.0;
//    height = 190.0;
//
//    printf("name : %s\n", name);
//    printf("bname : %s\n", bname);
//    printf("age : %d살\n", age);
//    printf("weight : %.0fkg\n", weight);
//    printf("height : %.0fcm", height);
//}


// 12. 다양한 변수 선언방법을 살펴보고 결과를 예측하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    char name[] = "abc"; // 초기 값이 있을 경우 자리 수 생략가능 char name[]="홍길동";
//    int kor, eng, mat, total;
//    float aver;
//    kor = 80; eng=85; mat=95;
//    total = kor + eng + mat;
//    aver = total / 3.;
//    printf("%40s\n\n", "===result===");
//    printf("%10s%10s%10s%10s%10s%10s\n", "name", "kor", "eng", "mat", "total", "aver");
//    printf("%10s%10d%10d%10d%10d%10.2f\n", name, kor, eng, mat, total, aver);
//}



// 13. 다음 프로그램을 실행하여 기억장소의 크기를 알아봅시다.
// char :1  short:2   int:4    long:4 or 8 long(mine)   long long: 8         float:4     double:8
// CHAR ST[10] : 10
//#include <stdio.h>
//int main()
//{
//    char ch = 9;
//    int inum = 105223;
//    double dnum = 3.1415;
//    printf("변수 ch의 크기: %d \n", sizeof(ch));
//    printf("변수 inum의 크기: %d \n", sizeof(inum));
//    printf("변수 dnum의 크기: %d \n", sizeof(dnum));
//
//    printf("char의 크기: %d \n", sizeof(char));
//    printf("int의 크기: %d \n", sizeof(int));
//    printf("long의 크기: %d \n", sizeof(long));
//    printf("long long의 크기: %d \n", sizeof(long long));
//    printf("float의 크기: %d \n", sizeof(float));
//    printf("double의 크기: %d \n", sizeof(double));
//    return 0;
//}



// Question 1
//#include <stdio.h>
//int main()
//{
//    int kor, eng, math;
//    kor = 100;
//    eng = 90;
//    math = 100;
//
//    printf("국어 : %d\n", kor);
//    printf("영어 : %d\n", eng);
//    printf("수학 : %d\n", math);
//}


// Question 2
//#include <stdio.h>
//int main()
//{
//    int result, val_1, val_2;
//    val_1 = 5;
//    val_2 = 7;
//    result = val_1 * val_2;
//
//    printf("%d * %d = %d", val_1, val_2, result);
//}



// Question 3
//#include <stdio.h>
//int main()
//{
//    int quotient = 10/3;
//    int remainder = 10 % 3;
//
//    printf("quotient = %d\n", quotient);
//    printf("remainder = %d", remainder);
//}



// Question 4
//#include <stdio.h>
//int main()
//{
//    int candy = 150;
//    int student = 71;
//    int quotient = candy/student;
//    int remainder = candy % student;
//
//    printf("학생들이 각각 받을 사탕의 수 : %d개\n", quotient);
//    printf("남는 사탕의 수            : %d개\n", remainder);
//}


// Question 5
//#include <stdio.h>
//int main()
//{
//    float num1, num2, result1, result2, result3, result4;
//    num1 = 5.0;
//    num2 = 2.0;
//    result1 = num1 + num2;
//    result2 = num1 - num2;
//    result3 = num1 * num2;
//    result4 = num1 / num2;
//
//    printf("%.1f + %.1f = %.1f\n", num1, num2, result1);
//    printf("%.1f - %.1f = %.1f\n", num1, num2, result2);
//    printf("%.1f * %.1f = %.1f\n", num1, num2, result3);
//    printf("%.1f / %.1f = %.1f\n", num1, num2, result4);
//}




// Question 6
//#include <stdio.h>
//int main()
//{
//    int num, kor, eng, math;
//    num = 1;
//    kor = 90;
//    eng = 85;
//    math = 95;
//    char name[] = "shine";
//    int total = kor + eng + math;
//    int aver = total / 3;
//
//    printf("%6s%6s%6s%6s%6s%6s%6s\n", "num", "name", "kor", "eng", "math", "total", "aver");
//    printf("%6d%6s%6d%6d%6d%6d%6d\n", num, name, kor, eng, math, total, aver);
//}


// Question 7
//#include <stdio.h>
//int main()
//{
//    char name[] = "홍길동";
//    char ty = 'O';
//    int age = 18;
//    float tall = 165.5;
//    float weight = 80.2;
//
//    printf("name : %s\n", name);
//    printf("type : %c형\n", ty);
//    printf("height : %.1fcm\n", tall);
//    printf("age : %d살\n", age);
//    printf("weight : %.2fkg\n", weight);
//}



// Question 8
//#include <stdio.h>
//int main()
//{
//    char name[] = "새우깡";
//    int quantity, unit, price;
//    quantity = 10;
//    unit = 500;
//    price = quantity * unit;
//
//    printf("상품명 : %s\n", name);
//    printf("수량 : %d개\n", quantity);
//    printf("단가 : %d원\n", unit);
//    printf("금액 : %d원\n", price);
//}


// Question 9
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char name[15], school[20];
//    int grade, class, num;
//    float eyesight;
//
//    strcpy(name, "park" );
//    strcpy(school, "seoul middle school");
//    grade = 2;
//    class = 3;
//    num =24;
//    eyesight = 1.5;
//
//    printf("이름 : %s    학교 : %s\n", name,school);
//    printf("%d학년 %d반 %d번\n", grade, class, num);
//    printf("시력 : %.1f\n", eyesight);
//}



// Question 10
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char name[10];
//    char ty;
//    int age;
//    float tall;
//    float weight;
//
//    strcpy(name, "홍길동");
//    ty = 'O';
//    tall = 180.5;
//    age = 18;
//    weight = 80.20;
//
//    printf("name : %s\n", name);
//    printf("type : %c형\n", ty);
//    printf("height : %.1fCm\n", tall);
//    printf("age : %d\n", age);
//    printf("weight : %.2fkg\n", weight);
//}
//


// Question 11
//#include <stdio.h>
//int main()
//{
//    int A, B, C;
//    A = 10;
//    B = 20;
//    printf("<<교환하기 전 각 변수의 값>>\n");
//    printf("A 의 값 = %d\n", A);
//    printf("B 의 값 = %d\n", B);
//
//    C = A;
//    A = B;
//    B = C;
//
//    printf("<<교환 후의 각 변수의 값>>\n");
//    printf("A 의 값 = %d\n", A);
//    printf("B 의 값 = %d\n", B);
//}



// Question 12
//#include <stdio.h>
//int main()
//{
//    int A, B, C,D;
//    A = 10;
//    B = 20;
//    C = 30;
//    printf("교환 전 : A=%d B=%d C=%d\n", A,B,C);
//
//    D = A;
//    A = C;
//    C = B;
//    B = D;
//    printf("교환 후 : A=%d B=%d C=%d\n", A,B,C);
//}


// 복습문제
// Question 1
//#include <stdio.h>
//int main()
//{
//    int Sum, result, a, b;
//    a = 5;
//    b = 3;
//    Sum = a + b;
//    result = Sum * (a-b);
//    printf("%d\n", result);
//}


// Question 2
//#include <stdio.h>
//int main()
//{
//    char name[] = "홍길동";
//    char num[] = "010-1111-1234";
//    char address[] = "분당구 구미동 25-1번지";
//
//    printf("name : %s\n", name);
//    printf("num : %s\n", num);
//    printf("address : %s\n", address);
//}


// Question 3
//#include <stdio.h>
//int main()
//{
//    char hello[] = "Hello";
//    char lan = 'C';
//    char whom[] = "Programmers!";
//
//    printf("%s\n%c\n%s\n", hello, lan, whom);
//}



// Question 4
//#include <stdio.h>
//int main()
//{
//    int student_ID = 20070001;
//    char name[] = "홍길동";
//    printf("********************\n");
//    printf("*      report      *\n");
//    printf("********************\n");
//    printf("-----------------\n");
//    printf("|   comp engg   |\n");
//    printf("-----------------\n");
//    printf("학번 : %d\n", student_ID);
//    printf("이름 : %s\n", name);
//}
