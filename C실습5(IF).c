// control + i --> 인덴트 정리

// 1. If 문에 대하여 알아봅시다.
//#include <stdio.h>
//int main()
//{
//    int num;
//    num = -2;
//    if(num < 0) printf("음수");
//    printf("입니다.");
//}


// 2. if 문에서 block의 의미를 알아 봅시다.
//#include <stdio.h>
//int main()
//{
//    int num1=2, num2=3;
//    if(num1 > num2)
//    {
//        printf("대한");
//        printf("민국");
//    }
//    puts("호호");
//}


// 3. if문에서 block의 의미를 알아 봅시다.
//#include <stdio.h>
//int main()
//{
//    int num1=2, num2=3;
//    if (num1 > num2)
//    printf("대한");
//    printf("민국");
//    puts("호호");
//}


// 4. if~else 문에 대하여 알아봅시다.
//#include<stdio.h>
//int main()
//{
//    int score = 40;
//    if (score>=60) puts("합격");
//    else puts("불합격");
//    puts("안녕");
//}
// 불합격
// 안녕


// 5. if~else 문에 대하여 알아봅시다.
//#include<stdio.h>
//int main()
//{
//    int num1 = 2, num2=3, max=0;
//    if (num1>num2){
//        puts("num1 이 크다");
//        max = num1;
//    }
//    else{
//        puts("num2가 크거나 같다");
//        max = num2;
//    }
//    printf("큰 값=%d\n", max);
//}
// num2가 크거나 같다
// 큰 값=3


// 6. if~else 문에 대하여 알아봅시다.
//#include<stdio.h>
//int main()
//{
//    if(1){
//        puts("참 입니다~");
//    }
//    if(0){
//        puts("거짓입니다~");
//    }
//    else {
//        puts("if~else & false");
//    }
//}
//


// 7. if속에 if문을 삽입하여 사용하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    int num=120;
//    if(num<0)
//    {
//        puts("0 미만");
//    }
//    else
//    {
//        if(num<100)
//        {
//            puts("0이상 100 미만");
//        }
//        else
//        {
//            puts("100 이상");
//        }
//    }
//}
// 100 이상




// 8. if~else와 유사한 조건연산자(삼향연산자)를 사용하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    int num1=50, num2 = 100;
//    int big, diff;
//
//    big = (num1> num2)? num1:num2;
//    printf("%d", big);
//
//    diff = (num1>num2)? num1-num2: num2-num1;
//    printf("%d", diff);
//}



// *** 관계연산자를 이해하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    int x=1;
//    int y=2;
//    int z=3;
//    if(x==y) printf("x와 y는 같습니다\n");    // 0
//    if(x!=y) printf("x와 y는 같지 않습니다\n");     // 1
//    if(x>y) printf("x는 y보다 큽니다\n");     // 0
//    if(x<y) printf("x는 y보다 작습니다\n");    // 1
//    if(x>=y) printf("x는 y보다 크거나 같습니다\n");   // 0
//    if(x<=y) printf("x는 y보다 작거나 같습니다\n");   // 1
//}


// ** 논리연산자를 이해하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    int x = 5;
//    int y = 2;
//
//    if(x>0 && x<10)
//    {
//        printf("x는 0보다 크고 10보다 작다\n");
//    }
//    if(x<0 || y==2)
//    {
//        printf("x는 0보다 작거나 y는 2이다\n");
//    }
//    if (!(x > y))
//    {
//        printf("x는 y보다 크지 않다\n");
//    }
//}


// 1. if문에 논리 연산자 && 를 사용하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    int score = 82;
//    if( score>=80 && score<=89) printf("B학점입니다.");
//    if(!(score>=80 && score<=89)) printf("B학점이 아닙니다.");
//}



// 2. if문에 논리 연산자 !를 사용하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    int score = 0;
//    if(!score)
//        printf("0점입니다.");
//}



// 3. 다음 프로그램의 결과를 예측하여 보고 실행하여 결과를 확인하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    int kor = 95;
//    int eng = 80;
//    int total,average;
//
//    total=kor+eng;
//    average=total/2;
////        printf("%d", average);
//    if (average>=80)
//        printf("합격\n");
//    else
//        printf("불합격\n");
//}



// 4. 다음 프로그램의 결과를 예측하여 보고 실행하여 결과를 확인하여 봅시다.(다중 if)
//#include <stdio.h>
//int main()
//{
//    int kor=95;
//    int eng=80;
//    int tot, av;
//    tot =kor +eng;
//    av = tot/2;
//
//    if(av>=90)  printf("A학점\n");
//    else if(av>=80)     printf("B학점\n");
//    else if(av>=70)     printf("C학점\n");
//    else if(av>=60)     printf("D학점\n");
//    else         printf("F학점\n");
//}



// 5. 다음 프로그램의 실행결과를 예측하여 보고 실행하여 결과를 확인하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    int num_a=100, num_b=200;
//    printf("큰값=%d\n", (num_a>num_b) ? num_a:num_b);   // 200
//}



// 6. 다음 프로그램의 실행결과를 예측하여 보고 실행하여 결과를 확인하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    char w_m;
//    w_m = 'm';
//    printf("성별= %s\n", (w_m=='m')? "남자" : "여자");    // 남자
//}



// 숙제
// Question 3 (삼향연산자 사용)
//#include <stdio.h>
//int main()
//{
//    int a,b;
//    printf("수를 입력 하세요 : ");
//    scanf("%d", &a);
//    printf("수를 입력 하세요 : ");
//    scanf("%d", &b);
//
//    printf("=>큰 수는 %d입니다.\n", (a > b)? a:b);
//}



// Question 6 (삼향연산자 사용)
//#include <stdio.h>
//int main()
//{
//    int kor, eng, math,total;
//    float aver;
//    printf("국어 영어 수학 점수를 입력 하세요 : ");
//    scanf("%d%d%d", &kor, &eng, &math);
//
//    total = kor + eng + math;
//    aver = total / 3.;
//    printf("%s\n", (aver >= 60)? "=>합격입니다":"=>불합격입니다 노력 하세요 ~");
//}



// Question 9
//#include <stdio.h>
//int main()
//{
//    int first, second,result;
//    char operator;
//    printf("첫번째수    :  ");
//    scanf("%d", &first);  // 709078enter
//    printf("연산자(+ - * /) : ");
//    //getchar();    // 키보드 버퍼에서 읽어버림
//    scanf(" %c", &operator);
//    printf("두번째수    :  ");
//    scanf("%d", &second);
//
//    if(operator=='+')
//    {
//        result = first + second;
//    }
//    else if (operator=='-')
//    {
//        result = first - second;
//    }
//    else if (operator=='*')
//    {
//        result = first * second;
//    }
//    else if (operator=='/')
//    {
//        result = first / second;
//    }
//    printf("=>%d %c %d = %d\n", first, operator, second, result);
//}



// Question 11
//#include <stdio.h>
//int main()
//{
//    int year;
//    printf("년도를 입력 하세요 : ");
//    scanf("%d", &year);
//
//    if ((year % 4==0) && (year % 100 != 0 || year % 400 ==0))
//        printf("%d년은 윤년입니다.\n", year);
//    else
//        printf("%d년은 평년입니다.\n", year);
//}



// Question 13
//#include <stdio.h>
//int main()
//{
//    int amount, total;
//    printf("사용량을 입력 하세요 : ");
//    scanf("%d", &amount);
//    if(amount<=50)
//        total = amount * 34;
//    else if (51<=amount && amount<=100)
//        total = ((50*34) + (amount-50) * 81);
//    else
//        total = ( (50*34)+ (50*81) + ((amount-100) * 122) );
//        printf("=>전기요금 : %d 원\n", total);
//}



// Question 14
//#include <stdio.h>
//int main()
//{
//    char input;
//    printf("영문자를 입력하세요 : ");
//    scanf("%c", &input);
//
//    if(65<=input && input<=90)
//        printf("대문자입니다\n");
//    else if(97<=input && input<=122)
//        printf("소문자입니다\n");
//}



// Question 15
//#include <stdio.h>
//int main()
//{
//    char input;
//    printf("영문자를 입력하세요 : ");
//    scanf("%c", &input);
//
//    if(65<=input && input<=90)
//        printf("%c\n", input+32);
//    else if(97<=input && input<=122)
//        printf("%c\n", input-32);
//}



// Question 16
//#include <stdio.h>
//int main()
//{
//    char input;
//    printf("문자를 입력하세요 : ");
//    scanf("%c", &input);
//
//    if ((65<=input && input<=90) || (97<=input && input<=122))
//        printf("=>문자 입니다\n");
//    else if(48<=input && input<=57)
//        printf("=> 숫자 입니다\n");
//    else
//        printf("=> 특수문자 입니다\n");
//}



// Question 17
//#include <stdio.h>
//int main()
//{
//    int first, second, third, tmp;
//    printf("3 개의 수 : ");
//    scanf("%d%d%d", &first, &second, &third);
//
//    if(second>first)
//    {
//        tmp = second;
//        second = first;
//        first = tmp;
//    }
//    if(third>first)
//    {
//        tmp = third;
//        third = first;
//        first = tmp;
//    }
//    if (third>second)
//    {
//        tmp = third;
//        third = second;
//        second = tmp;
//    }
//    printf("=> 큰 순서대로 출력 : %d %d %d\n", first, second, third);
//}
//
//
//


// Question 18
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    int year, born, age, ddi;
//    char str[20];
//    printf("올해의 년도를 입력하시오 : ");
//    scanf("%d", &year);
//    printf("태어난 년도를 입력하시오 : ");
//    scanf("%d", &born);
//
//    age = year - born + 1;
//    ddi = (born%12);
//    if (ddi%12==0)
//        strcpy(str, "원숭이");
//    if (ddi%12==1)
//        strcpy(str, "닭");
//    if (ddi%12==2)
//        strcpy(str, "개");
//    if (ddi%12==3)
//        strcpy(str, "돼지");
//    if (ddi%12==4)
//        strcpy(str, "쥐");
//    if (ddi%12==5)
//        strcpy(str, "소");
//    if (ddi%12==6)
//        strcpy(str, "호랑이");
//    if (ddi%12==7)
//        strcpy(str, "토끼");
//    if (ddi%12==8)
//        strcpy(str, "용");
//    if (ddi%12==9)
//        strcpy(str, "뱀");
//    if (ddi%12==10)
//        strcpy(str, "말");
//    if (ddi%12==11)
//        strcpy(str, "양");
//    printf("=>%d살이고 %s띠입니다.\n", age, str);
//}
//
//
//
// Question 19
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int 가로,세로, 밑변,높이;
//    float 반지름;
//    char decide;
//    printf("어떤 도형의 면적을 구할까요?(R-사각형,T-삼각형,C-원 : ");
//    scanf("%c", &decide);
//    if(decide=='R')
//    {
// int h,w; {} 안에서 선언된 변수는 local 변수이다
//        printf("가로 : ");
//        scanf("%d", &가로);
//        printf("세로 : ");
//        scanf("%d", &세로);
//        printf("=> 사각형의 면적은 %d입니다\n", 가로*세로);
//    }
//    else if (decide=='T')
//    {
// int h,w;
//        printf("밑변 : ");
//        scanf("%d", &밑변);
//        printf("높이 : ");
//        scanf("%d", &높이);
//        printf("=> 삼각형의 면적은 %d입니다\n", (밑변*높이)/2);
//    }
//    else if (decide=='C')
//    {
//        printf("반지름 : ");
//        scanf("%f", &반지름);
//        printf("=> 원의 넓이는 %.2f입니다\n", M_PI*(반지름*반지름));
//    }
//}



// Question 20
//#include <stdio.h>
//int main()
//{
//    int age, height, weight;
//    float result;
//    printf("나이를 입력 하세요 : ");
//    scanf("%d", &age);
//    printf("키를 입력 하세요 : ");
//    scanf("%d", &height);
//    printf("체중을 입력 하세요 : ");
//    scanf("%d", &weight);
//
//    result = weight / (((float)height/100)*((float)height/100));
//    if (age>=20 && age<=29)
//    {
//        if (result<=17.9)
//            printf("=>당신은 저체중입니다\n");
//        if (result>=18 && result<=23)
//            printf("=>당신은 표준체중입니다\n");
//        if (result>=24 && result<=30)
//            printf("=>당신은 과체중입니다\n");
//        if (result>=30 )
//            printf("=>당신은 비만입니다\n");
//    }
//    else if(age>=30 && age<=39)
//    {
//        if (result<=18.4)
//            printf("=>당신은 저체중입니다\n");
//        if (result>=18.5 && result<=24)
//            printf("=>당신은 표준체중입니다\n");
//        if (result>=25 && result<=30)
//            printf("=>당신은 과체중입니다\n");
//        if (result>=30 )
//            printf("=>당신은 비만입니다\n");
//    }
//}



// Question 21
//#include <stdio.h>
//int main()
//{
//    int a,b,c, tmp;
//    printf("숫자 3개를 넣으세요 : ");
//    scanf("%d%d%d", &a, &b, &c);
//
//    if  (b>a)
//    {
//        tmp = b;
//        b = a;
//        a = tmp;
//    }
//    if  (c>a)
//    {
//        tmp = c;
//        c = a;
//        a = tmp;
//    }
//    if ((b+c)>a)
//    {
//        printf("=>삼각형의 결정조건이 만족합니다.\n");
//    }
//    else
//        printf("=>삼각형의 결정조건이 되지 않습니다.\n");
//
//}



// Question 22
//#include <stdio.h>
//int main()
//{
//    int a,b,c,d,e,f,max;
//    printf("정수를 입력 하세요 : ");
//    scanf("%d", &a);
//    max = a;
//
//    printf("정수를 입력 하세요 : ");
//    scanf("%d", &b);
//    if (b>max)
//        max = b;
//
//    printf("정수를 입력 하세요 : ");
//    scanf("%d", &c);
//    if (c>max)
//        max = c;
//
//    printf("정수를 입력 하세요 : ");
//    scanf("%d", &d);
//    if (d>max)
//        max = d;
//
//    printf("정수를 입력 하세요 : ");
//    scanf("%d", &e);
//    if (e>max)
//        max = e;
//
//    printf("정수를 입력 하세요 : ");
//    scanf("%d", &f);
//    if (f>max)
//        max = f;
//    printf("=>가장 큰 값은 %d입니다\n", max);
//}



// Question 23
//#include <stdio.h>
//int main()
//{
//    int a, min, smin;
//
//    printf("정수를 입력 하세요 : ");
//    scanf("%d", &a);
//    min = a;
//
//    printf("정수를 입력 하세요 : ");
//    scanf("%d", &a);
//    if (a<min)
//    {
//        smin = min;
//        min = a;
//    }
//    else
//        smin = a;
//
//
//    printf("정수를 입력 하세요 : ");
//    scanf("%d", &a);
//    if (a<min)
//    {
//        smin = min;
//        min = a;
//    }
//    else if (a<smin)
//    {
//        smin = a;
//    }
//
//    printf("정수를 입력 하세요 : ");
//    scanf("%d", &a);
//    if (a<min)
//    {
//        smin = min;
//        min = a;
//    }
//    else if (a<smin)
//    {
//        smin = a;
//    }
//
//    printf("정수를 입력 하세요 : ");
//    scanf("%d", &a);
//    if (a<min)
//    {
//        smin = min;
//        min = a;
//    }
//    else if (a<smin)
//    {
//        smin = a;
//    }
//    printf("=>두 번째로 작은 수는 %d 입니다\n", smin);
//}



// Question 24
//#include <stdio.h>
//int main()
//{
//    int date, num;
//    printf("오늘 날짜는 ?    : ");
//    scanf("%d", &date);
//
//    printf("차량 끝 번호는    : ");
//    scanf("%d", &num);
//    
//
//    if ((date%2==0 && num%2==0) || (date%2!=0 && num%2!=0))
//        printf("=> 운행이 가능합니다.\n");
//    else
//        printf("=> 운행이 불가능합니다.\n");
//}



// Question 25
//#include <stdio.h>
//int main()
//{
//    int day,month,year,Sum;
//    printf("생년월일 : ");
//    scanf("%d%d%d", &day,&month,&year);
//    Sum = day + month + year;
//
//    if (Sum % 2 ==0)
//        printf("당신은 대박 ~~\n");
//    else
//        printf("당신은 그럭저럭 ~~\n");
//}
