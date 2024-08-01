// 1. 다음의 실행결과를 예측하고 확인하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    int num1 = 3;
//    int num2 = 4;
//    int result = num1 + num2;   // 7
//
//    printf("덧셈 결과: %d \n", result);
//    printf("%d+%d=%d \n", num1, num2, result);
//    printf("%d와(과) %d의 합은 %d입니다.\n",num1, num2, result);
//    return 0;
//}


// 2. 변수에 키보드로 값을 입력하고 합을 계산하여 출력하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    int result, num1, num2;
//    printf("첫 번째 정수를 입력하세요 : ");
//    scanf("%d", &num1);     // 첫 번째 정수 입력
//    printf("두 번째 정수를 입력하세요 : ");
//    scanf("%d", &num2);     // 두 번째 정수 입력
//    result = num1 + num2;
//    printf("%d + %d = %d \n", num1, num2, result);
//    return 0;
//}


// 3. 변수에 키보드로 값을 입력하고 합을 계산하여 출력하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    int result;
//    int num1, num2, num3;
//
//    printf("세 개의 정수를 입력하세요: ");
//    scanf("%d%d%d", &num1, &num2, &num3);
//
//    result = num1 + num2 + num3;
//    printf("%d + %d + %d = %d \n", num1, num2, num3, result);
//    return 0;
//}


// 문제풀어보기
// Question 1
//#include <stdio.h>
//int main()
//{
//    int width,height,area;
//
//    printf("가로의 길이를 입력하시오 : ");
//    scanf("%d", &width);
//    printf("세로의 길이를 입력하시오 : ");
//    scanf("%d", &height);
//    area = width * height;
//
//    printf("\n=>넓이는 %d 입니다\n", area);
//}


// Question 2
//#include <stdio.h>
//int main()
//{
//    int pencil, pen, num_pencil, num_pen, total_price;
//    pencil = 1000;
//    pen = 2000;
//
//    printf("연필은 몇 개를 구입하시겠습니까? ");
//    scanf("%d", &num_pencil);
//    printf("펜은 몇 개를 구입하시겠습니까? ");
//    scanf("%d", &num_pen);
//    total_price = (pencil * num_pencil) + (pen*num_pen);
//
//    printf("총 가격은 %d 원입니다.\n", total_price);
//}


// Question 3
//#include <stdio.h>
//int main()
//{
//    int kor, eng, math, total, aver;
//    printf("국어 영어 수학 점수를 입력하시오 : ");
//    scanf("%d%d%d", &kor, &eng, &math);   // !! enter와 space모두 끝 문자로본다
//    total = kor + eng + math;
//    aver = total / 3;
//    printf("=>총점은 %d점 평균은 %d점 입니다\n", total, aver);
//
//    char str[20];
//    scanf("%s", &str);
//    gets(str);  // scanf랑 똑같은데 enter만 끝 문자로 본다
//    puts(str);  //printf("%s\n", str):
//}



// Question 4
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    float r, circumference, area;
//    printf("원의 반지름을 입력 하세요 : ");
//    scanf("%f", &r);
//
//    area = M_PI * pow(r, 2);
//    circumference = 2 * M_PI * r;
//
//    printf("\n\n원넓이 : %.2f\n", area);
//    printf("원둘레 : %.2f\n", circumference);
//}



// Question 5
//#include <stdio.h>
//int main()
//{
//    int num_500, num_100, num_50, num_10, result;
//
//    printf("500원 : ");
//    scanf("%d", &num_500);
//    printf("100원 : ");
//    scanf("%d", &num_100);
//
//    printf("50원 : ");
//    scanf("%d", &num_50);
//
//    printf("10원 : ");
//    scanf("%d", &num_10);
//
//    result = (500*num_500) + (100*num_100) + (50*num_50) + (10*num_10);
//    printf("=>동전의 금액 : %d원\n", result);
//}


// Question 6
//#include <stdio.h>
//int main()
//{
//    int input1, minute, second;
//    printf("초를 입력하시오 : ");
//    scanf("%d", &input1);
//
//    minute = input1 / 60;
//    second = input1 % 60;
//    printf("\n=>%d분 %d초 입니다.\n", minute, second);
//}


// Question 7
//#include <stdio.h>
//int main()
//{
//    int input1, hour, minute, second;
//    printf("초를 입력하시오 : ");
//    scanf("%d", &input1);
//
//    minute = input1/60;
//    second = input1%60;
//    hour = minute/60;
//    minute = minute % 60;
//    printf("\n=>%d시간 %d분 %d초 입니다.\n", hour, minute, second);
//
//}


// Question 8
//#include <stdio.h>
//int main()
//{
//    char name[15];
//    int unit, quantity;
//
//    printf("상품명을 입력 하세요 : ");
//    scanf("%s", &name);
//    printf("단가를 입력 하세요 : ");
//    scanf("%d", &unit);
//    printf("수량을 입력 하세요 : ");
//    scanf("%d", &quantity);
//
//    printf("=> %s %d 대의 가격은 %d입니다.\n", name, quantity, quantity*unit);
//}


// Question 9
//#include <stdio.h>
//int main()
//{
//    int unit, price, total_price, discounted;
//    printf("수량을 입력하세요 : ");
//    scanf("%d", &unit);
//    printf("단가를 입력하세요 : ");
//    scanf("%d", &price);
//
//    total_price = unit * price;
//    discounted = total_price * 0.25;
//
//    printf("%-5s%10s%10s\n", "total", "discount", "payment");
//    printf("==============================\n");
//    printf("%-5d%10d%10d\n", total_price, discounted, (total_price-discounted));
//}


// Question 10
//#include <stdio.h>
//int main()
//{
//    float first,second;
//    printf("첫 번째 수를 입력하세요 : ");
//    scanf("%f", &first);
//    printf("두 번째 수를 입력하세요 : ");
//    scanf("%f", &second);
//
//    printf("<<연산결과>>\n");
//    printf("%.1f + %.1f = %.1f\n", first, second, (first+second));
//    printf("%.1f - %.1f = %.1f\n", first, second, (first-second));
//    printf("%.1f * %.1f = %.1f\n", first, second, (first*second));
//    printf("%.1f / %.1f = %.1f\n", first, second, (first/second));
//}



// Question 11
//#include <stdio.h>
//int main()
//{
//    char name[15];
//    int kor, eng, math, total;
//    float aver;
//
//    printf("이름을 입력하세요 : ");
//    scanf("%s", &name);
//    printf("국어점수를 입력하세요 : ");
//    scanf("%d", &kor);
//    printf("영어점수를 입력하세요 : ");
//    scanf("%d", &eng);
//    printf("수학점수를 입력하세요 : ");
//    scanf("%d", &math);
//
//    total = kor + eng + math;
//    aver = total / 3.;
//
//    printf("          **  성적표  **          \n");
//    printf("%7s%7s%7s%7s%7s%7s\n", "name","kor","eng","math","total","aver");
//    printf("=============================================\n");      // 45
//    printf("%7s%7d%7d%7d%7d%7.2f\n", name, kor, eng, math, total, aver);
//}


// Question 12
//#include <stdio.h>
//int main()
//{
//    int a,b,c, total;
//    float aver;
//    printf("3개의 수를 입력 하세요 : ");
//    scanf("%d%d%d", &a,&b,&c);
//
//    total = a + b + c;
//    aver = (float)total / 3;
//
//
//    printf("입력한 값 : %d %d %d\n", a,b,c);
//    printf("합   계 : %d\n", total);
//    printf("평   균 : %.2f\n", aver);
//}
//

// Question 13
//#include <stdio.h>
//int main()
//{
//    char school[15];
//    int num;
//    char name[15];
//
//    printf("소속을 입력하세요 : ");
//    scanf("%s", &school);
//    printf("학번을 입력하세요 : ");
//    scanf("%d", &num);
//    printf("이름을 입력하세요 : ");
//    scanf("%s", &name);
//
//    printf("=>당신은 %s 소속 %d학번 %s 이군요~~\n", school, num, name);
//}


// Question 14
//#include <stdio.h>
//int main()
//{
//    int payment, price;
//    printf("payment : ");
//    scanf("%d", &payment);
//    printf("price : ");
//    scanf("%d", &price);
//
//    printf("\n\n=> VAT : %.0f\n", (price*0.1));
//    printf("=> change : %d\n", (payment-price));
//}



// Question 15
//#include <stdio.h>
//int main()
//{
//    double how_many_years, year;
//    double total;
//
//    year = 60 * 60 * 24 * 365;
//
//    printf("몇 년 ? ");
//    scanf("%lf", &how_many_years);  // double 인풋 받을때 lf 써야돰
//    total = how_many_years * year;
//    printf("%.0f년은 %.0f 초입니다\n", how_many_years, total);    // double prinf 할때는 그냥 f쓰면됨
//}



// Question 16
//#include <stdio.h>
//int main()
//{
//    int basic, per, electricity, how_much;
//    basic = 1390;
//    per = 400;
//    printf("몇Kw를 사용하셨습니까? : ");
//    scanf("%d", &how_much);
//    electricity = basic + (per*how_much);
//    printf("당신이 사용한 %dKw의 요금은 %d 원입니다\n", how_much, electricity);
//
//}
