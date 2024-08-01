// *** 문자 배열을 이해하여 봅시다.
// 1)
//#include <stdio.h>
//int main()
//{
//    char str[50];
//    int idx=0;
//
//    printf("문자열 입력: ");
//    scanf("%s", str);
//    printf("입력 받은 문자열: %s \n", str);
//
//    printf("문자 단위 출력: ");
//    while(str[idx] != '\0')
//    {
//        printf("%c ", str[idx]);
//        idx++;
//    }
//    printf("\n");
//    return 0;
//}



// 2)
//#include <stdio.h>
//int main()
//{
//    char str[50]="I like C programming";
//    printf("string: %s \n", str);
//    str[8] = '\0';  // 9번째 요소에 널 문자 저장
//    printf("string: %s \n", str);   // string: I like C
//    str[6] = '\0';  // 7번째 요소에 널 문자 저장
//    printf("string: %s \n", str);   // string: I like
//    str[1] = '\0';  // 2번째 요소에 널 문자 저장
//    printf("string: %s \n", str);   // string: I
//    return 0;
//}



// 숙제
// Question 1
//#include <stdio.h>
//int main()
//{
//    int cnt=0;
//    char str[10];
//    printf("문자열 입력 : ");
//    scanf("%s", str);
//
//    while(str[cnt] != '\0')
//    {
//        cnt++;
//    }
//
//    printf("입력한 문자는 %d 글자입니다 \n", cnt);
//}



// Question 2
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char str[100];
//    int cnt=0;
//    char tmp;
//    printf("문자열입력 : ");
//    scanf("%s", str);
//
//    for (int i=0; i<strlen(str)-1 ;i++)
//    {
//        for (int j=0; j<strlen(str) - 1 ; j++)
//        {
//            if (str[j] < str[j+1])  // 여기 부등호 하나만 바꾸면 됨
//            {
//                tmp = str[j];
//                str[j] = str[j+1];
//                str[j+1] = tmp;
//            }
//        }
//    }
//    printf("정렬후    : ");
//    printf("%s\n", str);
//}



// Question 3
//#include <stdio.h>
//int main()
//{
//    char str[50];
//    char find;
//    int cnt=0, front;
//    printf("문자열 : ");
//    gets(str);
//
//    printf("찾을문자 : ");
//    scanf("%c", &find);
//
//    while (str[cnt] != '\0')
//    {
//        if (str[cnt] == find)
//        {
//            front = cnt+1;
//        }
//        cnt++;
//    }
//    printf("%c은 앞에서 %d번째 뒤에서 %d번째입니다.\n", find, front, cnt-front+1);
//}



// Question 4
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char str[50];
//    char tmp;
//    int cnt=0;
//    printf("문자열 입력 : ");
//    gets(str);
//
//
//
//    for (int i=0; i<(strlen(str)/2); i++)
//    {
//        tmp = str[i];
//        str[i] = str[strlen(str)-(i+1)];
//        str[strlen(str)-(i+1)] = tmp;
//    }
//    printf("뒤집은후 문자열 : ");
//    printf("%s\n", str);
//}




// Question 5
//#include <stdio.h>
//int main()
//{
//    char str[50];
//    int i=0;
//    int cnt = 0;
//    printf("문자열 입력 : ");
//    gets(str);
//
//    while (str[i] != '\0')
//    {
//        if (str[i] == 32)
//        {
//            cnt++;
//        }
//        i++;
//    }
//    printf("단어는 %d개 입니다\n", cnt+1);
//}



// Question 6
//#include <stdio.h>
//int main()
//{
//    char str[50];
//    int cnt=0;
//    printf("단어입력 : ");
//    scanf("%s", str);
//
//    char max='a';
//    while (str[cnt] != '\0')
//    {
//        if (str[cnt] > max)
//        {
//            max = str[cnt];
//        }
//        cnt++;
//    }
//    printf("아스키코드값이 가장큰 문자는 %c\n", max);
//}




// 여기서부터
// Question 7
// str배열만 써서 풀어보기

// or
// str배멸만쓰고 다중포문 써서
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char str[50];
//    printf("문자열을 입력 하세요 : ");
//    gets(str);
//    int cnt;
//
//    for (int i=0; i<=25; i++)
//    {
//        if (i!= 0 && i%10==0)
//            printf("\n");
//        cnt=0;
//        for (int j=0; j<strlen(str); j++)
//        {
//            if (i+97== str[j])
//                cnt++;
//        }
//
//        printf("%c=%d ", i+97, cnt);
//    }
//    printf("\n");
//}
    



// Question 8
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char str[50];   // 문장입력 받는것
//    int cnt=0;
//
//    printf("문자열을 입력하세요: ");
//    gets(str);
//
//    printf("문자를 입력하세요 : ");
//    char character = getchar();// ==scanf("%c", &ch);
//
//    if (str[0] == character)
//    {
//        cnt++;
//    }
//    for (int i=1; i<strlen(str); i++)     // 레인지 확인
//    {
//        if (str[i-1] == 32 && str[i] == character)
//        {
//            cnt++;
//        }
//    }
//    printf("%c 로 시작하는 단어는 %d개 \n", character, cnt);
//    puts("....");
//}



// Question 9
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char str[50];
//    printf("문자열 입력 : ");
//    gets(str);
//
//    int max=-2147483648;
//    char character;
//    int cnt;
//    for (int i=97; i<=122; i++)
//    {
//        cnt=0;
//        for (int j=0; j<strlen(str); j++)
//        {
//            if (i== str[j])
//                cnt++;
//
//        }
//        if (cnt>max)
//        {
//            max = cnt;
//            character = i;
//        }
//    }
//    printf("가장 많은 문자는 %c 이고 %d개\n", character ,max);
//}



// Question 10
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char str[50];
//    char find[50];
//
//    printf("문자열을 입력하시오 : ");
//    gets(str);
//    printf("찾을 문자열 : ");
//    gets(find);
//
//    int i,j;
//    for (i=0; i<strlen(str); i++)
//    {
//        for (j=0; j<strlen(find); j++)
//        {
//            if (str[i+j] != find[j])
//            {
//                break;
//            }
//        }
//        if (j==strlen(find))
//        {
//            printf("%s가 존재 합니다\n", find);
//            break;
//        }
//    }
//    if (i == strlen(str))
//    {
//        printf("%s가 존재하지 않습니다\n", find);
//    }
//}




// Question 11
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char str[50];
//    printf("문자열을 입력 하세요 : ");
//    gets(str);
//
//    printf("입력데이터: %s\n", str);
//    for (int i=0; i<strlen(str); i++)
//    {
//        if (str[i] >= 97 && str[i] <= 122)
//        {
//            str[i] = str[i]-32;
//        }
//        else if (str[i] >= 65 && str[i] <=90 )
//        {
//            str[i] = str[i]+32;
//        }
//        else if (str[i] == 32)
//        {
//            for (int j=i; j<strlen(str); j++)  // 여기 j<strlen(str)-1 하면 안되는이유와 null character가 어떻게 움직이는지
//            {
//                str[j] = str[j+1];
//            }
//            i--;
//        }
//    }
//    printf("출력데이터: ");
//    puts(str);
//}



// or
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char str[50];
//    printf("문자열을 입력 하세요 : ");
//    gets(str);
//
//    int n1=0, n2=0;
//
//    for (int i=0; i<strlen(str)+1; i++)
//    {
//        if (str[n2] != 32)
//        {
//            if (str[n2] >= 97 && str[n2] <= 122)
//            {
//                str[n1] = str[n2]-32;
//            }
//            else if (str[n2] >= 65 && str[n2] <=90 )
//            {
//                str[n1] = str[n2]+32;
//            }
//            else if (str[n2] == '\0')
//            {
//                str[n1] = '\0';
//            }
//            n1++;
//        }
//        n2++;
//    }
//    puts(str);
//}





// Question 12
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char str[50];
//    int num, how_many;
//    printf("원형문자열 : ");
//    gets(str);
//
//    printf("몇 번째부터 몇 글자를 지울까요? : ");
//    scanf("%d%d", &num, &how_many);
//
////
////    for (int i=num; i<strlen(str); i++)
////    {
////        str[i] = str[i+how_many];   // 8번째에 null이와서 자동으로 끝나는거임? 뒤에서 어떻게 돌아가는지가 궁금함
////        if (str[i] == )
////    }
//
//    // for & while 둘중에 어떤게 맞는건지
//
//    while (str[num] != '\0')
//    {
//        str[num++] = str[num+how_many];
//
//    }
//    printf("지운 후 : ");
//    printf("%s\n", str);
//}




// Question 13??? 끝 검사를 어떻게 하는거임? 그냥찍어도 이상하게 출력됨
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char str[50];
//    printf("문자열을 입력 : ");
//    gets(str);
//
//
//    if (str[1] >=97 && str[1] <=122)
//    {
//        str[1] = str[1] - 32;
//    }
//    puts(str);
//    printf("%s\n",str);
//}
//
//
//    int i;
//    for(i=2; i< strlen(str); i++)
//    {
//        if (str[i] == '.' )
//        {
//            break;
//        }
//    }
//
//    printf("%d\n", i);
//    if (i==strlen(str)-1)
//    {
//        str[i+1] = str[i];
//        str[i] = '.';
//    }

//    puts(str);
//}




// Question 14
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//   char str[50];
//   char tmp;
//   printf("평 문 : ");
//   gets(str);
//
//   for (int i=0; i<3; i++)
//   {
//       tmp = str[0];
//       for (int j=0; j<strlen(str); j++ )
//       {
//           if (j==strlen(str)-1)
//           {
//               str[j] = tmp;
//               break;
//           }
//           str[j] = str[j+1];
//       }
//   }
//   for (int i=0; i<strlen(str); i++ )
//   {
//       str[i] = str[i] - 32;
//   }
//
//   printf("암호문 : ");
//   puts(str);
//}


