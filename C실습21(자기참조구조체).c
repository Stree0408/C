// 1. 자기참조 구조체 변수를 알아 봅시다.
//#include <stdio.h>
//struct KT {
//    int nai;
//    struct KT *next;
//};
//
//int main() {
//    struct KT M,N;
//    struct KT *ap=&N;
//    N.nai=10; N.next = &M;
//    M.nai=20; M.next = NULL;
//    printf("%3d", N.nai);   // 10
//    printf("%3d", M.nai);   // 20
//    printf("%3d", ap->nai);   // 10
//    printf("%3d", ap->next->nai);   // 20
//}


// 2. 필드에 담긴 값들을 모두 출력해 봅시다.
//#include <stdio.h>
//struct KT {
//    int nai;
//    struct KT *next;
//};
//
//int main() {
//    struct KT A={10}, B={20}, C={30};
//    struct KT *ap;
//    ap = &C; C.next=&B; B.next=&A; A.next=NULL;
//    while (ap != NULL) {
//        printf("%3d", ap->nai); // 30 20 10
//        ap = ap->next;
//    }
//}



// 3. 동적구조체 공간을 만들고 사용하여 봅시다.
//#include <stdio.h>
//#include <stdlib.h>
//struct KT
//{
//    int nai;
//    struct KT *next;
//};
//struct KT *hp, *ap;
//int main()
//{
//    hp = (struct KT *)malloc(sizeof(struct KT));
//    ap = hp;
//    ap->nai = 5;
//    ap -> next = (struct KT*)malloc(sizeof(struct KT));
//    ap = ap -> next;
//    ap->nai=10;
//    ap->next = NULL;
//    ap = hp;
//    while (1)
//    {
//        if (ap==NULL) break;
//        printf("%3d", ap->nai);
//        ap = ap-> next;
//    }
//    free(hp->next); free(hp);
//}




// 숙제
// Question 1
//#include <stdio.h>
//#include <stdlib.h>
//typedef struct node {
//    char alphabet;
//    struct node *next;
//}node;
//
//int main() {
//    char input;
//    node *sp=NULL,*cp;
//
//    while (1) {
//        scanf("%c", &input);
//
//        node *newNode = (node*)malloc(sizeof(node));
//        newNode->alphabet = input;
//        newNode->next = NULL;
//        cp = sp;
//
//        if (sp == NULL) {
//            sp = newNode;
//        }
//        else {
//            while (cp->next == NULL) {
//                cp = cp->next;
//            }
//            cp->next = newNode;
//        }
//    }
//}



// or
//#include <stdio.h>
//#include <stdlib.h>
//typedef struct node {
//    char alphabet;
//    struct node *next;
//}node;
//
//int main() {
//    char input;
//    node *sp=NULL,*ep=NULL, *cp;
//
//    while (1) {
//        scanf("%c", &input);
//        if (input == 'Q')
//            break;
//
//        node *newNode = (node*)malloc(sizeof(node));
//        newNode->alphabet = input;
//        newNode->next = NULL;
//
//        if (sp == NULL) {
//            sp = newNode;
//            ep = newNode;
//        }
//        else {
//            ep->next = newNode;
//            ep = ep->next;
//        }
//    }
//
//    cp = sp;
//    while (cp!=NULL) {
//        printf("%c", cp->alphabet);
//        cp = cp->next;
//    }
//}
//
//



// 숙제
// Question 1
//#include <stdio.h>
//#include <stdlib.h>
//struct node {
//    char alphabet;
//    struct node *next;
//};
//struct node *head, *newnode, *temp;
//
//int main()
//{
//    char input;
//    head = NULL;
//    while (1) {
//        printf("문자입력(종료=Q) : ");
//        scanf(" %c", &input);
//        if (input == 'Q')
//            break;
//        
//        newnode = (struct node *)malloc(sizeof(struct node));
//        newnode->alphabet = input;
//        newnode->next = NULL;
//        
//        if (head == NULL) {
//            head = newnode;
//            temp = newnode;
//        }
//        else {
//            temp -> next = newnode;
//            temp = newnode;
//        }
//    }
//    
//    
//    printf("입력된 문자열 = ");
//    temp = head;
//    while (temp != 0 ){
//        printf("%c", temp->alphabet);
//        temp = temp -> next;
//    }
//    printf("입니다");
//}



// 3가지 방법으로 풀기
// 1번째 방법
//#include <stdio.h>
//#include <stdlib.h>
//typedef struct node {
//    char alphabet;
//    struct node *next;
//}node;
//
//node * Input(node *sp, char input)  // node * 이건 이 함수의 리턴 데이터타입
//{
//    node *newnode, *cp;
//    cp = sp;
//    newnode = (struct node *)malloc(sizeof(struct node));
//    newnode->alphabet = input;
//    newnode->next = NULL; // 노드 완성후
//    
//    if (sp == NULL) {
//        sp = newnode;
//    }
//    else {
//        while (1) {
//            if (cp->next == NULL)
//                break;
//            else
//                cp = cp -> next;
//        }
//        cp->next=newnode;
//    }
//    return sp;
//}
//void Output(node * sp )
//{
//    node * cp = sp;
//    
//    printf("입력된 문자열=");
//    while (cp != NULL) {
//        printf("%c", cp->alphabet);
//        cp = cp->next;
//    }
//    printf("입니다");
//}
//
//int main()
//{
//    node *sp ;
//    sp = NULL;
//    char input;
//    
//    while (1) {
//        printf("문자입력(종료=Q) : ");
//        scanf(" %c", &input);
//        if (input == 'Q')
//            break;
//        sp=Input(sp, input);
//    }
//    Output(sp);
//}



// 1번째방법 (2번째)
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct node {
//    char alphabet;
//    struct node *next;
//} node;
//
//
//node *Input(node *sp, char input)
//{
//    node *newnode, *cp;
//    cp = sp;
//    newnode = (node *)malloc(sizeof(node));
//    newnode -> alphabet = input;
//    newnode -> next = NULL;
//    
//    
//    if (sp == NULL)
//        sp = newnode;
//    
//    else {
//        while ( (cp->next) != NULL) {
//            cp = cp->next;
//        }
//        cp->next = newnode;
//    }
//    return sp;
//}
//
//
//void Output(node *sp)
//{
//    printf("입력된 문자열=");
//    while (sp!=NULL) {
//        printf("%c", sp->alphabet);
//        sp = sp -> next;
//    }
//    printf("입니다\n");
//}
//
//
//int main()
//{
//    node * sp;
//    sp = NULL;
//    
//    char input;
//    while (1) {
//        printf("문자입력(종료=Q) : ");
//        scanf(" %c", &input);
//        if (input == 'Q')
//            break;
//        sp = Input(sp, input);
//    }
//    Output(sp);    
//    Output(sp);
//}



// 2번째 방법 - call by reference
// sp:시작 ep:끝
// ep loop 돌면서 끝값 안찾아도 됨
//#include <stdio.h>
//#include <stdlib.h>
//typedef struct node {
//    char alphabet;
//    struct node *next;
//}node;
//
//void Input(node **sp, node **ep ,char input)  // node * 이건 이 함수의 리턴 데이터타입
//{
//    node *newnode;
//    newnode = (struct node *)malloc(sizeof(struct node));
//    newnode->alphabet = input;
//    newnode->next = NULL; // 노드 완성후
//    
//    if (*sp == NULL) {
//        *sp = newnode;
//        *ep = newnode;
//    }
//    else {
//        (*ep)->next = newnode;
//        *ep = newnode;
//    }
//}
//
//void Output(node *sp)
//{
//    node *cp=sp;
//    
//    printf("입력된 문자열=");
//    while (cp != NULL) {
//        printf("%c", cp->alphabet);
//        cp = cp->next;
//    }
//    printf("입니다");
//}
//
//int main()
//{
//    node *sp, *ep ; // 시작과 끝
//    sp = NULL;
//    char input;
//    
//    while (1) {
//        printf("문자입력(종료=Q) : ");
//        scanf(" %c", &input);
//        if (input == 'Q')
//            break;
//        Input(&sp, &ep, input);
//    }
//    Output(sp);
//}



// 2번째 방법 (두번째)
// sp:시작 ep:끝
// ep loop 돌면서 끝값 안찾아도 됨
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct node {
//    char alphabet;
//    struct node *next;
//} node;
//
//
//void Input(node **sp, node **ep, char input)
//{
//    node *newnode;
//    newnode = (node *)malloc(sizeof(node));
//    newnode -> alphabet = input;
//    newnode -> next = NULL;
//    
//    
//    if (*sp == NULL) {
//        *sp = newnode;
//        *ep = newnode;
//    }
//    else {
//        (*ep)->next = newnode;
//        *ep = newnode;
//    }
//}
//
//
//void Output(node *sp)
//{
//    printf("입력된 문자열=");
//    while (sp!=NULL) {
//        printf("%c", sp->alphabet);
//        sp = sp -> next;
//    }
//    printf("입니다\n");
//}
//
//
//int main()
//{
//    node *sp, *ep;
//    sp = NULL;
//    ep = NULL;
//    
//    char input;
//    while (1) {
//        printf("문자입력(종료=Q) : ");
//        scanf(" %c", &input);
//        if (input == 'Q')
//            break;
//        Input(&sp, &ep, input);
//    }
//    Output(sp);
//    Output(sp);
//}




// 3번째 방법
//#include <stdio.h>
//#include <stdlib.h>
//typedef struct node {
//    char alphabet;
//    struct node *next;
//}node;
//
//node * Input(node * sp,char input)  // node * 이건 이 함수의 리턴 데이터타입
//{
//    node *newnode;
//    newnode = (struct node *)malloc(sizeof(struct node));
//    newnode->alphabet = input;
//    newnode->next = sp;
//    sp = newnode;
//    return sp;
//}
//
//void Output(node *sp)
//{
//    node *cp=sp;
//
//    printf("입력된 문자열=");
//    while (cp != NULL) {
//        printf("%c", cp->alphabet);
//        cp = cp->next;
//    }
//    printf("입니다");
//}
//
//int main()
//{
//    node *sp;
//    sp = NULL;
//    char input;
//
//    while (1) {
//        printf("문자입력(종료=Q) : ");
//        scanf(" %c", &input);
//        if (input == 'Q')
//            break;
//        sp = Input(sp, input);
//    }
//    Output(sp);
//}



// 3번째 방법 (살짝 다르게)
//#include <stdio.h>
//#include <stdlib.h>
//typedef struct node {
//    char alphabet;
//    struct node *next;
//}node;
//
//node *Input(node **sp,char input)  // node * 이건 이 함수의 리턴 데이터타입
//{
//    node *newnode;
//    newnode = (struct node *)malloc(sizeof(struct node));
//    newnode->alphabet = input;
//    newnode->next = *sp;
//    *sp = newnode;
//    return (*sp);
//}
//
//void Output(node *sp)
//{
//    node *cp=sp;
//
//    printf("입력된 문자열=");
//    while (cp != NULL) {
//        printf("%c", cp->alphabet);
//        cp = cp->next;
//    }
//    printf("입니다");
//}
//
//int main()
//{
//    node *sp;
//    sp = NULL;
//    char input;
//
//    while (1) {
//        printf("문자입력(종료=Q) : ");
//        scanf(" %c", &input);
//        if (input == 'Q')
//            break;
//        Input(&sp, input);
//    }
//    Output(sp);
//}



// Question 2
//#include <stdio.h>
//#include <stdlib.h>
//typedef struct node {
//    char alphabet;
//    struct node *next;
//}node;
//
//node * Input(node *sp, char input)  // node * 이건 이 함수의 리턴 데이터타입
//{
//    node *newnode, *cp;
//    cp = sp;
//    newnode = (struct node *)malloc(sizeof(struct node));
//    newnode->alphabet = input;
//    newnode->next = NULL; // 노드 완성후
//
//    if (sp == NULL) {
//        sp = newnode;
//    }
//    else {
//        while (cp->next != NULL)
//                cp = cp -> next;
//        
//        cp->next=newnode;
//    }
//    return sp;
//}
//void Output(node * sp )
//{
//    node * cp = sp;
//
//    while (cp != NULL) {
//        printf("%c", cp->alphabet);
//        printf(" -> ");
//
//        cp = cp->next;
//    }
//    printf("NULL\n\n");
//}
//
//
//int main()
//{
//    node *sp ;
//    sp = NULL;
//    char input;
//    
//    while (1) {
//        printf("입력할 문자 :  ");
//        scanf(" %c", &input);
//        if (input == 'Q')
//            break;
//        sp=Input(sp, input);
//        Output(sp);
//    }
//}



// Question 3
//#include <stdio.h>
//#include <stdlib.h>
//typedef struct node {
//    char alphabet;
//    struct node *next;
//}node;
//
//void Input(node **sp,node **ep, char input, int *cnt)  // node * 이건 이 함수의 리턴 데이터타입
//{
//    if (input >=97 && input <=122)
//        (*cnt)++;
//        node *newnode;
//    newnode = (struct node *)malloc(sizeof(struct node));
//    newnode->alphabet = input;
//    newnode->next = NULL; // 노드 완성후
//    
//    if (*sp == NULL) {
//        *sp = newnode;
//        *ep = newnode;
//    }
//    else {
//        (*ep)->next = newnode;
//        *ep = newnode;
//    }
//}
//
//int main() {
//    node *sp, *ep ;
//    sp = NULL;
//    char input;
//    int cnt=0;
//    
//    while (1) {
//        printf("입력할 문자 :  ");
//        scanf(" %c", &input);
//        if (input == 'Q')
//            break;
//        Input(&sp, &ep, input, &cnt);
//    }
//    printf("%4d\n", cnt);
//}



// Question 4
//#include <stdio.h>
//#include <stdlib.h>
//typedef struct node {
//    char alphabet;
//    struct node *next;
//}node;
//
//node * Input(node * sp,char input)  // node * 이건 이 함수의 리턴 데이터타입
//{
//    node *newnode;
//    newnode = (struct node *)malloc(sizeof(struct node));
//    newnode->alphabet = input;
//    newnode->next = sp;
//    sp = newnode;
//    return sp;
//}
//
//void Output(node *sp)
//{
//    node *cp=sp;
//
//    printf("입력된 문자열=");
//    while (cp != NULL) {
//        printf("%c", cp->alphabet);
//        cp = cp->next;
//    }
//    printf("입니다");
//}
//
//void SearchWord (node *sp, char search, int len) {
//    int cnt=0;
//    node *cp=sp;
//    while (cp != NULL) {
//        if (cp->alphabet == search) {
//            printf("%d번째에 %c가 있습니다\n", len-cnt,search);
//            break;
//        }
//        cnt++;
//        cp = cp->next;
//    }
//    if (cp == NULL)
//        printf("그런 문자는 존재하지 않습니다\n");
//}
//
//int main() {
//    node *sp;
//    sp = NULL;
//    char input, search;
//    int choice, len=0;
//
//    while (1) {
//        printf("\n== 메뉴 ==\n");
//        printf("1. 문자입력\n");
//        printf("2. 리스트출력\n");
//        printf("3. 문자검색\n");
//        printf("4. 종료\n");
//        printf("==>");
//        scanf(" %d", &choice);
//        if (choice == 1 ) {
//            printf("입력 문자 : ");
//            scanf(" %c", &input);
//            sp = Input(sp, input);
//            len++;
//        }
//        else if (choice == 2 ) {
//            Output(sp);
//        }
//        else if (choice == 3 ) {
//            printf("찾을 문자 : ");
//            scanf(" %c", &search);
//            SearchWord(sp, search, len);
//        }
//        else
//            break;
//    }
//}




// Question 5
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct node {
//    char alphabet;
//    struct node *next;
//}node;
//
//
//void Input(node **head, node **temp ,char input)
//{
//    node *newnode;
//    newnode = (struct node *)malloc(sizeof(struct node));
//    newnode->alphabet = input;
//    newnode->next = NULL;
//
//    if (*head == NULL) {
//        *head = newnode;
//        *temp = newnode;
//    }
//    else {
//        (*temp)->next = newnode;
//        *temp = newnode;
//    }
//}
//
//void Output(node *head)
//{
//    node *temp=head;
//
//    while (temp != NULL) {
//        printf("%3c", temp->alphabet);
//        temp = temp->next;
//    }
//    printf("\n");
//}
//
//
//void GenerateC(node *headA, node *headB)
//{
//    node *headC=NULL, *tempC=NULL;
//    node *currentA = headA;
//    node *currentB = headB;
//    
//    
//    while (1) {
//        if (currentA == NULL && currentB == NULL)
//            break;
//        
//        if (currentA != NULL && currentB != NULL) {
//            node *newnode1 = (struct node *)malloc(sizeof(struct node));
//            node *newnode2 = (struct node *)malloc(sizeof(struct node));
//            newnode1->next = NULL;
//            newnode2->next = NULL;
//
//            if (headC == NULL) {
//                headC = newnode1;
//                newnode1->alphabet = currentA->alphabet;
//                newnode1->next = newnode2;
//                newnode2->alphabet = currentB->alphabet;
//                tempC = newnode2;
//            }
//            else {
//                tempC ->next = newnode1;
//                tempC = newnode1;
//                tempC -> alphabet = currentA->alphabet;
//                tempC -> next = newnode2;
//                tempC = newnode2;
//                tempC -> alphabet = currentB->alphabet;
//            }
//            currentA = currentA->next;
//            currentB = currentB->next;
//        }
//        else if (currentA == NULL && currentB != NULL) {    // B리스트를 추가
//            node *newnode1 = (struct node *)malloc(sizeof(struct node));
//            newnode1->next = NULL;
//
//            if (headC == NULL) {
//                headC = newnode1;
//                tempC = newnode1;
//                tempC->alphabet = currentB->alphabet;
//            }
//            else {
//                tempC->next = newnode1;
//                tempC = newnode1;
//                tempC->alphabet = currentB->alphabet;
//            }
//            currentB = currentB->next;
//        }
//        else if (currentA != NULL && currentB == NULL) {    // A리스트를 추가
//            node *newnode1 = (struct node *)malloc(sizeof(struct node));
//            newnode1->next = NULL;
//
//            if (headC == NULL) {
//                headC = newnode1;
//                tempC = newnode1;
//                tempC->alphabet = currentA->alphabet;
//            }
//            else {
//                tempC->next = newnode1;
//                tempC = newnode1;
//                tempC->alphabet = currentA->alphabet;
//            }
//            currentA = currentA->next;
//        }
//    }
//
//    
//    printf("C list : ");
//    Output(headC);
//}
//
//
//int main()
//{
//    int choice;
//    char input;
//
//    node *headA = NULL, *tempA=NULL ; // 시작과 끝 for A
//    node *headB = NULL, *tempB=NULL ; // 시작과 끝 for B
//    
//    while (1)
//    {
//        printf("1. A 자료입력\n");
//        printf("2. A 리스트출력\n");
//        printf("3. B 자료입력\n");
//        printf("4. B 리스트출력\n");
//        printf("5. C 리스트출력\n");
//        printf("6. 종료\n");
//        printf("==> 선택 ");
//        scanf("%d", &choice);
//        
//        if (choice == 1) {
//            printf("정수입력 : ");
//            scanf(" %c", &input);
//            Input(&headA, &tempA, input);
//        }
//        else if (choice == 2) {
//            printf("A list : ");
//            Output(headA);
//        }
//        else if (choice == 3) {
//            printf("알파벳입력 : ");
//            scanf(" %c", &input);
//            Input(&headB, &tempB, input);
//        }
//        else if (choice == 4) {
//            printf("B list : ");
//            Output(headB);
//        }
//        else if (choice == 5) {
//            GenerateC(headA, headB);
//        }
//        else
//            break;
//    }
//}



// Question 6
//#include <stdio.h>
//#include <stdlib.h>
//typedef struct node {
//    char number;
//    struct node *prev;
//    struct node *next;
//}node;
//
//void InputDouble(node **head, node **tail, char input)
//{
//    node *newnode;
//    newnode = (struct node *)malloc(sizeof(struct node));
//    newnode->number = input;
//    newnode->prev = NULL;
//    newnode->next = NULL; // 노드 완성후
//    
//
//    
//    if (*head == NULL) {
//        *head = newnode;
//        *tail = newnode;
//    }
//    else {
//        (*tail)->next = newnode;
//        newnode->prev = *tail;
//        (*tail) = newnode;
//    }
//}
//
//void Output(node *head, node *tail)
//{
//    node *temp;
//    
//    temp = head;
//    printf("입력된 값      : ");
//    while (temp != NULL) {
//        printf("%2d", temp->number);
//        temp = temp->next;
//    }
//    printf("\n");
//    
//    temp = tail;
//    printf("입력된 값 역순   : ");
//    while (temp != NULL) {
//        printf("%2d", temp->number);
//        temp = temp->prev;
//    }
//    printf("\n");
//}
//
//
//int main()
//{
//    node *head=NULL, *tail=NULL;
//    int num, input;
//    printf("입력할 자료의 개수를 입력하시오:");
//    scanf("%d", &num);
//    
//    for (int i=0; i< num; i++) {
//        printf("%d번째 정수값 : ", i+1);
//        scanf("%d", &input);
//        InputDouble(&head, &tail, input);
//    }
//    Output(head, tail);
//}



// Question 7    // 아직 안끝냄
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//typedef struct node {
//    char number;
//    struct node *next;
//}node;
//
//void InputSingle(node **head, node **temp ,int input)
//{
//    node *newnode;
//    newnode = (struct node *)malloc(sizeof(struct node));
//    newnode->number = input;
//    newnode->next = NULL; // 노드 완성후
//
//    if (*head == NULL) {
//        *head = newnode;
//        *temp = newnode;
//    }
//    else {
//        (*temp)->next = newnode;
//        *temp = newnode;
//    }
//}
//
//void Output(node *head)
//{
//    node *temp=head;
//    int cnt=1;
//
//    while (temp != NULL) {
//        printf("%3d", temp->number);
//        temp = temp->next;
//        if (cnt % 5 ==0)
//            printf("\n");
//        cnt ++;
//    }
//    printf("\n");
//}
//
//
//void Delete(node **head, node **temp)
//{
//    node *current=head;
//    int cnt=0;
//    while ((*temp)->next == NULL)
//    {
//        
//    }
//}
//
//
//int main()
//{
//    srand((unsigned)time(NULL)); // 난수의 초기화
//    int rnd;
//
//
//    node *head, *temp ;
//    head = NULL;
//
//    for (int i=0; i<30; i++) {
//        rnd = rand()%99+1;  // 1~100까지의 난수를 발생
//        InputSingle(&head, &temp, rnd);
//    }
//    printf("=== 삭제 전\n");
//    Output(head);
//    
//    Delete(&head,&temp);
//    Output(head);
//
//}
//




// Question 11
// singly linked list
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//typedef struct node {
//    int classOf;
//    char name[20];
//    char kor[10];
//    char eng[10];
//    char math[10];
//    struct node *next;
//} node;
//
//
//
//void InputSingle(node **head, node **temp)
//{
//    
//    node *newnode;
//    newnode = (struct node *)malloc(sizeof(struct node));
//    newnode->next = NULL;
//    printf("학번 : ");
//    scanf("%d", &newnode->classOf);
//    printf("이름 : ");
//    scanf("%s", newnode->name);
////    printf("국어 : ");
////    scanf("%s", newnode->kor);
////    printf("영어 : ");
////    scanf("%s", newnode->eng);
////    printf("수학 : ");
////    scanf("%s", newnode->math);
//
//    if (*head == NULL) {
//        *head = newnode;
//        *temp = newnode;
//    }
//    else {
//        (*temp)->next = newnode;
//        *temp = newnode;
//    }
//}
//
//
//void Output(node *head) {
//    node *temp=head;
//    while (temp != NULL) {
//        printf("%10d", temp->classOf);
//        printf("%10s", temp->name);
////        printf("%10s", temp->kor);
////        printf("%10s", temp->eng);
////        printf("%10s\n", temp->math);
//        printf("\n");
//        temp = temp->next;
//    }
//    printf("\n");
//}
//
//
//int SinglyLength(node *head) {
//    int len=0;
//    node *temp=head;
//    while (temp != NULL) {
//        len++;
//        temp = temp->next;
//    }
//    return len;
//}
//
//
//
//void SwapSingly(node **head, node **temp) {
//    char name1[20], name2[20];
//    printf("누구와 누구를 변경할까요 ? ");
//    scanf("%s", name1);
//    scanf("%s", name2);
//    node *current1, *current2, *prevnode1, *prevnode2;
//    current1 = current2 = *head;
//    prevnode1 = prevnode2 = *head;
//    
//    
//    // 만약 첫번째 노드를 변경해야되면, 해당 노드의 prevnode에는 NULL이 들어감
//    if (strcmp((*head)->name, name1) == 0) {
//        prevnode1 = NULL;
//        current1 = *head;
//    }
//    // 첫번째 노드가 아니라면, 찾을때까지 반복
//    else {
//        while (strcmp((prevnode1->next->name) , name1 ) != 0) {
//            prevnode1 = prevnode1 -> next;
//        }
//        current1 = prevnode1->next;
//    }
//    if (strcmp((*head)->name, name2) == 0) {
//        prevnode2 = NULL;
//        current2 = *head;
//    }
//    else {
//        while (strcmp((prevnode2->next->name) , name2 ) != 0) {
//            prevnode2 = prevnode2 -> next;
//        }
//        current2 = prevnode2->next;
//    }
//    
//    
//    
//    // for 2 adjacent nodes where 첫번째 : current1, 두번째 : current2
//    if (current1->next == current2) {
//        current1->next = current2->next;
//        current2->next = current1;
//    }
//    // for 2 not adjacent nodes where 첫번째 : current1, 두번째 : current2
//    else {
//        node *temp;
//        temp = current2->next;
//        current2->next = current1->next;
//        prevnode2->next = current1;
//        current1->next = temp;
//    }
//    if (current1 == *head)
//        *head = current2;
//    else
//        prevnode1->next = current2;
//}
//
//
//
//
//void InsertSingly (node **head, node **temp) {
//    
//    node *newnode;
//    newnode = (struct node *)malloc(sizeof(struct node));
//    newnode->next = NULL;
//    printf("학번 : ");
//    scanf("%d", &newnode->classOf);
//    printf("이름 : ");
//    scanf("%s", newnode->name);
//    
//    char input[20];
//    printf("누구 앞에 넣으시겠습니까 ? ");
//    scanf("%s", input);
////    printf("국어 : ");
////    scanf("%s", newnode->kor);
////    printf("영어 : ");
////    scanf("%s", newnode->eng);
////    printf("수학 : ");
////    scanf("%s", newnode->math);
//    
//    
//    // checking if the name is in the linked list
//    node *check=*head;
//    while (check != NULL) {
//        if (strcmp(check->name, input) == 0)
//            break;
//        check = check->next;
//    }
//    if (check == NULL ) {
//        printf("리스트에 이름이 존재하지 않습니다\n");
//        return;
//    }
//
//    
//    // insert at beginning (숫자가 1이면 1앞에)
//    if (strcmp((*head)->name, input) ==  0 ) {
//        newnode->next = *head;
//        *head = newnode;
//    }
//    // insert before that input name
//    else {
//        node *current=*head;
//        while (strcmp((current->next->name), input) != 0 )
//            current = current -> next;
//        newnode->next = current->next;
//        current->next = newnode;
//    }
//}
//
//
//
//
//void DeleteSingly (node **head, node **temp) {
//    
//    char input[20];
//    printf("누구를 삭제 하시겠습니까 ? ");
//    scanf("%s", input);
//    
//    
//    
//    node *current;
//    // delete at beginning
//    if (strcmp((*head)->name, input) ==  0) {
//        current = *head;
//        *head = current->next;
//        free(current);
//    }
//    else {
//        node *current=*head;
//        while (strcmp((current->next->name), input) != 0) {
//            current = current -> next;
//
//            // checking if the name is in the linked list
//            if (current->next == NULL ) {
//                printf("리스트에 이름이 존재하지 않습니다\n");
//                return;
//            }
//        }
//        
//        // deletion of last node
//        if (current->next->next == NULL) {
//            current->next = (*temp)->next;
//            free(*temp);
//            *temp = current;
//        }
//        // deletion at that position
//        else {
//            node *nextnode;
//            nextnode = current->next;
//            current->next = current->next->next;
//            free(nextnode);
//        }
//    }
//}
//
//
//
//
////void bubbleSortSingly(node **head, node **temp) {
////    int swapped;
////    int len = SinglyLength(*head);
////    
////    for (int i = 0; i < len - 1; i++) {
////        swapped = 0;
////        node *current1 = *head;
////        node *prevnode;
////        // Inner loop for comparison and swapping
////        for (int j = 0; j < len - 1; j++) {
////            
////            printf("%d\n", i);
////            if (j==0) {
////                prevnode=NULL;
////            }
////            else {
////
////                prevnode = current1;
////                current1 = current1->next;
////            }
////            node *current2 = current1->next;
////            if (strcmp((current1->name) , (current2->name))> 0) {
////                // Swap elements
////                current1->next = current2->next;
////                current2->next = current1;
////                if (current1 == *head)  // in this case, prevnode=NULL
////                    *head = current2; // 다른부분
////                else {
////                    prevnode->next = current2; // 다른부분
////                }
////                swapped = 1;
////                current1 = current2;    // 노드를 바꿨으니 번째도 달리짐, 따라서 다시 바꿔줌
////            }
////        }
//////        If no swaps in a pass, the array is sorted
////        if (swapped == 0) {
////            break;
////        }
////    }
////}
//
//
//
//// Sorting using malloc
//void bubbleSortSingly(node **head, node **temp) {
//    int len = SinglyLength(*head);
//    
//    node *phead = *head;
//    node **k = (node **)malloc(sizeof(node*)*len);
//    
//    for (int i=0; i<len; i++) {
//        k[i] = phead;
//        phead=phead->next;
//    }
//    
//    int *p[10];
//    
//    
//    for (int i = 0; i < len - 1; i++) {
//        // Inner loop for comparison and swapping
//        for (int j = 0; j < len - 1; j++) {
//            if (strcmp(k[j]->name, k[j+1]->name) > 0) {
//                char tmp[20];
//                strcpy(tmp, k[j+1]->name);
//                strcpy(k[j+1]->name, k[j]->name);
//                strcpy(k[j]->name,tmp);
//            }
//        }
//        
//    }
//}
//
//
//
//int main()
//{
//    int choice;
//    int pos, pos1, pos2, len=0;
//    node *head, *temp ;
//    head = temp = NULL;
//
//    while (1)
//    {
//        printf("1. 입력\n");
//        printf("2. 출력\n");
//        printf("3. 검색\n");
//        printf("4. 변경\n");
//        printf("5. 삭제\n");
//        printf("6. 삽입\n");
//        printf("7. 정렬\n");
//        printf("8. 종료\n");
//        printf("==> 선택 ");
//        scanf("%d", &choice);
//        
//        if (choice == 1) {
//            InputSingle(&head, &temp);
//        }
//        else if (choice == 2) {
//            Output(head);
//        }
//        
//        else if (choice == 3) {// 이름으로 검색 -> 정보나옴, 없으면 없다고
//            
//        }
//        else if (choice == 4) { // 이름으로 검색하여 노드변경  없으면 없다고
//            SwapSingly(&head, &temp);
//        }
//        else if (choice == 5) {// 이름으로 검색 (누굴 삭제할까요), 없으면 없다고
//            DeleteSingly (&head, &temp);
//        }
//        else if (choice == 6) {    // 삽입 - 누구앞에
//            InsertSingly (&head, &temp);
//        }
//        // 이름을 기준으로 정렬
//        else if (choice == 7) {
//            printf("정렬하겠습니다\n");
//            bubbleSortSingly(&head, &temp);
//        }
//        else
//            break;
//    }
//}




// Question 12
// Doubly linked list
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//typedef struct node {
//    char name[15];
//    char phoneNum[15];
//    char birthday[10];
//    struct node *prev;
//    struct node *next;
//}node;
//
//
//
//void InputDouble(node **head, node **tail)
//{
//    
//    node *newnode;
//    newnode = (struct node *)malloc(sizeof(struct node));
//    newnode->prev = NULL;
//    newnode->next = NULL;
//    printf("이름 : ");
//    scanf("%s", newnode->name);
////    printf("전화번호 : ");
////    scanf("%s", newnode->phoneNum);
////    printf("생일 : ");
////    scanf("%s", newnode->birthday);
// 
//
//    if (*head == NULL) {
//        *head = newnode;
//        *tail = newnode;
//    }
//    else {
//        (*tail)->next = newnode;
//        newnode->prev = *tail;
//        *tail = newnode;
//    }
//}
//
//
//void OutputForward(node *head)
//{
//    node *temp=head;
//    while (temp != NULL) {
//        printf("%10s", temp->name);
////        printf("%10s", temp->phoneNum);
////        printf("%10s", temp->birthday);
//        temp = temp->next;
//        printf("\n");
//    }
//}
//
//int Length(node *head) {
//    int len=0;
//    node *temp=head;
//    while (temp != NULL) {
//        len++;
//        temp = temp->next;
//    }
//    return len;
//}
//
//void OutputBackward(node *tail)
//{
//    node *temp=tail;
//    while (temp != NULL) {
//        printf("%10s", temp->name);
////        printf("%10s", temp->phoneNum);
////        printf("%10s", temp->birthday);
//        temp = temp->prev;
//        printf("\n");
//    }
//}
//
//
//
//void InsertDouble(node **head, node **tail) {
//    
//    
//    node *newnode;
//    newnode = (struct node *)malloc(sizeof(struct node));
//    newnode->prev = NULL;
//    newnode->next = NULL;
//    printf("이름 : ");
//    scanf("%s", newnode->name);
////    printf("전화번호 : ");
////    scanf("%s", newnode->phoneNum);
////    printf("생일 : ");
////    scanf("%s", newnode->birthday);
//    char input[10];
//    printf("누구 앞에 넣으시겠습니까 ? ");
//    scanf("%s", input);
//
//
//    // checking if the name is in the linked list
//    node *check=*head;
//    while (check != NULL) {
//        if (strcmp(check->name, input) == 0)
//            break;
//        check = check->next;
//    }
//    if (check == NULL ) {
//        printf("리스트에 이름이 존재하지 않습니다\n");
//        return;
//    }
//    
//    node *temp = *head;
//    // insert at beginning (숫자가 1이면 1앞에)
//    if (strcmp((*head)->name, input) ==  0) {
//        newnode->next = *head;
//        (*head)->prev = newnode;
//        *head = newnode;
//    }
////    // insert at end
//    // 이부분 있어야되는지 물어보기 (왜냐면 앞에 입력이 아니기 때문)
//    else if (strcmp((*tail)->name, input) ==  0) { //
//        (*tail)->next = newnode;
//        newnode->prev = *tail;
//        *tail = newnode;
//    }
//    // insert at specific position
//    else {
//        while (strcmp(temp->next->name, input) != 0)
//            temp = temp -> next;
//
//        newnode->next = temp->next;
//        newnode->next->prev = newnode;
//        temp->next = newnode;
//        newnode->prev = temp;
//    }
//}
//
//
//void DeleteDouble (node **head, node **tail) {
//    char input[10];
//    printf("누구를 삭제 하시겠습니까 ? ");
//    scanf("%s", input);
//    
//    node *temp;
//    
//    // delete at beginning
//    if (strcmp((*head)->name, input) ==  0) {
//        temp = *head;
//        *head = (*head)->next;
//        (*head)->prev = temp->next;
//        free(temp);
//    }
//    // delete at end
//    else if (strcmp((*tail)->name, input) ==  0){
//        temp = *tail;
//        *tail = (*tail)->prev;
//        (*tail)->next = 0;
//        free(temp);
//    }
//    // delete at pos
//    else {
//        temp = (*head)->next;
//        while (strcmp(temp->name, input) != 0) {
//            temp = temp -> next;
//            // checking if the name is in the linked list
//            if (temp == NULL ) {
//                printf("리스트에 이름이 존재하지 않습니다\n");
//                return;
//            }
//        }
//        temp->prev->next = temp->next;
//        temp->next->prev = temp->prev;
//        free(temp);
//    }
//}
//
//
//
//// 내 노드 바꾸기 - 미완성
////void bubbleSortDouble(node **head, node **tail) {
////    int swapped;
////    node *temp;
////    int len = Length(*head);
////    
////    for (int i = 0; i < len - 1; i++) {
////        swapped = 0;
////        node *current1 = *head;
////        // Inner loop for comparison and swapping
////        for (int j = 0; j < len - 1; j++) {
////            
////            node *current2 = current1->next;
////            if (strcmp((current1->name) ,(current2->name)) > 0) {
////                // Swap elements
////                temp =current1->prev;
////                current1->next = current2->next;
////                current1->prev = current2;
////                current2->next = current1;
////                current2->prev = temp;
////                if (current1 == *head)  // in this case, prevnode=NULL
////                    *head = current2; // 다른부분
////                else {
////                    current2->prev->next = current2; // 다른부분
////                }
////                swapped = 1;
////                if (current2 == *tail)
////                    *tail = current1;
////                current1 = current2;    // 노드를 바꿨으니 번째도 달리짐, 따라서 다시 바꿔줌
////            }
////            current1 = current1->next;
////        }
////        // If no swaps in a pass, the array is sorted
////        if (swapped == 0) {
////            break;
////        }
////    }
////}
//
//
//
//
//// 선생님 노드 바꾸기
////void bubbleSortDouble(node **head, node **tail) {
////    int swapped;
////    node temp, *ptemp;
////    int len = Length(*head);
////    
////    for (int i = 0; i < len - 1; i++) {
////        swapped = 0;
////        node *current1 = *head;
////        // Inner loop for comparison and swapping
////        for (int j = 0; j < len - 1; j++) {
////          
////            node *current2 = current1->next;
////            if (strcmp((current1->name) ,(current2->name)) > 0) {
////                temp=*current1;
////                *current1=*current2;
////                *current2 = temp;
////                
////                ptemp = (current1)->prev;
////                (current1)->prev =  (current2)->prev;
////                (current2)->prev = ptemp;
////                
////                ptemp = current1->next;
////                current1->next = current2->next;
////                (current2)->next = ptemp;
////            }
////            current1 = current1->next;
////
////        }
////        
////    }
////}
//
//
//
//// Sorting using malloc
//void bubbleSortDouble(node **head, node **temp) {
//    int len = Length(*head);
//    node **k = (node **)malloc(sizeof(node*)*len);
//    
//    node *phead = *head;
//    for (int i=0; i<len; i++) {
//        k[i] = phead;
//        phead=phead->next;
//    }
//    
//    for (int i = 0; i < len - 1; i++) {
//        // Inner loop for comparison and swapping
//        for (int j = 0; j < len - 1; j++) {
//            if (strcmp(k[j]->name, k[j+1]->name) > 0) {
//                char tmp[20];
//                strcpy(tmp, k[j+1]->name);
//                strcpy(k[j+1]->name, k[j]->name);
//                strcpy(k[j]->name,tmp);
//            }
//        }
//        
//    }
//}
//
//
//
//
//
//int main()
//{
//    int choice;
//    int pos;
//    node *head, *tail ;
//    head = tail = NULL;
//
//    while (1)
//    {
//        printf("1. 입력\n");
//        printf("2. 정방향리스트\n");
//        printf("3. 역방향리스트\n");
//        printf("4. 검색(이름)\n");
//        printf("5. 삽입\n");
//        printf("6. 삭제\n");
//        printf("7. 정렬\n");
//        printf("8. 길이\n");
//        printf("9. 종료\n");
//
//        printf("==> 선택 ");
//        scanf("%d", &choice);
//        
//        if (choice == 1) {
//            InputDouble(&head, &tail);
//        }
//        else if (choice == 2) {
//            OutputForward(head);
//        }
//        
//        else if (choice == 3) {
//            OutputBackward(tail);
//        }
//        else if (choice == 4) {
//            
//        }
//        else if (choice == 5) {
//            InsertDouble(&head, &tail);
//        }
//        else if (choice == 6) {
//            DeleteDouble (&head, &tail);
//        }
////         이름을 기준으로 정렬
//        else if (choice == 7) {
//            bubbleSortDouble(&head, &tail);
//        }
//        else if (choice == 8) {
//            printf("%d",Length(head));
//        }
//        else
//            break;
//    }
//}
