// 1. go to 문에 대하여 알아 봅시다.
//#include <stdio.h>
//int main()
//{
//    int num;
//    num =0;
//
//up:
//    num++;
//    printf("%2d", num);
//    if (num<3) goto up;
//    puts("\n종료");
//}
//  1 2 3
// 종료



// 2. 다음 프로그램의 실행결과를 예측하여 실행하여 확인해 봅시다.
//#include <stdio.h>
//int main()
//{
//    int num;
//    num = 5;
//up:
//    num--;
//    printf("%2d", num);
//    if (num>1) goto up;
//    puts("\n종료");
//}
//
////  4 3 2 1
//// 종료


// 3. 다음 프로그램의 실행결과를 예측하고 실행하여 확인해 봅시다.
//#include <stdio.h>
//int main()
//{
//    int num;
//    num =0;
//up:
//    num += 2;
//    printf("%3d", num);
//    if(num<10) goto up;
//    puts("\n종료");
//}
//   2  4  6  8 10
// 종료


// 4. 다음 프로그램의 실행결과를 예측하고 실행하여 확인해 봅시다.
//#include <stdio.h>
//int main()
//{
//    int a;
//    a=0;
//
//up:
//    a++;
//    printf("%3d", a);
//    if(a%3==0) printf("\n");
//    if(a<10) goto up;
//    puts("\n종료");
//}
////   1  2  3
////   4  5  6
////   7  8  9
////  10
//// 종료



// 5. 다음 프로그램의 실행결과를 예측하고 실행하여 확인해 봅시다.
//#include <stdio.h>
//int main()
//{
//    int a, sum;
//    a=0; sum=0;
//
//up:
//    a++;
//    sum = sum + a;
//    printf("%2d", a);
//    if (a<3) goto up;
//    printf("\n%2d", sum);
//    puts("\n종료");
//}
////  1 2 3
////  6
//// 종료



// 6. 다음 프로그램의 실행결과를 예측하고 실행하여 확인해 봅시다.
//#include <stdio.h>
//int main()
//{
//    int a=0, sum=1;
//bb:
//    a++;
//    sum = sum*a;
//    printf("%2d", a);
//    if(a<3) goto bb;
//    printf("\n%2d",sum);
//    puts("\n종료");
//}
////  1 2 3
////  6
//// 종료







// 1. for문에 대하여 알아 봅시다.
//#include <stdio.h>
//int main()
//{
//    int i=0;
//    char ch='A';
//    // 초기값 조건 증감 - 조건만 맞으면 돌음
//    for(; ch=='A'; )
//    {
//
//        printf("%d", i);
//        scanf("%c", &ch);
//        getchar();
//    }
//    printf("for문 종료 후 i 값 : %d ", i);
//    {
//        int b=10;
//    }
//    printf("%d",b); // undefined
//}

 //12345678910for문 종료 후 i 값 : 11



// 2. a 변수 값을 2씩 증가시켜 봅시다.
//#include <stdio.h>
//int main()
//{
//    int a;
//    for (a=1; a<=5; a+=2)
//        printf("%d\n", a);
//    puts("종료");
//}
// 1
// 3
// 5
// 종료



// 3. a변수 값을 1씩 감소시켜 봅시다.
//#include <stdio.h>
//int main()
//{
//    int a;
//    for(a=4; a>=2; a--)
//        printf("%d\n", a);
//    puts("종료");
//}
// 4
// 3
// 2
// 종료


// 4. a변수 값을 100부터 200까지 10씩 증가시켜 봅시다.
//#include <stdio.h>
//int main()
//{
//    for(int i=100; i<=200; i+=10)
//    {
//        printf("#");
//    }
//}
// ########### (11개)




// 5. 알파벳을 출력시켜 봅시다.
// 1)
//#include <stdio.h>
//int main()
//{
//    int M;
//    for(M=65; M<=90; M++)
//        printf("%c", M);
//}


// 2)
//#include <stdio.h>
//int main()
//{
//    char M;
//    for (M='A'; M<='Z'; M++)
//        putchar(M);
//}




// 6. block 개념을 이해하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    int a;
//    for (a=1; a<=3; a++)
//    {
//        printf("%d", a);
//        puts("이다");
//    }
//    puts("종료");
//}
//// 1이다
//// 2이다
//// 3이다
//// 종료


// 7. 초기값과 증감식 기재 부분에 2개 이상의 수식을 기재하여 봅시다.
//#include<stdio.h>
//int main()
//{
//    int a,b;
//    for (a=1, b=3; a<=2; a++, b--)
//        printf("%2d%2d\n", a,b);
//}
////  1 3
////  2 2


// 8. 무한 루프를 사용하여 봅시다.
//#include <stdio.h>
//int main()
//{
//    for (;;)
//    {
//        printf("안녕 ~");
//    }
//}



// 9. for 문을 강제 탈출시켜 봅시다.
//#include <stdio.h>
//int main()
//{
//    int a=2;
//    for (;;)
//    {
//        if (a==0) break;
//        printf("%d\n", a--);  // 여기서는 후위연산자 따짐
//    }
//    puts("종료");
//}
//// 2
//// 1
//// 종료



// 10. for문 속에서의 continue문을 알아 봅시다.
//#include <stdio.h>
//int main()
//{
//    int a;
//    for(a=1; a<=4; a++) // continue 돌아오는 위치
//    {
//        if(a%2==0)
//        {
//            puts("***");
//            continue;
//        }
//        printf("%d\n",a);
//    }
//    puts("종료");
//}
//// 1
//// ***
//// 3
//// ***
//// 종료





// 숙제
// Question 1
//#include <stdio.h>
//int main()
//{
//    int a;
//    int b=0, c=0;
//    for(a=1; a<=20; a++)
//    {
//        if(a%3==0) b+=a;
//        if(a%5==0) c+=a;
//    }
//    printf("%d-%d=%d\n",b,c, b-c);      // 63-50=13
//    printf("%d", a);    // 21
//}




// Question 5
//#include <stdio.h>
//int main()
//{
//    int i;
//    for(i=1; i<=10; i++);   // 여기에 있는 세미콜론 때문에
//    printf("%d ",i);    // 11
//}




// Question 9
//#include <stdio.h>
//int main()
//{
//    int num,i;
//    printf("몇 단을 출력 할까요 : ");
//    scanf("%d", &num);
//
//    for(i=1; i<=9; i++)
//    {
//        printf("%d * %d = %d\n", num,i,num*i);
//    }
//}




// Question 13
// 1)
//#include <stdio.h>
//int main()
//{
//    int i;
//    for(i=122; i>=97; i--)
//        printf("%c", i);
//    printf("\n");
//}


// 2)
//#include <stdio.h>
//int main()
//{
//    int i;
//    for (i=0; i<=25; i++)
//    {
//        printf("%c%c", 65+i, 90-i);
//    }
//    printf("\n");
//}



// 3)
//#include <stdio.h>
//int main()
//{
//    int i,b;
//    for (i=97, b=90; i<=122; i++, b--)
//    {
//        printf("%c%c", i, b);
//    }
//    printf("\n");
//}



// 4)
//#include <stdio.h>
//int main()
//{
//    int i,start=0;
//    for (i=65; i<=90; i+=2)
//    {
//        printf("%c ", i);
//    }
//    printf("\n");
//}



// 5)
//#include <stdio.h>
//int main()
//{
//    int i;
//    int n=0;
//    for(i=65; i<=90; i++)
//    {
//        printf("%3c", i);
//        n++;
//        if (n%5==0) printf("\n");
//    }
//    printf("\n");
//}




// Question 14
//#include <stdio.h>
//int main()
//{
//    int num;
//    int cnt=0;
//    char name[15];
//    printf("이름 : ");
//    scanf("%s", &name);
//    printf("문제 개수 : ");
//    scanf("%d", &num);
//    printf("******************************\n");
//
//    for(int i=1;i<=num;i++)
//    {
//        char determine;
//        printf("문제를 해결했나요>(y/n) : ");
//        getchar();
//        scanf("%c", &determine);
//
//        if(determine=='y')
//            cnt += 1 ;
//    }
//    printf("%s학생은 총 %d 문제를 해결했습니다\n", name, cnt);
//}



// Question 19
//#include <stdio.h>
//int main()
//{
//    int i, sum=0;
//    for(i=2; i<=86; i+=6)
//    {
//        printf("%d+", i);
//        sum += i;
//    }
//    printf("\b\b \n합=%d\n", sum);
//}



// Question 20
//#include <stdio.h>
//int main()
//{
//    int i, sum=0;   // sum의 초기값 꼭 설정해야됨
//    int num=2;
//    for(i=1; i<=10; i++)
//    {
//        printf("%d ", num);
//        sum += num;
//        num *= 3;
//    }
//    printf("\n합=%d\n",sum);
//}



// Question 25
//#include <stdio.h>
//int main()
//{
//    int i, start=100, cnt=0;
//    for(i=1;;i++)
//    {
//        start -=i;
//        cnt += 1;
//        if(start<0) break;
//    }
//    printf("=>처음으로 음수가 되는 변수의 값과 n의 값은 : %d  %d\n", start, cnt);
//}



// Question 26
//#include <stdio.h>
//int main()
//{
//    int num,i,max,min,input;
//    printf("입력될 수의 개수는 : ");
//    scanf("%d", &num);
//    printf("\n");
//
//    for(i=1; i<=num; i++)
//    {
//        printf("%d번째수를 입력하세요 : ", i);
//        scanf("%d", &input);
//        if(i==1)
//            max = min = input;
//        else
//        {
//            if (input>max)
//                max = input;
//            if (input<min)
//                min = input;
//        }
//    }
//    printf("최대값=%d\n", max);
//    printf("최소값=%d\n", min);
//}





// Question 27
//#include <stdio.h>
//int main()
//{
//    int num, i, determine=1;
//    printf("수를 입력 하세요 : ");
//    scanf("%d", &num);
//
//    for(i=2; i<num ; i++)
//    {
//        if (num%i==0)
//        {
//            determine = 0;break;
//        }
//    }
//    if(determine)
//        printf("=>소수\n");
//    else
//        printf("=>소수가 아님\n");
//}


// or
// 더 좋은방법 (determine 없이 풀어보기)

//#include <stdio.h>
//int main()
//{
//    int num, i;
//    printf("수를 입력 하세요 : ");
//    scanf("%d", &num);
//
//    for(i=2; i<num ; i++)
//    {
//        if (num%i==0)
//        {
//            break;
//        }
//    }
//    if(i==num)
//        printf("=>소수\n");
//    else
//        printf("=>소수가 아님\n");
//}



// Question 28
//#include <stdio.h>
//int main()
//{
//    int first, second, i,sum=0, odd_sum=0;
//    printf("첫 번째 수를 입력 하세요 : ");
//    scanf("%d", &first);
//
//    printf("두 번째 수를 입력 하세요 : ");
//    scanf("%d", &second);
//
//    printf("\n=>사이의 수 : ");
//
//    for(i=first+1; i<second; i++)
//    {
//        printf("%d ", i);
//        sum += i;
//        if (i%2!=0) odd_sum += i;
//    }
//    printf("\n합=%d\n", sum);
//    printf("홀수의 합=%d\n", odd_sum);
//}



// Question 29
//#include <stdio.h>
//int main()
//{
//    int first, second, GCD,i;
//    printf("수를 입력 하세요 : ");
//    scanf("%d", &first);
//    printf("수를 입력 하세요 : ");
//    scanf("%d", &second);
//
//    for (i=1;i<=first;i++)
//    {
//        if(first%i==0 && second%i==0)
//            GCD = i;
//    }
//    printf("=>%d과 %d의 최대공약수는 %d입니다.\n", first, second, GCD);
//}




// Question 30
//#include <stdio.h>
//int main()
//{
//    int i, end=100, sum=0;
//    for(i=1;i<=50;i++)
//    {
//        printf("%d + %d = %d\n", i, end, i+end);
//        sum += (i+end);
//        end -= 1;
//    }
//    printf("합 = %d * %d = %d\n", (i+end), (i-1), sum);
//}


// or

//#include <stdio.h>
//int main()
//{
//    int a,b,sum=0;
//    for (a=1, b=100; a<=50; a++, b--)
//    {
//        printf("%d + %d = %d\n", a, b, a+b);
//        sum += (a+b);
//    }
//    printf("합 = %d * %d = %d\n", (a+b), (a-1), sum);
//}
//


// Question 31
//#include <stdio.h>
//int main()
//{
//    int i, odd_sum=0, even_sum=0, sum_3=0, cnt=0, sum_34=0 ;
//    for(i=1;i<=30;i++)
//    {
//        if (i%2!=0) odd_sum+=i;
//        else even_sum += i;
//        if (i%3==0) sum_3 += i;
//        if (i%3==0 && i%4==0)
//        {
//            cnt += 1;
//            sum_34 += i;
//        }
//    }
//    printf("홀수의 합 = %d\n", odd_sum);
//    printf("짝수의 합 = %d\n", even_sum);
//    printf("3의 배수의 합 = %d\n", sum_3);
//    printf("3과 4의 공배수의 개수 = %d개  합 = %d\n", cnt, sum_34);
//}



// Question 32
//#include <stdio.h>
//int main()
//{
//    int i, num, sum=0, a=0, b=0, c=1;
//    printf("수열의 개수를 입력 하세요 : ");
//    scanf("%d", &num);
//
//    for (i=1;i<=num;i++)
//    {
//        printf("%d+",c);
//        sum += c;
//        a =b;
//        b = c;
//        c = a+b;
//    }
//    printf("\n합=%d\n",sum);
//}




// Question 33
// 1)
//#include <stdio.h>
//int main()
//{
//    int i, start=1, sum=0;
//    for(i=1; i<=7; i++)
//    {
//        printf("%d + ", start);
//        sum += start;
//        start += i;
//    }
//    printf("\b\b\b \n합= %d\n", sum);   // \b 안먹힘
//}



// 2)
//#include <stdio.h>
//int main()
//{
//    int i,sum=0;
//    for (i=1;i<=10;i++)
//    {
//        if(i%2!=0)
//        {
//            printf("%d ",i);
//            sum += i;
//        }
//        else
//        {
//            printf("%d + ",-i);
//            sum += -i;
//        }
//    }
//    printf("\n합=%d\n", sum);
//}


// or
// 새로운 방법으로 풀어보기
//#include <stdio.h>
//int main()
//{
//    int i,sum=0, tmp = 1, result;
//    for (i=1;i<=10;i++)
//    {
//        result = tmp * i;
//        sum += result;
//        printf("%d", result);
//        if (tmp<0) printf("+");
//        tmp = -tmp;
//    }
//    printf("\n합=%d\n", sum);
//}



// 3)
//#include <stdio.h>
//int main()
//{
//    int i, start=5, sum=0;
//    for(i=5;i<=50;i+=5)
//    {
//        if (i%2!=0)
//        {
//            printf("%d", i);
//            sum += i;
//        }
//        else
//        {
//            printf("%d+",-i);
//            sum += -i;
//        }
//    }
//    printf("\n합=%d\n", sum);
//}




// 4)
//#include <stdio.h>
//int main()
//{
//    int i,start=1, sum =0, tmp;
//    for (i=1; i<=7; i++)
//    {
//        if (i%2!=0)
//        {
//            printf("%d - ",start);
//            sum += start;
//        }
//        else
//        {
//            printf("%d + ",start);
//            sum += -start;
//        }
//        start += i;
//
//    }
//    printf("\n합=%d\n", sum);
//}



// Question 34
//#include <stdio.h>
//int main()
//{
//    int my_score,i,cnt=1, score;
//    printf("나의 점수는 : ");
//    scanf("%d", &my_score);
//
//    for (i=1; i<=5; i++)
//    {
//        printf("%d번 친구의 점수 : ", i);
//        scanf("%d", &score );
//        if (score>my_score) cnt+=1;
//    }
//    printf("\n=> 나는 %d등 입니다\n" , cnt);
//}



// Question 35
//#include <stdio.h>
//int main()
//{
//    int cnt=0, front=1, i, num;
//    printf("정수를 입력 하세요 : ");
//    scanf("%d", &num);
//    for ( ;num>0; )
//    {
//        num /= 10;
//        cnt += 1 ;
//        front *= 10;
//    }
//
//    printf("정수의 길이   : %d\n",cnt);
//    printf("앞자리의 값   : %d\n",front/10);
//}




// Question 36
//#include <stdio.h>
//int main()
//{
//    int cnt=0, front=1, sum=0, num, copy;
//    printf("정수를 입력 하세요 : ");
//    scanf("%d", &num);
//    copy = num;
//    for (;num>=1;)
//    {
//        num /= 10;
//        cnt += 1 ;
//        front *= 10;
//    }
//    front = front/10;
//
//    printf("각 자리의 값  : ");
//
//    for (int i=1; i<=cnt; i++)
//    {
//        printf("%-3d", copy/front);
//        sum += (copy/front);
//        copy %= front;
//        front /= 10;
//    }
//    printf("\n각 자리값의 합 : %d\n",sum);
//}



// Question 37
//#include <stdio.h>
//int main()
//{
//    int num,i;
//    printf("정수를 입력 하세요  : ");
//    scanf("%d", &num);
//
//    for (i=1;i<=10000;i*=10)
//    {
//        printf("%d의 자리 : %d\n", i, num%10);
//        num /= 10;
//    }
//}



// Question 38 - 여기서부터 확인
//#include <stdio.h>
//int main()
//{
//    int num, reversed=0, cnt=0, i, copy;
//    float front=0.1;
//    for(;;)
//    {
//        printf("정수를 입력하세요 : ");
//        scanf("%d", &num);
//        if (num>0) break;
//        else if (num<0)
//        {
//            printf("... 다시 입력하세요\n\n");
//            continue;
//        }
//    }
//
//    copy = num;
//
//    for ( ;num>0; )
//    {
//        num /= 10;
//        cnt += 1 ;
//        front *= 10;
//    }
//
//    printf("뒤집은 값 : ");
//    for (i=1;i<=cnt;i++)
//    {
//        reversed += ((copy%10) * front);
//        copy /= 10; front /=10;
//    }
//
//    printf("%d\n", reversed);
//    printf("3배수  값 : %d\n" ,reversed*3);
//}




// Question 39
//#include <stdio.h>
//int main()
//{
//    int i, num, close, min, tmp;
//    for (i=1; i<=10; i++)
//    {
//        printf("%d번째수를 입력하세요 : ", i);
//        scanf("%d", &num);
//        close = num - 10;
//        if (close<0) close*= -1;
//        if (i==1)
//        {
//            tmp = close;
//            min = num;
//        }
//        else
//        {
//            if (close<tmp)
//            {
//                tmp = close;
//                min = num;
//            }
//        }
//    }
//    printf("=>10에 가장 가까운 수는 %d\n", min);
//}



// Question 40
//#include <stdio.h>
//int main()
//{
//    int i, cnt=0;
//    float weight, max, min, sum;
//    for(i=1;;i++)
//    {
//        printf("몸무게를 입력하시오(0:종료) : ");
//        scanf("%f", &weight);
//
//        if(weight == 0) break;
//        else if ((weight<0) || (weight >=200)) continue;
//
//        sum += weight;
//        cnt += 1;
//        if (i==1) max = weight;
//        else if (i==2)
//        {
//            if (weight>max) max = weight;
//            else min =weight;
//        }
//        else
//        {
//            if (weight>max)
//                max = weight;
//            else if(weight<min)
//                min = weight;
//        }
//    }
//    printf("최대값 : %.2f\n", max);
//    printf("최소값 : %.2f\n", min);
//    printf("합 : %.2f\n", sum);
//    printf("평균 : %.2f\n", sum/cnt);
//}



    
// Question 41
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//    int i,rnd;
//    srand((unsigned)time(NULL)); // 난수의 초기화
//    for (i=1; i<=5; i++)
//    {
//        rnd = rand()%100+1;  // 1~100까지의 난수를 발생
//        printf("%d ", rnd);
//    }
//}




// Question 42
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//    int i,rnd, num;
//    srand((unsigned)time(NULL)); // 난수의 초기화
//    rnd = rand()%100+1;  // 1~100까지의 난수를 발생
//    printf("%d \n", rnd);
//    for (;;)
//    {
//        printf("정답을 넣으세요 : ");
//        scanf("%d", &num);
//        if (num<0) break;
//        if (num>rnd) printf("%d보다는 작은 수를 넣으세요~\n", num);
//        else if (num<rnd) printf("%d보다는 큰 수를 넣으세요~\n", num);
//        else
//        {
//            printf("축하합니다 ~~ 드디어 정답을 맞추셨군요 !!!\n"); break;
//        }
//    }
//}



// Question 43
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//    int i,rnd1, rnd2, rnd3, rnd4, rnd5, first, second;
//    srand((unsigned)time(NULL)); // 난수의 초기화
//
//    printf("기억력 테스트입니다\n화면에 보이는 숫자를 기억하였다가 다시 쓰면 됩니다~: ");
//    rnd1 = rand()%9+1;
//    rnd2 = rand()%9+1;
//    rnd3 = rand()%9+1;
//    rnd4 = rand()%9+1;
//    rnd5 = rand()%9+1;
//    printf("%2d%2d%2d%2d%2d", rnd1, rnd2, rnd3, rnd4, rnd5);
//
//
//    printf("\n... 일정 시간이 지나면");
//    for(int i=1; i<1000000000; i++);
//    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
//
//
//    int cnt_1 =0, cnt_2 = 0, f1, f2, f3, f4, f5, s1, s2, s3, s4, s5;
//    printf("1 사용자 입력 : ");
//    scanf("%d%d%d%d%d",&f1, &f2, &f3, &f4, &f5 );
//    printf("2 사용자 입력 : ");
//    scanf("%d%d%d%d%d",&s1, &s2, &s3, &s4, &s5 );
//
//    if (rnd1==f1) cnt_1 +=1;
//    if (rnd2==f2) cnt_1 +=1;
//    if (rnd3==f3) cnt_1 +=1;
//    if (rnd4==f4) cnt_1 +=1;
//    if (rnd5==f5) cnt_1 +=1;
//
//
//    if (rnd1==s1) cnt_2 +=1;
//    if (rnd2==s2) cnt_2 +=1;
//    if (rnd3==s3) cnt_2 +=1;
//    if (rnd4==s4) cnt_2 +=1;
//    if (rnd5==s5) cnt_2 +=1;
//
//    printf("....\n");
//    printf("1사용자는 %d개 맞추었습니다\n", cnt_1);
//    printf("2사용자는 %d개 맞추었습니다\n", cnt_2);
//
//    if (cnt_1>cnt_2) printf("추카 추카!!! 1 사용자 승리\n");
//    else if (cnt_2>cnt_1) printf("추카 추카!!! 2 사용자 승리\n");
//}



// Question 44
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//    int i, rnd1, rnd2;
//    char name[15];
//    double t1 = clock();double t2= clock();
//    printf("%f", t1/1000);
//    getchar();
//    t1 = clock();
//    printf("%f", t1/1000);
//
//    double tTime;
//    tTime = (double)(t2-t1)/ CLOCKS_PER_SEC;    // 소요시간 계산
//
////    Score = (NumGames > NumWins) ? 0.0 : 100 * (5.0*NumGames - tTime) / (5.0*NumGames);
//    printf("-- 스피드 구구단 게임 --\n당신의 구구단 실력을 테스트하세요 !!!\n");
//    printf("게임할 사람 이름 : ");
//    scanf("%s", &name);
//
//    printf("\n%s 님 ~ 테스트하겠습니다.\n크게 심호흡을 하시고\n준비되면 엔터를 누르세요...\n\n", name);
//    srand((unsigned)time(NULL)); // 난수의 초기화
//
//    int guess;
//    float result=0;
//    for (i=1; i<=10; i++)
//    {
//        rnd1 = rand()%9+1;
//        rnd2 = rand()%9+1;
//        printf("[문제 %d ] : %d * %d = ", i, rnd1, rnd2);
//        scanf("%d", &guess);
//        if (guess != rnd1 * rnd2) printf("~~틀렸습니다\n");
//    }
//
//
//    printf("%s 님 점수 : %.2f점 (총 %.1f초)\n", name, result, tTime);
//}
