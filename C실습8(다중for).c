// 1. 다중 for문을 이해하여 봅시다.
// <프로그램1>
//#include <stdio.h>
//int main()
//{
//    int i,k;
//    for(i=1; i<=3; i++)
//    {
//        for (k=1; k<=4; k++)
//        {
//            printf("%d ", k);
//        }
//        printf("\n");
//    }
//}
//// 1 2 3 4
//// 1 2 3 4
//// 1 2 3 4



// <프로그램2>
//#include <stdio.h>
//int main()
//{
//    int i,k;
//    for(i=1; i<=4; i++)
//    {
//        for(k=1; k<=3; k++)
//        {
//            printf("%d ", i);
//        }printf("\n");
//    }
//}
//// 1 1 1
//// 2 2 2
//// 3 3 3
//// 4 4 4



// <프로그램3>
//#include <stdio.h>
//int main()
//{
//    int i,k;
//    for (i=1; i<=3; i++){
//        for(k=1; k<=4; k++)
//        {
//            printf("*");
//        }
//        printf("\n");}
//}
//// ****
//// ****
//// ****


// 2. 조건식을 생략했을 경우를 살펴 봅시다.
//#include <stdio.h>
//int main()
//{
//    int a;
//    for(a=1; ; a++)
//        printf("*");
//}
//// 무제한 *****.... 찍기



// 3. 증감식을 생략해 봅시다. ?????이건 어떻게 되는거?
//#include <stdio.h>
//int main()
//{
//    int a;
//    for (a=1; a<=2; )
//        printf("%2d", a);
//}



// 4. 초기값을 생략하여 봅시다.????????
//#include <stdio.h>
//int main()
//{
//    int a=1;
//    for (; a<=2 ; a++)
//        printf("%2d", a);
//    puts("\n야호");
//    for (; a>=1; a--)
//        printf("%2d", a);
//}




// 숙제
// Question 1
// 1)
//#include <stdio.h>
//int main()
//{
//    int i,k;
//    for (i=1; i<=3; i++)
//    {
//        printf("%d: ",i);
//        for(k=1; k<=4; k++)
//        {
//            printf("%d", i);
//        }
//        printf("\n");
//    }
//}


// 2)
//#include <stdio.h>
//int main()
//{
//    int i,k;
//    for (i=1; i<=5; i++)
//    {
//        printf("%d: ", i);
//        for (k=1; k<=4; k++)
//        {
//            printf("%d", k);
//        }
//        printf("\n");
//    }
//}



// 3)
//#include <stdio.h>
//int main()
//{
//    int i,k;
//    for (i=1; i<=3; i++)
//    {
//        printf("%d: ", i);
//        for (k=1; k<=i; k++)
//        {
//            printf("%d", k);
//        }
//        printf("\n");
//    }
//}


// 4)
//#include <stdio.h>
//int main()
//{
//    int i,k;
//    for (i=1; i<=4; i++)
//    {
//        for (k=1; k<=5; k++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//}



// Question 2
// 1)
//#include <stdio.h>
//int main()
//{
//    int i,k;
//    for (i=1; i<=3; i++)
//    {
//        for (k=1; k<=i; k++)
//        {
//            printf("%2c", '*');
//        }
//        printf("\n");
//    }
//}



// 2)
//#include <stdio.h>
//int main()
//{
//    int i,k;
//    for (i=3; i>=1; i--)
//    {
//        for (k=1; k<=i; k++)
//        {
//            printf("%2c", '*');
//        }
//        printf("\n");
//    }
//}



// 3)
//#include <stdio.h>
//int main()
//{
//    int i,k, j;
//    for (i=3; i>=1; i--)
//    {
//        for (k=1; k<=i; k++)
//        {
//            printf("  ");
//        }
//        for (j=1;j<=(4-i);j++)
//        {
//            printf("%2c", '*');
//        }
//        printf("\n");
//    }
//}



// 4)
//#include <stdio.h>
//int main()
//{
//    int i,k, j;
//    for (i=3; i>=1; i--)
//    {
//        for (k=1; k<=i; k++)
//        {
//            printf("  ");
//        }
//        for (j=1;j<=(7-2*i);j++)
//        {
//            printf("%2c", '*');
//        }
//        printf("\n");
//    }
//}


// 5)
//#include <stdio.h>
//int main()
//{
//    int i,k,j;
//    for (i=1; i<=3; i++)
//    {
//        for (k=1; k<=i; k++)
//        {
//            printf("  ");
//        }
//        for(j=1; j<=(7-2*i); j++)
//        {
//            printf("%2c", '*');
//        }
//        printf("\n");
//    }
//}



// 6)
//#include <stdio.h>
//int main()
//{
//    int i,j, start=1;
//    for(i=1; i<=3; i++)
//    {
//        for (j=1; j<=i; j++)
//        {
//            printf("%2d",start);
//            start += 1;
//        }
//        printf("\n");
//    }
//}



// 7)
//#include <stdio.h>
//int main()
//{
//    int i,j;
//    for(i=1; i<=3; i++)
//    {
//        for (j=1; j<=i; j++)
//        {
//            printf("%-2d", j);
//        }
//        printf("\n");
//    }
//}


// 8)
//#include <stdio.h>
//int main()
//{
//    int i,k,j, start=9;
//    for (i=1; i<=3; i++)
//    {
//        for (k=1; k<=i; k++)
//        {
//            printf("  ");
//        }
//        for(j=1; j<=(7-2*i); j++)
//        {
//            printf("%2d", start);
//            start -= 1;
//        }
//        printf("\n");
//    }
//}



// Question 3
//#include <stdio.h>
//int main()
//{
//    int i,j;
//    for(i=2; i<=9; i++)
//    {
//        for (j=1; j<=9; j++)
//        {
//            printf("%d*%d=%2d ", i,j, i*j);
//        }
//        printf("\n");
//    }
//}



// Question 4
//#include <stdio.h>
//int main()
//{
//    int i,j;
//    for(i=1; i<=9; i++)
//    {
//        for (j=2; j<=9; j++)
//        {
//            printf("%d*%d=%2d ", j,i, i*j);
//        }
//        printf("\n");
//    }
//}




// Question 5
//#include <stdio.h>
//int main()
//{
//    printf("%20s\n", "곱셈표");
//    printf("%6d%3d%3d%3d%3d%3d%3d%3d%3d\n", 1,2,3,4,5,6,7,8,9);
//    printf("%5c*************************\n", ' ');
//    int i,j;
//    for (i=1; i<=9; i++)
//    {
//        printf("%d* ", i);
//        for (j=1; j<=9; j++)
//        {
//            printf("%3d", i*j);
//        }
//        printf("\n");
//    }
//}


// Question 6
//#include <stdio.h>
//int main()
//{
//    int first,second, i, j, tmp;
//    printf("수를 입력하세요  : ");
//    scanf("%d", &first);
//    printf("수를 입력하세요  : ");
//    scanf("%d", &second);
//
//    tmp = 0;
//    for (i=1;  ;i++)
//    {
//        for (j=1; j<=i; j++)
//        {
//            if(first*i == second*j)
//            {
//                printf("=> %d와 %d의 최소공배수는 %d입니다\n", first,second, first*i);
//                tmp=1;break;
//            }
//        }
//        if(tmp) break;
//    }
//}




// Question 7
//#include <stdio.h>
//int main()
//{
//    int i,j;
//    for(i=65; i<=90; i++)
//    {
//        for(j=i; j<=90; j++)
//        {
//            printf("%c", j);
//        }
//        printf("\n");
//    }
//}



// Question 8
//#include <stdio.h>
//int main()
//{
//    int start, end, difference, i, j, cnt=0;
//    for (;;)
//    {
//        printf("시작값 : ");
//        scanf("%d", &start);
//        printf("끝값  : ");
//        scanf("%d", &end);
//        difference = start - end;
//        if (difference<0) difference *= -1;
//        if ((end<start) || (difference < 3))
//        {
//            printf("다시 입력하세요\n");
//            continue;;
//        }
//        for (i=start+1; i<end; i++)
//        {
//            printf("%3d", i);
//            cnt += 1;
//            if (cnt%3==0)
//            {
//                printf("\n");
//            }
//        }
//        if (i==end) break;
//    }
//    printf("\n");
//}




// Question 9
//#include <stdio.h>
//int main()
//{
//    int i,j,cnt=0,determine;
//    for (i=2;i<=200;i++)
//    {
//        determine=1;
//        for (j=2; j<i; j++)
//        {
//            if (i%j==0)
//            {
//                determine=0;
//                break;
//            }
//        }
//
//        if(determine)
//        {
//            printf("%4d",i);
//            cnt++;
//            if (cnt%5==0) printf("\n");
//        }
//    }
//    printf("\n");
//}


// or


//#include <stdio.h>
//int main()
//{
//    int i,j,cnt=0;
//    for (i=2;i<=200;i++)
//    {
//        for (j=2; j<i; j++)
//        {
//            if (i%j==0)
//            {
//                break;
//            }
//        }
//
//        if(j==i)
//        {
//            printf("%4d",i);
//            cnt++;
//            if (cnt%5==0) printf("\n");
//        }
//    }
//    printf("\n");
//}


// Question 10
//#include <stdio.h>
//int main()
//{
//    int i,j,k, cnt=0, page=1;
//    for (i=1; i<=9; i++)
//    {
//        for (j=1; j<=9 ;j++)
//        {
//            for (k=1; k<=9; k++)
//            {
//                if (i!=j && j!=k)
//                {
//                    printf("%d%d%d ", i,j,k);
//                    cnt += 1;
//                    if (cnt%5==0) printf("\n");
//                    if (cnt%100==0)
//                    {
//                        printf("\n%d쪽\n", page);
//                        page++;
//                        printf("\n\n");
//                    }
//                }
//            }
//        }
//    }
//    printf("\n\n%d쪽", page);
//    printf("\n%d개\n", cnt);
//}



// Question 11
//#include <stdio.h>
//int main()
//{
//    int i,j, num, determine;
//    printf("수를 입력하세요 : ");
//    scanf("%d", &num);
//    printf("결과 =>");
//
//    for(;;)
//    {
//        determine = 1;
//        for(j=2; j<i; j++)
//        {
//            if (i%j==0)
//            {
//                determine=0; break;
//            }
//        }
//        if (determine==1)
//        {
//            for (;;)
//            {
//                if (num%i!=0) break;
//                printf("%d * ", i);
//                num /= i;
//            }
//        }
//    } printf("\n");
//}


// or


//#include <stdio.h>
//int main()
//{
//    int j, num;
//    printf("수를 입력하세요 : ");
//    scanf("%d", &num);
//    printf("결과 =>");
//
//    for(;;)
//    {
//        for(j=2; j<num; j++)    // 여기 range 설정
//        {
//            if (num%j==0)
//            {
//                printf("%d * ", j);
//                num /= j;
//                break;
//            }
//        }
//
//        if (j==num)
//        {
//            printf("%d ", j);
//            break;
//        }
//    }
//    printf("\n");
//}



// Question 12
//#include <stdio.h>
//int main()
//{
//    int num, i, j,k,m, start;     // start를 써서 숫자들을 만들었음
//    printf("몇줄 ? ");
//    scanf("%d", &num);
//
//    for (i=1; i<=num; i++)
//    {
//        start = i-1;
//        for(j=1;j<= (num+1)-i ;j++)
//        {
//            printf("   ");
//        }
//        for(k=1; k<=i;k++)
//        {
//            start += 1;
//            printf("%3d", start);
//        }
//        for (m=1; m<= (i-1); m++)
//        {
//            start -= 1;
//            printf("%3d", start);
//        }
//        printf("\n");
//    }
//}


// or


//#include <stdio.h>
//int main()
//{
//    int num, i, j,k,m, start;     // start를 써서 숫자들을 만들었음
//    printf("몇줄 ? ");
//    scanf("%d", &num);
//
//    for (i=1; i<=num; i++)
//    {
//        for(j=1;j<= (num+1)-i ;j++)
//        {
//            printf("   ");
//        }
//        start=i;
//        for(k=1; k<=i;k++)
//        {
//            printf("%3d", start++);
//        }
//        start-=1;
//        for (m=1; m<= (i-1); m++)
//        {
//              printf("%3d", --start);
//        }
//        printf("\n");
//    }
//}



// Question 13
//#include <stdio.h>
//int main()
//{
//    int num, i, j,k,m, start;     // start를 써서 숫자들을 만들었음
//    printf("높이를 입력 하세요 : ");
//    scanf("%d", &num);
//
//    for (i=1; i<=num; i++)
//    {
//        start = -1;
//        for(j=1;j<= (num+1)-i ;j++)
//        {
//            printf("   ");
//        }
//
//        for(k=1; k<=i;k++)
//        {
//            start += 2;
//            printf("%3d", start);
//        }
//
//        for (m=1; m<= (i-1); m++)
//        {
//            start -= 2;
//            printf("%3d", start);
//        }
//        printf("\n");
//    }
//}




// Question 14




// Question 15
//#include <stdio.h>
//int main()
//{
//    int start=1, i,j, cnt=0;
//    printf("지그재그 숫자 출력 프로그램\n");
//
//    for(i=1; i<=5; i++)
//    {
//        if (start%10==1)
//        {
//            for (j=1; j<=5; j++)
//            {
//                printf("%5d", start); start++;
//            }
//        }
//        else if (start%10==0)
//        {
//            for (j=1; j<=5; j++)
//            {
//                printf("%5d", start); start--;
//            }
//        }
//        if (start%5==0) start += 6;
//        else if (start%10==6) start +=4;
//        printf("\n");
//    }
//}



// or


//#include <stdio.h>
//int main()
//{
//    int i, j, num=1, p=1;   // p == 증가값;
//    for (i=1; i<=5; i++)
//    {
//        for (j=1; j<=5; j++)
//        {
//            printf("%5d", num);
//            num += p;
//        }
//
//        if (p<0) num += 6;
//        else num +=4;
//        p = -p;
//        printf("\n");
//    }
//}




// Question 16
//#include <stdio.h>
//int main()
//{
//    int year, month, days=0, i, j, k, start, end;
//    printf("년 : ");
//    scanf("%d", &year);
//    printf("월 : ");
//    scanf("%d", &month);
//
//    printf("====================< %d년 %d월>====================\n", year, month);
//    printf("%7c%7c%7c%7c%7c%7c%7c\n", 'S','M','T','W','T','F','S');
//
//    for(i=1; i<year; i++)
//    {
//        if ((i % 4==0) && (i % 100 != 0 || i % 400 ==0))
//            days += 366;
//        else
//            days += 365;
//    }
//    for(j=1; j<month; j++)
//    {
//        if (j==1 || j==3 || j==5 || j==7 || j==8 || j==10 || j==12) days += 31;
//        else if(j==2)
//        {
//            if ((year % 4==0) && (year % 100 != 0 || year % 400 ==0)) days += 29;
//            else days += 28;
//        }
//        else days += 30;
//    }   // 총 days 구하기
//
//    start = (days % 7) + 1;   // 달력찍을때 시작점 구하기
//
//    if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12) end = 31;
//    else if(month==2)
//    {
//        if ((year % 4==0) && (year % 100 != 0 || year % 400 ==0)) end = 29;
//        else end = 28;
//    }
//    else end = 30;   // 몇일까지 찍을지 구하기
//
////    printf("%d\n", start);    // start 값 확인용
//
//
//    int calendar = 1, cnt=0, b;
//
//    for(b=1; b<=start; b++)     // 앞에 빈칸 출력
//    {
//        if (start==7) break;    // 일요일일땐 빈칸 필요없으니 break
//        printf("%7s", " ");
//    }
//
//    for (k=1;k<= end ; k++)
//    {
//        printf("%7d", calendar);
//        if (calendar%7== (7-start)) printf("\n");
//        calendar++; cnt++;
//    }printf("\n");
//}
