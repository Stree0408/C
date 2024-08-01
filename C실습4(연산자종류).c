// 1. 다음 연산결과를 예측하여 적어보고 실행하여 결과를 확인하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    int num1 = 10;
//    int num2 = num1-- + 2;  // 12
//    num2++;     // 13
//    printf("num1: %d \n", num1);    // 9
//    printf("num2: %d \n", num2);    // 13
//    return 0;
//}



// 2. 다음의 연산결과를 살펴 봅시다.
//#include<stdio.h>
//int main()
//{
//    int a1, a2, a3, a4;
//    a1=a2=a3=a4=0;
//    a1 = a1+1;  // 1
//    a2++ ;  // 1
//    a3 = ++a2 + a1;
//    a2 += a3++ ;
//    a4 = a1 + a2 + a3;
//
//    printf("%d %d %d %d\n", a1,a2,a3,a4);   // 1 5 4 10
//}



// 3. 다음 연산결과를 예측하여 적어보고 실행하여 결과를 확인하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    int x = 1;
//    printf("x=%d\n", x++);
//    printf("x=%d\n", x++);
//    printf("x=%d\n", ++x);
//    printf("x=%d\n", x--);
//    printf("x=%d\n", x--);
//    printf("x=%d\n", --x);
//}


// 4. 다음 연산결과를 예측하여 적어보고 실행하여 결과를 확인하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    int a,b,c,d,e,f,g,h;
//    a=b=c=d=e=f=g=h=4;
//    a++; ++b; c--; --d;
//    g = e++ + --f;
//
//    printf("a=%d b=%d\n", a,b);
//    printf("c=%d d=%d\n", c,d);
//    printf("e=%d f=%d\n", e,f);
//    printf("g=%d \n", g);
//    printf("h=%d \n", h++);
//    printf("h=%d\n", h);
//}


// 5. 다음 연산결과를 예측하여 적어보고 실행하여 결과를 확인하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    int k1,k2,k3,s;
//    k1=10, k2=20, k3=30;
//    k1+=3;
//    k2 -= 4;
//    k3*=2;
//
//    s = (++k1 + k2--) * k3;
//
//    printf("k1=%d \n", k1);
//    printf("k2=%d \n", k2);
//    printf("k3=%d \n", k3);
//    printf("s=%d \n", s);
//}


// 6. 정수의 1의 자리를 반올림하여 봅시다.
//#include<stdio.h>
//int main()
//{
//    int num;
//    printf("정수 :");
//    scanf("%d", &num);
//    num = ((num+5)/10)*10;
//
//    printf("%d\n", num);
//}



// 7. 정수1의 자리를 버림하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    int num;
//    printf("정수 : ");
//    scanf("%d", &num);
//    num = ((num) / 10) * 10;
//
//    printf("=>%d\n", num);
//}



// 8. 정수 10의 자리를 올림 하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    int num;
//    printf("정수 : ");
//    scanf("%d", &num);
//    num = ((num+90) / 100) * 100;
//    printf("=>%d\n", num);
//}




// 9. 소수 2번째 자리를 버림하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    float n = 123.45678;
//    n = (int)(n*10) / 10.0;
//    printf("\n %.1f\n", n);
//}



// 10. 소수 1번째 자리를 올림 하여 봅시다.
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    float n=123.45678;
//    int k;
//
//    n = (float)((int)(n+0.9));
//
//    printf("\n %f", n);     // 124.000000
//}




// *** 관계 논리 연산자
// 1. 다음 프로그램의 결과값(참, 거짓)을 알아 봅시다.
//#include <stdio.h>
//int main()
//{
//    int a=0, b=1, c=2, d=3;
//    int n1,n2,n3,n4;
//    n1= a>b;    // 0
//    n2=c<d && b++;  // 1
//    n3 = 2 < !a + c;    // 1
//    n4 = d >= b *c;     // 1
//    printf("n1=%d n2=%d n3=%d n4=%d\n", n1, n2, n3, n4);
////    printf("%d", b);
//}




// 2. 다음 프로그램의 결과 값(참, 거짓)을 알아 봅시다.
//#include <stdio.h>
//int main()
//{
//    int a=5, b=7, re1, re2;
//    re1 = a+4 >=12 || a*3 ==10;     // 0
//    re2=b - 5 < 3 && a * 5 <= b + 20;   // 1
//    printf("re1=%d re2=%d \n", re1, re2);
//}



// 3. 다음 프로그램의 결과값(참, 거짓)을 알아 봅시다.
//#include <stdio.h>
//int main()
//{
//    int num1 = 10;
//    int num2 = 12;
//    int result1, result2, result3;
//    result1 = (num1==10 && num2==12);   // 1
//    result2 = (num1<12 || num2>12);     // 1
//    result3 = (!num1);      // 0 --> 값이 있기만 하면 true(음수도), 0일때만 False
//    printf("result1: %d \n", result1);
//    printf("result2: %d \n", result2);
//    printf("result3: %d \n", result3);
//    return 0;
//}



// *** ASCII 코드
// * 대문자 범위('A'~'Z'): 65~90
// * 소문자 범위('a'~'z'): 97~122
// * 숫자 범위('0'~'9'): 48~57


// 1. 다음 연산결과를 예측하여 적어보고 실행하여 결과를 확인하여 봅시다.
//#include <stdio.h>
//int main()
//{
////    printf("%d", '\n');     // 프로그램에서 ascii code 알아내는 방법
//    char m,n;
//    m = 74-90/10;   // 65
//    putchar(m++);   // 'A'
//    n=m;
//    putchar(--n);   // 'A'
//}


// 2. 다음 연산결과를 예측하여 적어보고 실행하여 결과를 확인하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    char ch1='A', ch2=65;
//    int ch3='Z', ch4=90;
//
//    printf("%c %d \n", ch1, ch1);   // 'A' 65
//    printf("%c %d \n", ch2, ch2);   // 'A' 65
//    printf("%c %d \n", ch3, ch3);   // 'Z' 90
//    printf("%c %d \n", ch4, ch4);   // 'Z' 90
//}


// 3. 다음 연산결과를 예측하여 적어보고 실행하여 결과를 확인하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    char m1,m2,m3,m4,m5,m6;
//    m1='X'; m2=89; m3='\n';
//    m4='\a'; m5=m3+32; m6='A';
//    printf("%c%c%c", m1,m2,m3);
//    printf("%c%c%c", m4,m5,m6);
//}



// 4. 다음 연산결과를 예측하여 적어보고 실행하여 결과를 확인하여 봅시다.
// (문자열의 +는 한칸 이동)
//#include <stdio.h>
//#include<string.h>
//int main()
//{
//    char m[4];
//    strcpy(m,"ABC");
//    puts("ABC");
//    puts("DEF");
//    puts(m);    // ABC
//    puts("DEF"+1);  // EF
//    puts(m+1);      // BC
//}



// *** 나열형 연산자
// 1. 나열형 상수가 정수 값에 대한 별명임을 알아봅시다.
//#include <stdio.h>
//int main()
//{
////    const int n=10;
////    printf("%d", n);
//
//    enum KT{a=101,b,c=50,d,e,f,g,h};
//    printf("%d\n", d);
//}


// 2. 나열형 상수 값을 직접 지정하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    enum MT{one=1, two, three, five=5, six, ten=10};
//    printf("%d\n",six);     // 6
//}


// 3. 다음 프로그램의 실행결과를 기재하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    enum MT{one=1, two, three, five=5, six, ten=10};
//    enum MT M;  // MT type의 M
//    M = three;
//    printf("%d\n", M);
//}



// 숙제
// Question 1
//#include <stdio.h>
//int main()
//{
//    int comp, C, eng, math, total;
//    float aver;
//    printf("컴퓨터개론의 점수를 입력하시오 : ");
//    scanf("%d", &comp);
//    printf("C프로그래밍언어의 점수를 입력하시오 : ");
//    scanf("%d", &C);
//    printf("영어의 점수를 입력하시오 : ");
//    scanf("%d", &eng);
//    printf("일반수학의 점수를 입력하시오 : ");
//    scanf("%d", &math);
//    total = comp + C + eng + math;
//
//    aver = total / 4;
//    printf("=>총점은 %d점\n\t평균점수는 %.1f점 입니다.\n", total, aver);
//}



// Question 2 - 0부터 5까지의 제곱과 세제곱 값을 계산하여 다음과 같이 출력하는 프로그램을 작성하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    enum integer{a,b,c,d,e};
//    printf("%10s%10s%10s\n", "integer", "square", "cubic");
//    printf("==============================\n");
//    printf("%10d%10d%10d\n", a, a*a, a*a*a);
//    printf("%10d%10d%10d\n", b, b*b, b*b*b);
//    printf("%10d%10d%10d\n", c, c*c, c*c*c);
//    printf("%10d%10d%10d\n", d, d*d, d*d*d);
//    printf("%10d%10d%10d\n", e, e*e, e*e*e);
//}



// Question 3
//#include <stdio.h>
//int main()
//{
//    int num, thousand, hundred, tenth, one;
//    printf("정수를 입력하시오 : ");
//    scanf("%d", &num);
//
//    thousand = num / 1000;
//    hundred = (num%1000) / 100;
//    tenth = ((num%1000) % 100) / 10;
//    one = num % 10;
//
//    printf("천의자리 : %d\n",thousand);
//    printf("백의자리 : %d\n",hundred);
//    printf("십의자리 : %d\n",tenth);
//    printf("일의자리 : %d\n",one);
//}


// Question 4
//#include <stdio.h>
//int main()
//{
//    int num, million, thousand, hundred, tenth, one, Sum;
//    printf("정수를 입력하시오 : ");
//    scanf("%d", &num);
//
//    million = num / 10000;
//    thousand = (num % 10000) / 1000;
//    hundred = (num% 1000) / 100;
//    tenth = (num%1000)%100 / 10;
//    one = num % 10;
//
//    printf("만의자리 : %d\n", million);
//    printf("천의자리 : %d\n",thousand);
//    printf("백의자리 : %d\n",hundred);
//    printf("십의자리 : %d\n",tenth);
//    printf("일의자리 : %d\n",one);
//    Sum = million + thousand + hundred + tenth + one;
//    printf("합=%d\n", Sum);
//}


// Question 5
//#include <stdio.h>
//int main()
//{
//    char word;
//    printf("문자를 입력 하세요 : ");
//    scanf("%c", &word);
//    printf("=>%c의 ASCII 코드 값은 %d입니다\n", word, word);
//}


// Question 6
//#include <stdio.h>
//int main()
//{
//    char word[10];
//    printf("단어를 입력 하세요 : ");
//    scanf("%s", word);
//    puts(word);
//    puts(word+1);
//    puts(word+2);
//    puts(word+3);
//    puts(word+4);
//}
