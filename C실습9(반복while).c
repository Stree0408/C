// 1. while 문을 이해하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    int dan=0, num=1;
//    printf("몇 단? ");
//    scanf("%d", &dan);
//
//    while(num<10)
//    {
//        printf("%dx%d=%d \n", dan, num, dan*num);
//        num++;
//    }
//    return 0;
//}



// 2. do~ while문을 이해하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    int dan=0, num=1;
//    printf("몇 단? ");
//    scanf("%d", &dan);
//
//    do
//    {
//        printf("%dx%d=%d \n", dan, num, dan*num);
//        num++;
//    }while(num<10);
//    return 0;
//}




// 숙제
// Question 1
//#include <stdio.h>
//int main()
//{
//    int i=0;
//    while (i<3)
//        printf("반복중입니다 \n");
//    i++;
//}
//// 무한루프



// Question 2
//#include <stdio.h>
//int main()
//{
//    int cur=2;
//    int is=0;
//
//    while(cur<10)
//    {
//        is=1;
//        while(is<10)
//        {
//            printf("%dx%d=%d \n", cur, is, cur*is);
//            is++;
//        }
//        cur++;
//        printf("\n");
//    }
//    return 0;
//}
//// 2x1=2
//// 2x2=4
//// ...
//// 2x9=18
//// ...
//// 9x9=81




// Question 3
//#include <stdio.h>
//int main()
//{
//    int i=1, j;
//    while (i<=6)
//    {
//        for (j=1; j<=6; j++)
//        {
//            if (i+j==6) printf("%d + %d = %d\n", i,j,i+j);
//        }
//        i++;
//    }
//}



// Question 4
//#include <stdio.h>
//int main()
//{
//    int i=1, sum=0;
//    while (i<=10)
//    {
//        sum += i; i++;
//    }
//    printf("합 = %d\n", sum);
//}



// Question 5
//#include <stdio.h>
//int main()
//{
//    int i=1, sum=0;
//    do
//    {
//        sum+=i; i++;
//    }while (i<=10);
//    printf("합 = %d\n", sum);
//}



// Question 6
//#include <stdio.h>
//int main()
//{
//    int mom=38, juno=1;
//    while ((juno*6+2) <= mom)
//    {
//        juno++;
//    }
//    printf("준오나이 : %d살\n", juno-1);
//}


// Question 7
//#include <stdio.h>
//int main()
//{
//    int juno=24, suyeon=6, min=0 ;
//    while(juno>=suyeon)
//    {
//        printf("%d분 뒤 출발지점으로부터 이동된 거리 준오=%dKm   수연=%dKm\n", min, juno, suyeon);
//        juno += 2;
//        suyeon += 3;
//        min++;
//    }
//}
 

// Question 8
//#include <stdio.h>
//int main()
//{
//    int i=1, sum=0, input1;
//    printf("정수 5개를 입력 하세요 : ");
//    while (i<=5)
//    {
//        scanf("%d", &input1);
//        sum += input1;
//        i++;
//    }
//    printf("합은 %d입니다\n", sum);
//}



// Question 9
//#include <stdio.h>
//int main()
//{
//    int i=1;
//    printf("=================\n");    // 17개
//    printf("%5s%10s\n", "n", "square");
//    printf("=================\n");
//
//    while(i<=10)
//    {
//        printf("%5d%10d\n", i, i*i);
//        i++;
//    }
//}



// Question 10
//#include <stdio.h>
//int main()
//{
//    int num, cnt=0, sum=0;
//    float aver;
//    while (1)
//    {
//        printf("숫자를 입력하세요 : ");
//        scanf("%d", &num);
//        if (num==-1) break;
//        cnt += 1; sum += num;
//    }
//    aver = sum / (float)cnt;
//    printf("%d개의 숫자를 입력하셨군요~\n", cnt);
//    printf("합=%d  평균=%.2f입니다\n", sum, aver);
//}



// Question 11
//#include <stdio.h>
//int main()
//{
//    int kor, math, eng;
//    while (1)
//    {
//        printf("국어점수 : ");
//        scanf("%d", &kor);
//        if (kor>100 || kor<0)
//        {
//            printf("0~100 사이의 값을 다시 입력하세요\n");
//        }
//        else break;
//    }
//
//    while (1)
//    {
//        printf("영어점수 : ");
//        scanf("%d", &eng);
//        if (eng>100 || eng<0)
//        {
//            printf("0~100 사이의 값을 다시 입력하세요\n");
//        }
//        else break;
//    }
//
//    while (1)
//    {
//        printf("수학점수 : ");
//        scanf("%d", &math);
//        if (math>100 || math<0)
//        {
//            printf("0~100 사이의 값을 다시 입력하세요\n");
//        }
//        else break;
//    }
//    printf("국어 : %d  영어 : %d  수학 : %d\n", kor, eng, math);
//    printf("총점 %d  평균 : %d\n", kor+eng+math, (kor+eng+math)/3);
//}



// Question 12
//#include <stdio.h>
//int main()
//{
//    int second=0;
//    float A=3, B=7;     // 0.3과 0.2를 더할거니까 --> float로 선언
//    while(B>A)
//    {
//        A += 0.3; B += 0.2;
//        second++;
//    }
//    printf("=> %d초\n", second);
//}



// Question 13
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//    int i=1, rnd, guess;
//    srand((unsigned)time(NULL)); // 난수의 초기화
//    rnd = rand()%100+1;  // 1~100까지의 난수를 발생
////    printf("%d\n", rnd);
//    while (i<=6)
//    {
//        printf("1과 100사이의 값을 입력하세요 :");
//        scanf("%d", &guess);
//        if (guess>rnd) printf("더 작은 수를 입력하세요\n");
//        else if (guess<rnd) printf("더 큰 수를 입력하세요\n");
//        else
//        {
//            printf("당신은 감이 뛰어난 천재!!!\n", rnd);
//            break;
//        }
//        i++;
//    }
//    printf("ㅉㅉ 안됐군요 답은 %d입니다\n", rnd);
//}



// Question 14
//#include <stdio.h>
//int main()
//{
//    int determine=1, num, unit=1, tmp, tmp2;
//    scanf("%d", &num);
//    tmp = num;
//    while (tmp>=9)
//    {
//        tmp/=10;
//        unit *= 10;
//    }
////    printf("%d\n", unit);
//    tmp2= num;
//    while (tmp2>=9)     // 여기 레인지를 어떻게 잡아야됨?
//    {
//        if ((tmp2/unit) == (tmp2%10))
//        {
//            tmp2 %= unit;
//            tmp2 /= 10;
//            unit /= 100;
//        }
//        else
//        {
//            determine=0; break;
//        }
//    }
//    if (determine==1) printf("%d는 회문수 입니다.\n", num);
//    else printf("%d는 회문수가 아닙니다.\n", num);
//}


// or


//#include <stdio.h>
//int main()
//{
//    int num, unit=1, tmp, tmp2;
//    scanf("%d", &num);
//    tmp = num;
//    while (tmp>=9)
//    {
//        tmp/=10;
//        unit *= 10;
//    }
////    printf("%d\n", unit);
//    tmp2= num;
//    while (tmp2>=9)     // 여기 레인지를 어떻게 잡아야됨?
//    {
//        if ((tmp2/unit) == (tmp2%10))
//        {
//            tmp2 %= unit;
//            tmp2 /= 10;
//            unit /= 100;
//        }
//        else
//        {
//            break;
//        }
//    }
//    if (tmp2<=9) printf("%d는 회문수 입니다.\n", num);
//    else printf("%d는 회문수가 아닙니다.\n", num);
//}


//
//#include <stdio.h>
//int main()
//{
//    int i=2;
//    i = i/10;
//    printf("%d\n",i);
//}



// or




//#include <stdio.h>
//int main()
//{
//    int num, unit=1, tmp, tmp2;
//    scanf("%d", &num);
//    tmp = num;
//    while (tmp>=9)
//    {
//        tmp/=10;
//        unit *= 10;
//    }
//    //    printf("%d\n", unit);
//    tmp2= num;
//    while (tmp2>9)
//    {
//        if ((tmp2/unit) != (tmp2%10))
//        {
//            break;
//        }
//        tmp2 %= unit;
//        tmp2 /= 10;
//        unit /= 100;
//    }
//    if (tmp2<10) printf("%d는 회문수 입니다.\n", num);
//    else printf("%d는 회문수가 아닙니다.\n", num);
//}



// Question 15
//#include <stdio.h>
//int main()
//{
//    int i=1, first=0, second=1, third;
//    while (i<=10)
//    {
//        third = first + second;
//        printf("%d\n", third);
//
//
//        first = second;
//        second = third;
//        i++;
//    }
////    printf("10번째 수: %d\n",third);
//}


// or

// 이거
//#include <stdio.h>
//int main()
//{
//    int i=1, first=0, second=0, third=1;
//    while (i<10)
//    {
////        printf("%d\n", third);
//
//        first = second;
//        second = third;
//        third = first + second;
//
//        i++;
//    }
//    printf("10번째 수: %d\n",third);
//}


// Question 16
//#include <stdio.h>
//int main()
//{
//    int i=100, hundred, ten, one;
//    while (i<=999)
//    {
//        hundred = i/100;
//        ten = (i%100) / 10;
//        one = i%10;
//        printf("%d+%d+%d=%d\n", hundred, ten, one, hundred+ten+one);
//        i++;
//    }
//}



// Question 17
//#include <stdio.h>
//int main()
//{
//    int distance, i=1, cost=3000;
//    printf("주행거리 입력 : ");
//    scanf("%d", &distance);
//
//    while (i<=distance)
//    {
//        if (i<2000) cost+=0;
//        if (i>=2000 && i%400==0) cost+=600;
//        i++;
//    }
//    printf("요금은 %d 원\n",cost);
//}




// Question 18
//#include <stdio.h>
//int main()
//{
//    int money, i=100000, cnt=0;
//    printf("얼마를 인출 하시겠습니까 ? ");
//    scanf("%d", &money);
//
//    while(i>=1000)
//    {
//        printf("%d 만원권 %d 매\n", i, money/i);
//        cnt ++;
//        money -= i*(money/i);
//        if (cnt%2!=0) i/=2;
//        else i/=5;
//    }
//}



// Question 19
//#include <stdio.h>
//int main()
//{
//    int num, i=1, odd_s=0, even_s=0;
//    printf("수를 입력하세요 : ");
//    scanf("%d", &num);
//
//    while (i<=500)
//    {
//        if (i%2==0) even_s+=i;
//        else odd_s+=i;
//        i++;
//    }
//    printf("1부터 %d 까지의 홀수의 합은 %d 짝수의 합은 %d\n", num, odd_s, even_s);
//}




// Question 20
//#include <stdio.h>
//int main()
//{
//    int num, cnt=1, i=2, j, determine;
//    printf("소수의 개수---> ");
//    scanf("%d", &num);
//    printf("%d개의 소수= ", num);
//
//    while (cnt<=num)
//    {
//        determine = 1;
//        for (j=2; j<i; j++)
//        {
//            if (i%j==0)
//            {
//                determine=0; break;
//            }
//        }
//        if (determine==1)
//        {
//            printf("%d, ", i);
//            cnt++;
//        }
//        i++;
//    }
//    printf("\n");
//}



// or
// determine 안쓰고



//#include <stdio.h>
//int main()
//{
//    int num, cnt=1, i=2, j;
//    printf("소수의 개수---> ");
//    scanf("%d", &num);
//    printf("%d개의 소수= ", num);
//
//    while (cnt<=num)
//    {
//        for (j=2; j<i; j++)
//        {
//            if (i%j==0)
//            {
//                break;
//            }
//        }
//        if (i==j)  
//        {
//            printf("%d, ", i);
//            cnt++;
//        }
//        i++;
//    }
//    printf("\n");
//}
//
