// 1. 구조체 변수와 필드들의 시작 주소값을 알아봅시다.
//#include <stdio.h>
//struct KT
//{
//    int bunho;  // 번호 기억용
//    int jumsu;  // 점수 기억용
//};
//
//int main()
//{
//    struct KT M={2, 80};
//    printf("%u\n", &M);
//    printf("%u\n", &M.bunho);
//    printf("%u\n", &M.jumsu);
//}


// 2. 구조체 주소변수가 무엇인지 알아봅시다.
//#include <stdio.h>
//struct KT
//{
//    int bunho;  // 번호 기억용
//    int jumsu;  // 점수 기억용
//};
//
//int main()
//{
//    struct KT M={2, 80};
//    struct KT *ap;
//    ap = &M;
//    printf("번호=%d\n", (*ap).bunho);
//    printf("점수=%d\n", (*ap).jumsu);
//}



// 3. 화살표(->) 연산자를 사용하여 봅시다.
//#include <stdio.h>
//struct KT
//{
//    int bunho;  // 번호 기억용
//    int jumsu;  // 점수 기억용
//};
//
//int main()
//{
//    struct KT M={2, 80};
//    struct KT *ap;
//    ap=&M;
//    printf("번호=%d\n", ap->bunho);
//    printf("점수=%d\n", ap->jumsu);
//}



// 4. 구조체 배열의 시작 주소값을 알아 봅시다.
//#include <stdio.h>
//struct KT
//{
//    int bunho;  // 번호 기억용
//    int jumsu;  // 점수 기억용
//};
//
//int main()
//{
//    struct KT M[3]={ {1, 80}, {2, 70}, {3,60} };
//    printf("구조체 1개 크기=%d \n", sizeof(M[0]) );
//    printf("%u\n", &M );
//    printf("%u\n", &M[0] );
//    printf("%u\n", &M[1] );
//    printf("%u\n", &M[2] );
//}


// 5. 구조체 포인터 변수를 이용하여 필드를 표현해 봅시다.
//#include <stdio.h>
//struct KT
//{
//    int bunho;  // 번호 기억용
//    int jumsu;  // 점수 기억용
//};
//
//int main()
//{
//    struct KT M[3]={ {1, 80}, {2, 70}, {3,60} };
//    struct KT *ap = M;
//    printf("점수=%d\n", ap->jumsu);   // 80
//    printf("점수=%d\n", (ap+1)->jumsu);   // 70
//    printf("점수=%d\n", (ap+2)->jumsu);   // 60
//}


// 6. 구조체 포인터 변수 값을 1증가 시켜 봅시다.
//#include <stdio.h>
//struct KT
//{
//    int bunho;  // 번호 기억용
//    int jumsu;  // 점수 기억용
//};
//
//int main()
//{
//    struct KT M[3]={ {1, 80}, {2, 70}, {3,60} };
//    struct KT *ap = M;
//    printf("점수=%d\n", ap->jumsu);   // 80
//    ap++;
//    printf("점수=%d\n", ap->jumsu);   // 70
//}




// 11. 포함 구조체 변수를 사용하여 봅시다.
//#include <stdio.h>
//typedef struct KT
//{
//    int kor;    // 국어점수 기억용
//    int eng;    // 영어점수 기억용
//}KE;
//typedef struct MT
//{
//    int bun;    // 번호 기억용
//    KE Fir;     // 1차 시험 점수 기억용
//    KE Sec;     // 2차 시험 점수 기억용
//}Gu;
//void HeadTitle() {
//    printf("%40s\n", "성적표");
//    printf("%25s%20s\n", "1차", "2차");
//    printf("%10s%10s%10s%10s%10s\n", "번호",
//           "국어", "영어", "국어", "영어");
//}
//void List( Gu K) {
//    printf("%10d%10d%10d%10d%10d\n", K.bun,
//           K.Fir.kor, K.Fir.eng, K.Sec.kor, K.Sec.eng);
//}
//
//int main() {
//    Gu M[3]= { {1,70,80,90,95}, {2,60,70,80,90}, {3,50,60,70,80} };
//    KE lm;
//    lm = M[0].Sec; M[0].Sec = M[2].Fir; M[2].Fir=lm;
//    HeadTitle();
//    List(M[0]);
//    List(M[1]); List(M[2]);
//}




// 숙제
// Question 2
//#include <stdio.h>
//struct subject{
//    int kor, eng, math;
//};
//struct INFO {
//    int classOf;
//    char name[20];
//    struct subject mid, final, total;
//    int rank;
//};
//void input(struct INFO info[], int i) {
//    scanf("%d", &info[i].classOf);
//    scanf("%s", info[i].name);
//    scanf("%d %d %d", &info[i].mid.kor, &info[i].mid.eng, &info[i].mid.math);
//    scanf("%d %d %d", &info[i].final.kor, &info[i].final.eng, &info[i].final.math);
//    info[i].total.kor = info[i].mid.kor + info[i].final.kor;
//    info[i].total.eng = info[i].mid.eng + info[i].final.eng;
//    info[i].total.math = info[i].mid.math + info[i].final.math;
//    
//}
//void output(struct INFO info[], int i) {
//    printf("%5d %5s %5d%5d%5d %5d%5d%5d %5d%5d%5d %5d\n", info[i].classOf, info[i].name,
//           info[i].mid.kor, info[i].mid.kor, info[i].mid.math,
//           info[i].final.kor, info[i].final.kor, info[i].final.math,
//           info[i].total.kor, info[i].total.kor, info[i].total.math, info[i].rank);
//}
//
//int main() {
//    struct INFO arr[5];
//    
//    for (int i=0; i<5; i++) {
//        input(arr, i);
//    }
//    
//    int sumI=0, sumJ=0;     // 등수 매기기
//    for (int i=0; i<5; i++) {
//        arr[i].rank = 1;
//        sumI = arr[i].total.kor + arr[i].total.eng + arr[i].total.math;
//        for (int j=0; j<5; j++) {
//            sumJ = arr[j].total.kor + arr[j].total.eng + arr[j].total.math;
//            if (sumJ > sumI)
//                (arr[i].rank)++;
//        }
//    }
//    
//    for (int i=0; i<4; i++) {
//        struct INFO tmp;
//        for (int j=i+1; j<5; j++) {
//            if (arr[i].rank > arr[j].rank) {
//                tmp= arr[i];
//                arr[i]=arr[j];
//                arr[j] = tmp ;
//            }
//        }
//    }
//    
//    for (int i=0; i<5; i++) {
//        output(arr, i);
//    }
//    
//    int sumKor=0, sumEng=0, sumMath=0;
//    for (int i=0; i<5; i++) {
//        sumKor += arr[i].total.kor;
//        sumEng += arr[i].total.eng;
//        sumMath += arr[i].total.math;
//    }
//    double averKor = sumKor / 5.0;
//    double averEng = sumEng / 5.0;
//    double averMath = sumMath / 5.0;
//
//    printf("%d %d %d\n", sumKor, sumEng, sumMath);
//    printf("%.2f %.2f %.2f\n", averKor, averEng, averMath);
//}

// input 예시
//22 park 80 80 80 80 80 80
//20 sue 100 100 100 100 100 100
//18 kang 90 90 90 90 90 90
//18 lee 85 85 85 85 85 85
//19 kim 95 95 95 95 95 95





// Question 3. 항공사 좌석예약 시스템을 작성하여 봅시다.
// 이미 예약된건 다시 예약안되게(O), 예약이 안된걸 취소는 에러메시지(O), 범위밖에 좌석 에러메시지(O)
//#include <stdio.h>
//#include <string.h>
//typedef struct Reserver {
//    char name[10];
//}Reserver;
//
//typedef struct Seats {
//    Reserver seatNo[10];
//}Seats;
//
//typedef struct PlaneNo {
//    Seats info[5];
//}PlaneNo;
//PlaneNo plane;
//
//
//void reservation(int n, int seatNum) {
//    char name[15];
//
//    if (strcmp(plane.info[n].seatNo[seatNum].name, "_______") == 0  ) {
//        printf("에약자이름 : ");
//        scanf("%s",name);
//        strcpy(plane.info[n].seatNo[seatNum].name, name);
//    }
//    else
//        printf("THIS SEAT IS RESERVED!!!\n");
//}
//
//
//void printout() {
//    for (int i=0; i<5; i++) {
//        for (int j=0; j<10; j++)
//            printf("%8s ", plane.info[i].seatNo[j].name);
//        printf("\n");
//    }
//}
//
//void fillIn() {
//    for (int i=0; i<5; i++) {
//        for (int j=0; j<10; j++)
//            strcpy(plane.info[i].seatNo[j].name, "_______");
//    }
//}
//
//int main() {
//    fillIn();   // 결과보기 편하게 뭐 좀 넣고 시작
//    
//    int num;
//    int n, seatNum;
//    while (1) {
//        printf("\n\n==========\n");
//        printf("1. 좌석예약\n");
//        printf("2. 예약취소\n");
//        printf("3. 좌석상태 출력\n");
//        printf("4. 종료\n");
//        printf("==========\n");
//        printf("선택=>");
//
//        scanf("%d", &num);
//        if (num == 1) {     // 좌석예약
//            printf("몇호기 ? : ");
//            scanf("%d",&n);
//            printf("좌석번호 : ");
//            scanf("%d",&seatNum);
//            if (n >= 1 && n <= 5 && seatNum >= 1 && seatNum <= 10) {
//                reservation(n-1, seatNum-1);
//            }
//            else
//                printf("SELECT VALID SEATS!!!\n");
//
//        }
//        else if (num == 2) {    // 예약취소
//            printf("몇호기 ? : ");
//            scanf("%d",&n);
//            printf("좌석번호 : ");
//            scanf("%d",&seatNum);
//            if (n >= 1 && n <= 5 && seatNum >= 1 && seatNum <= 10) {
//                
//                if ( strcmp(plane.info[n-1].seatNo[seatNum-1].name, "_______") == 0 ) {
//                    printf("ERROR -- NOT RESERVED YET!!!\n");
//                }
//                else {
//                    strcpy(plane.info[n-1].seatNo[seatNum-1].name, "_______");
//                }
//            }
//            else
//                printf("SELECT VALID SEATS!!!\n");
//        }
//        else if (num == 3)      // 좌석상태 출력
//            printout();
//        else    // 종료
//            break;
//    }
//}





// Question 4. 다음과 같이 키워드로 text를 찾는 프로그램을 작성하여 봅시다.
//#include <stdio.h>
//#include <string.h>
//typedef struct data_List {
//    char text[130];
//    char hash_code[100][30];
//    int hash_count;
//} data_list;
//data_list LIST[20];
//
//
//void input(int n) {
//    char hashCode[30];
//    char word[20];
//    int cnt=0, i=1;
//    
//    printf("text : ");
//    scanf("%[^\n]s",LIST[n].text);    // gets 대용
////    gets(LIST[n].text);
//    printf("hash_code : ");
//    scanf("%s", hashCode);
//    
//    while (hashCode[i] != '\0') {
//        int j=0;
//        while (hashCode[i] != '#' && hashCode[i] != '\0') {
//            word[j++]=hashCode[i++];
//        }
//        word[j] = '\0';
//        strcpy(LIST[n].hash_code[cnt++], word);
//        if (hashCode[i] == '#')
//            i++;
//
//    }
//    LIST[n].hash_count = cnt;
//    printf("\n\n");
//}
//
//
//void view(int n) {
//    char keyword[20];
//    
//    printf("keyword : ");
//    scanf("%s", keyword);
//
//    for (int i=0; i<n; i++) {
//        for (int j=0; j<LIST[i].hash_count; j++)
//            if ( strcmp(LIST[i].hash_code[j], keyword)==0 ) {
//                printf("%s\n", LIST[i].text);
//                break;
//            }
//    }
//    printf("\n\n");
//}
//
//
//void deletion(int n) {
//    char keyword[20];
//    
//    printf("keyword : ");
//    scanf("%s", keyword);
//
//    for (int i=0; i<n; i++) {
//        for (int j=0; j<LIST[i].hash_count; j++)
//            if ( strcmp(LIST[i].hash_code[j], keyword) ==0 ) {
//                for (int k=j; k<LIST[i].hash_count; k++) {
//                    strcpy(LIST[i].hash_code[k], LIST[i].hash_code[k+1]);
//                }
//                LIST[i].hash_count--;
//            }
//    }
//    printf("\n\n");
//}
//
//
//void printout() {
//    int n;
//    printf("몇번째를 확인하시렵니까? : ");
//    scanf("%d", &n);
//    printf("%s\n", LIST[n].text);
//    
//    for (int i=0; i<LIST[n].hash_count; i++) {
//        printf("%s\n", LIST[n].hash_code[i]);
//    }
//    printf("%d\n", LIST[n].hash_count);
//}
//
//
//int main() {
//    int num, i=0;
//    
//    while (1) {
//        printf("=== menu\n");
//        printf("1. 입력\n");
//        printf("2. 조회\n");
//        printf("3. 삭제\n");
//        printf("4. 프린트\n");
//        printf("5. 종료\n");
//        printf("==> ");
//        scanf("%d", &num);
//        getchar();
//        
//        if (num == 1)
//            input(i++);
//        else if (num == 2)
//            view(i);
//        else if (num == 3)
//            deletion(i);
//        else if (num == 4)
//            printout();
//        else
//            break;
//    }
//}



// input
// banana is a popular fruit known for its sweet taste, yellow color, high potassium content, and energy-boosting properties.
// #banana#fruit#monkey


// Tiger is a large mammal known for its distinctive orange coat with black stripes, found in various habitats across Asia.
// #tiger#orange#predator#strong

// Python is a high-level programming language known for its simplicity, widely used in web development.
// #STEM#coding#computer#C#C++
