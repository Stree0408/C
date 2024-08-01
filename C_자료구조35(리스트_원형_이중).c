//// 1. 원형 연결 리스트를 작성하여 봅시다.
//  고쳐서 올게요 !!!!!!!!!!!!!!!!
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef int element;
//typedef struct ListNode {
//    element data;
//    struct ListNode *link;
//}ListNode;
//
//
//ListNode *create_node(element data, ListNode *link)
//{
//    ListNode *newnode;
//    newnode = (ListNode*)malloc(sizeof(ListNode));
//    if (newnode == NULL) {
//        fprintf(stderr, "메모리 할당 에러\n");
//        exit(1);
//    }
//    newnode->data = data;
//    newnode->link = link;
//    return (newnode);
//}
//
//
//// phead: 리스트의 헤드 포인터의 포인터
//// p : 선행 노드
//// node : 삽입될 노드
//
//// insert_first(500, 700)
//void insert_first(ListNode **phead, ListNode *node) {
//    if (*phead == NULL) {
//        *phead = node;
//        node->link = node;
//    }
//    else {
//        node->link = (*phead) -> link;
//        (*phead) -> link = node;
//    }
//}
//
//
//void insert_last(ListNode **phead, ListNode *node) {
//    if (*phead == NULL) {
//        *phead = node;
//        node->link = node;
//    }
//    else {
//        node->link = (*phead)->link;
//        (*phead)->link = node;
//        *phead = node;
//    }
//}
//
//
//void display(ListNode *head)
//{
//    ListNode *p;
//    if (head == NULL) return;
//
//    p= head;
//    do {
//        printf("%d->", p->data);
//        p = p->link;
//    }while(p!= head);
//}
//
//
//int main()
//{
//    ListNode *list1 = NULL;
//
//    // list1 = 20->10->30
//    // 결과는 30->20->10-> 나오는데요????
////      1번에 insert_last는 무슨 의미인지???
//    insert_last(&list1, create_node(10, NULL));
//    insert_last(&list1, create_node(20, NULL));
//    insert_last(&list1, create_node(30, NULL));
//    insert_last(&list1, create_node(40, NULL));
//
//
////    insert_last(&list1, create_node(30, NULL));
//    display(list1);
//}







// 2. 이중 연결 리스트를 작성하여 봅시다. 
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef int element;
//typedef struct DlistNode {
//    element data;
//    struct DlistNode *llink;
//    struct DlistNode *rlink;
//}DlistNode;
//
//
//
//void init(DlistNode *phead)
//{
//    phead->llink = phead;
//    phead->rlink = phead;
//}
//
//
//// 이중 연결 리스트의 노드를 출력
//void display(DlistNode *phead)
//{
//    DlistNode *p;
//    for (p = phead->rlink; p!=phead; p=p->rlink) {
//        printf("<--- | %x | %d | %x | ---->\n", p->llink, p->data, p->rlink);   // %x for hexademicals
//    }
//    printf("\n");
//}
//
//
//// 노드 new_node를 노드 before의 오른쪽에 삽입한다.
//void dinsert_node (DlistNode *before, DlistNode *new_node)
//{
//    new_node->llink = before;
//    new_node->rlink = before->rlink;
//    before->rlink->llink = new_node;
//    before->rlink = new_node;
//}
//void dremove_node(DlistNode *phead_node, DlistNode *removed)
//{
//    if (removed == phead_node) return;
//    removed->llink->rlink = removed->rlink;
//    removed->rlink->llink = removed->llink;
//    free(removed);
//}
//
//
//int main() {
//    DlistNode head_node;
//    DlistNode *p[10];
//    int i;
//    
//    init(&head_node);
//    for (i=0; i<5; i++) {
//        p[i] = (DlistNode *) malloc(sizeof(DlistNode));
//        p[i]->data = i;
//        // 헤드 노드의 오른쪽에 삽입
//        dinsert_node(&head_node, p[i]);
//    }
//    dremove_node(&head_node, p[4]);
//    display(&head_node);
//}




// 3. 연결리스트로 다항식의 덧셈을 하는 프로그램을 작성하여 봅시다.
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct ListNode {
//    int coef;
//    int expon;
//    struct Listnode *link;
//} ListNode;
//
//typedef struct ListHeader {
//    int length;
//    ListNode *head;
//    ListNode *tail;
//} ListHeader;
//
//
//
//// 초기화 함수
//void init(ListHeader *plist) {
//    plist -> length = 0;
//    plist -> head = plist->tail = NULL;
//}
//
//
//// plist는 연결 리스트의 헤더를 가리키는 포인터, coef는 계수, expon는 지수
//void insert_node_last (ListHeader *plist, int coef, int expon)
//{
//    ListNode *temp = (ListNode *)malloc(sizeof(ListNode));
//    if (temp == NULL) {
//        fprintf(stderr, "메모리 할당 에러\n");
//        exit(1);
//    }
//    temp->coef = coef;
//    temp->expon = expon;
//    temp->link=NULL;
//    if (plist -> tail == NULL) {
//        plist->head = plist->tail = temp;
//    }
//    else {
//        plist->tail->link = temp;
//        plist->tail = temp;
//    }
//    plist->length++;
//}
////
//void poly_add (ListHeader *plist1, ListHeader *plist2, ListHeader *plist3)
//{
//    ListNode *a = plist1 -> head;
//    ListNode *b = plist2 -> head;
//    int sum;
//    while (a && b) {
//        if (a-> expon == b->expon)
//        {
//            sum = a->coef + b->coef;
//            if (sum != 0) insert_node_last(plist3, sum, a->expon);
//            a=a->link; b = b->link;
//        }
//        else if ( a-> expon > b->expon) {
//            insert_node_last(plist3, a->coef, a->expon);
//            a= a->link;
//        }
//        else {
//            insert_node_last(plist3, b->coef, b->expon);
//            b=b->link;
//        }
//    }
//    // a나 b중의 하나가 먼저 끝나게 되면 남아있는 항들을 모두
//    // 결과 다항식으로 복사
//    for (; a!= NULL; a=a->link)
//        insert_node_last(plist3, a->coef, a->expon);
//    for (; b!= NULL; b=b->link)
//        insert_node_last(plist3, b->coef, b->expon);
//}
//
//
//void poly_print(ListHeader *plist)
//{
//    ListNode *p = plist-> head;
//    for (; p; p=p->link) {
//        printf("%d %d\n", p->coef, p->expon);
//    }
//}
//
//
//int main()
//{
//    ListHeader list1, list2, list3;
//    
//    init(&list1);
//    init(&list2);
//    init(&list3);
//    
//    // 다항식 1을 생성
//    insert_node_last(&list1, 3, 12);
//    insert_node_last(&list1, 2, 8);
//    insert_node_last(&list1, 1, 0);
//    
//    // 다항식 2을 생성
//    insert_node_last(&list2, 8, 12);
//    insert_node_last(&list2, -3, 10);
//    insert_node_last(&list2, 10, 6);
//
//    // 다항식 3 = 다항식 1 + 다항식 2
//    poly_add(&list1, &list2, &list3);
////    printf("%d\n", (&list3)->length);
//    poly_print(&list3);
//}



//??? 중간에 틀린부분 있음
// 4. 연결 리스트 ADT를 구현하여 봅시다.
//#include <stdio.h>
//#include <stdlib.h>
//
//#define FALSE 0     // false will be replaced with 0
//#define TRUE 1
//
//typedef int element;
//typedef struct ListNode {
//    element data;
//    struct ListNode *link;
//} ListNode;
//typedef struct ListType{            
//    ListNode *head; // 헤드 포인터
//    int length;     // 노드의 개수
//} ListType;
//
//
//// phead : 리스트의 헤드 포인터의 포인터
//// p : 선행노드
//// new_node : 삽입될 노드
//void insert_node(ListNode **phead, ListNode *p,ListNode *new_node) {
//    if( *phead == NULL ){ // 공백리스트인 경우
//        new_node->link = NULL;
//        *phead = new_node;
//    }
//    else if( p == NULL ){ // p가 NULL이면 첫번째 노드로 삽입
//        new_node->link = *phead;
//        *phead = new_node;
//    }
//    else {   // p 다음에 삽입
//        new_node->link = p->link;
//        p->link = new_node;
//    }
//}
//
//
//
//// phead : 헤드 포인터에 대한 포인터
//// p: 삭제될 노드의 선행 노드
//// removed: 삭제될 노드
//void remove_node(ListNode **phead, ListNode *p, ListNode *removed) {
//    if( p == NULL )
//        *phead = (*phead)->link;
//    else
//        p->link = removed->link; 
//    printf("removed : %d\n",removed);   // 이거 delete_entry(&list1, 0);할때는 removed가 0임, 근데 300이 되어야하는거아님?
//    free(removed);
//}
//
//
//// 리스트를 초기화한다.
//void init (ListType *list) {
//    if (list == NULL) return;
//    list->length = 0;
//    list->head = NULL;
//}
//
//
//// 리스트안에서 pos 위치의 노드를 반환한다.
//ListNode *get_node_at(ListType *list, int pos) {
//    int i;
//    ListNode *tmp_node = list->head;
//    if( pos < 0 ) return NULL;
//    for (i=0; i<pos; i++)
//        tmp_node = tmp_node->link;
//    return tmp_node;
//}
//
//
//// 리스트의 항목의 개수를 반환한다. 
//int get_length(ListType *list)
//{
//    return list->length;
//}
////
//void error(char *message) {
//    fprintf(stderr,"%s\n",message);
//    exit(1);
//}
//
//
//// 주어진 위치에 데이터를 삽입한다.
//void add(ListType *list, int position, element data)
//{
//    ListNode *p;
//    if ((position >= 0) && (position <= list->length)) {
//        ListNode *node = (ListNode*)malloc(sizeof(ListNode));
//        if (node == NULL) error("메모리 할당에러");
//        node->data = data;
//        p = get_node_at(list, position -1);
////        get_node_at(8000, -1)
//        insert_node(&(list->head), p, node);
////        insert_node(&(NULL), 0, 100);
//        list->length++;
//    }
//}
//
//// 리스트의 끝에 데이터를 삽입한다.
//void add_last(ListType *list, element data) {
//    add(list, get_length(list), data);
//}
//// 리스트의 처음에 데이터를 삽입한다.
//void add_first(ListType *list, element data) {
//    add(list, 0, data);
//}
////
//int is_empty(ListType *list) {
//    if( list->head == NULL ) return 1;
//    else return 0;
//}
//
//// 주어진 위치의 데이터를 삭제한다.
//void delete_entry(ListType *list, int pos) {
//    if (!is_empty(list) && (pos >= 0) && (pos < list->length)){
//        ListNode *p = get_node_at(list, pos-1);
////        printf("p : %d\n", p);
//        remove_node(&(list->head),p,(p!=NULL)?p->link:NULL);
//        list->length--;
//    }
//}
////
//element get_entry(ListType *list, int pos) {
//    ListNode *p;
//    if( pos >= list->length ) error("위치 오류");
//    p = get_node_at(list, pos);
//    return p->data;
//}
////
//void Clear(ListType *list) {
//    int i;
//    for(i=0;i<list->length;i++)
//        delete_entry(list, i);
//}
//// 버퍼의 내용을 출력한다.
//void display(ListType *list) {
//    int i;
//    ListNode *node=list->head;
//    printf("( ");
//    for(i=0;i<list->length;i++){
//        printf("%d ",node->data);
//        node = node->link;
//    }
//    printf(" )\n");
//}
//
//// 데이터 값이 s인 노드를 찾는다.
//int is_in_list(ListType *list, element item) {
//    ListNode *p;
//    p = list->head; // 헤드 포인터에서부터 시작한다.
//    while( (p != NULL) ){
//        // 노드의 데이터가 item이면
//        if( p->data == item ) break;
//        p = p->link;
//    }
//    if( p == NULL) return FALSE; 
//    else return TRUE;
//} 
////
//
//
//int main()
//{
//    ListType list1;
//    
//    init(&list1);
//    add(&list1, 0, 20);
//    add_last(&list1, 30);
//    add_first(&list1, 10);
//    add_last(&list1, 40);
//    
//    
//    // list1 = (10, 20, 30, 40)
//    display(&list1);
//    
//    // list1 = (10, 20, 30)
//    delete_entry(&list1, 3);
//    display(&list1);
//    
//    // list1 = (20, 30) 
//    delete_entry(&list1, 0);
//    display(&list1);
//    
//    printf("%s\n", is_in_list(&list1, 20)==TRUE ? "성공": "실패"); 
//    printf("%d\n", get_entry(&list1, 0));
//}






// Question 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct node {
//    int company_num;
//    char name[15];
//    struct node *next;
//} node;
//
//
//
//void createCircularSingly(node **head, node **temp)
//{
//    int company_num;
//    scanf("%d", &company_num);
//    char name[15];
//    scanf("%s", name);
//    
//    
//    node *newnode = (struct node*)malloc(sizeof(struct node));
//    newnode -> company_num = company_num;
//    strcpy(newnode -> name, name);
//    newnode -> next = NULL;
//    
//    if (*head == NULL) {
//        (*head)=newnode;
//        (*temp)=newnode;
//        newnode->next = *head;
//    }
//    else {
//        (*temp)->next = newnode;
//        (*temp) = newnode;
//        newnode -> next = (*head);
//    }
//}
//
//void execution(int num, int interval, node *head)
//{
//    // 시작할 노드(이름) 찾기
//    node *current = head;
//    while (current->company_num != num) {
//        current = current -> next;
//    }
//    
//    // 건너뛸 간격에 따라서 출력
//    for (int i=0; i<5; i++) {
//        printf("%s - ", current->name);
//        for (int j=0; j<interval; j++) {
//            current =  current->next;
//        }
//    }
//    printf("\n");
//    
//}
//
//
//void display(node *head)
//{
//    node *p=head;
//    for (; p->next!=head; p=p->next) {
//        printf("%s - ", p->name);
//    }
//    printf("%s - ", p->name);
//    printf("\n");
//}
//
//
//int main()
//{
//    node *head,*temp;
//    head=temp=NULL;
//    int num, interval;
//    
//    
//    for (int i=0; i<5; i++) {
//        createCircularSingly(&head, &temp);
//    }
//    display(head);
//    while (1) {
//        printf("시작할 직원번호 : ");
//        scanf("%d", &num);
//        if (num == 0) break;
//        printf("건너뛸 간격 : ");
//        scanf("%d", &interval);
//        
//        execution(num, interval, head);
//    }
//}



// Question 2
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <string.h>
//
//
//
//typedef struct RouletteNode {
//    int bullet;//총알(1:장전, 0:없음) 
//    struct RouletteNode* next;
//}RouletteNode;
//
//typedef struct PeopleNode {
//    char name[10];
//    int die; //(살면:1 죽으면:0 )
//    struct PeopleNode* next;
//}PeopleNode;
//
//
//
////int *b = (int *)malloc(sizeof(int)*탄창갯수);
//
//// 탄창 (magazine가지고 있는)
//void createSingly(RouletteNode **rouletteHead, RouletteNode **rouletteTail)
//{
//    
//    int bullet;
//    bullet = rand()%2;    // 0~1까지의 난수를 발생
//    
//    RouletteNode *newnode;
//    newnode = (struct RouletteNode *)malloc(sizeof(struct RouletteNode));
//    newnode->bullet = bullet;
//    newnode->next = NULL;
//
//    if (*rouletteHead == NULL) {
//        *rouletteHead = newnode;
//        *rouletteTail = newnode;
//    }
//    else {
//        (*rouletteTail)->next = newnode;
//        *rouletteTail = newnode;
//    }
//}
//
//
//
//// 사람정보
//void createCircularSingly(PeopleNode **peoplHead, PeopleNode **peopleTail)
//{
//    
//    char name[20];
//    printf("이름 : ");
//    scanf("%s", name);
//    
//    
//    PeopleNode *newnode = (struct PeopleNode*)malloc(sizeof(struct PeopleNode));
//    strcpy(newnode->name, name);
//    newnode->die = 1;
//    newnode -> next = NULL;
//
//    if (*peoplHead == NULL) {
//        (*peoplHead)=newnode;
//        (*peopleTail)=newnode;
//        newnode->next = *peoplHead;
//    }
//    else {
//        (*peopleTail)->next = newnode;
//        (*peopleTail) = newnode;
//        newnode -> next = (*peoplHead);
//    }
//}
//
//
//// 탄창안의 총알들 보여주기
//void displaySingly(RouletteNode *rouletteHead) {
//    RouletteNode *temp=rouletteHead;
//    while (temp != NULL) {
//        printf("%d  ", temp->bullet);
//        temp = temp->next;
//    }
//    printf("\n");
//}
//
//
//// 이름과 생존정보 보여주기
//void displayCircularSingly(PeopleNode *peopleHead)
//{
//    PeopleNode *p=peopleHead;
//    for (; p->next!=peopleHead; p=p->next) {
//        printf("%s : %d ", p->name, p->die);
//    }
//    printf("%s : %d ", p->name, p->die);
//    printf("\n");
//}
//
//
//// 생존자 보여주기
//void displaySurvivors(PeopleNode *peopleHead)
//{
//    PeopleNode *p=peopleHead;
//    
//    printf("생존자 명단 : ");
//    for (; p->next!=peopleHead; p=p->next) {
//        if (p->die == 1)
//            printf("%s  ", p->name);
//    }
//    if (p->die == 1)
//        printf("%s - ", p->name);
//    printf("\n");
//}
//
//
//int endGame(PeopleNode *peopleHead)
//{
//    int decision=0; // 0 이면 게임 끝
//    PeopleNode *p=peopleHead;
//    
//    for (; p->next!=peopleHead; p=p->next) {
//        if (p->die == 1)
//            decision = 1;
//    }
//    if (p->die == 1)
//        decision = 1;
//    return decision;
//}
//
//
//
//
//void playRussianRoulette(RouletteNode *rouletteHead, PeopleNode *peopleHead)
//{
//    RouletteNode *rouletteTemp=rouletteHead;    // 탄창
//    PeopleNode *peopleTemp=peopleHead;          // 사람들
//    int decision;
//    
//    printf("\n\n\n\n");
//    // 탄창끝까지 돌면서, 탄창에 총알있으면 사람죽음
//    while (rouletteTemp != NULL) {
//        
//        if (peopleTemp->die == 1) {     // 살아있으면
//            displaySurvivors(peopleHead);
//            printf("빵~\n");
//            if (rouletteTemp->bullet == 1) {    // 총알 장전되어있으면
//                peopleTemp->die = 0;
//                printf("%s 는 죽었습니다 ㅠㅠ ... \n\n", peopleTemp->name);
//            }
//            else {  // 총알 장전 안되어있으면
//                printf("%s 휴~ 살았습니다 .. \n\n", peopleTemp->name);
//            }
//            rouletteTemp = rouletteTemp->next;
//            peopleTemp = peopleTemp->next;
//        }
//        else {          // 이미 죽어있으면
//            peopleTemp = peopleTemp->next;
//        }
//        // 사람이 다 죽었으면, 끝까지 돌 필요없이 게임종료
//        if ( (endGame(peopleHead)) == 0) return;
//    }
//    
//}
//
//
//
//int main()
//{
//    srand((unsigned)time(NULL));    // 난수의 초기화
//
//    RouletteNode *rouletteHead,*rouletteTail;
//    rouletteHead=rouletteTail=NULL;
//    
//    PeopleNode *peopleHead,*peopleTail;
//    peopleHead=peopleTail=NULL;
//
//    
//    int numPeople, numMagazine;
//    printf("=== 러시안 룰렛 게임 ===\n");
//    printf("참가 인원: ");
//    scanf("%d", &numPeople);
//    printf("탄창개수: ");
//    scanf("%d", &numMagazine);
//    
//    
//    // 탄창 만들기
//    for (int i=0; i<numMagazine; i++) {
//        createSingly(&rouletteHead, &rouletteTail);
//    }
//    displaySingly(rouletteHead);        // 탄창안의 총알 보여주기
//    
//    
//    for (int i=0; i<numPeople; i++) {
//        createCircularSingly(&peopleHead, &peopleTail);
//    }
////    displayCircularSingly(peopleHead);
//    
//    playRussianRoulette(rouletteHead, peopleHead);
//}




// Question 3
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//typedef struct node {
//    int data;
//    struct node *prev;
//    struct node *next;
//} node;
//
//
//
//void insertCircularDouble(node **head, node **tail)
//{
//
//    int prevData, data;
//    
//    int num;
//    printf("1.맨앞   ");
//    printf("2.중간   ");
//    printf("3.끝   :");
//    scanf("%d", &num);
//    
//    node *newnode = (struct node*)malloc(sizeof(struct node));
//    newnode -> prev = newnode -> next = NULL;
//
//    // 맨앞
//    if (num == 1 ) {
//        printf("데이터입력 : ");
//        scanf("%d", &data);
//        newnode -> data = data;
//        
//        if (*head == NULL) {
//            *head=*tail=newnode;
//            newnode->prev = newnode->next = newnode;
//        }
//        else {
//            (*head)->prev = newnode;
//            newnode->next = (*head);
//            newnode->prev = *tail;
//            (*tail)->next = newnode; 
//            *head = newnode;
//        }
//    }
//    // 중간
//    else if (num == 2) {
//        printf("누구뒤/입력데이터 : ");
//        scanf("%d%d",&prevData, &data);
//  
//        newnode -> data = data;
//        
//        
//        if (*head == NULL) {
//            *head=*tail=newnode;
//            newnode->prev = newnode->next = newnode;
//        }
//        else {
//            node *temp = (*head)->next;
//            while (temp->data != prevData) {
//                temp = temp->next;
//            }
//            newnode -> next = temp -> next;
//            newnode -> prev = temp;
//            temp->next->prev = newnode;
//            temp->next = newnode;
//        }
//    }
//    // 끝
//    else if (num == 3 ) {
//        printf("데이터입력 : ");
//        scanf("%d", &data);
//        
//        newnode -> data = data;
//        
//        if (*head == NULL) {
//            *head=*tail=newnode;
//            newnode->prev = newnode->next = newnode;
//        }
//        else {
//            newnode->prev = *tail;
//            newnode->next = *head;
//            (*tail)->next = newnode;
//            *tail = newnode;
//            (*head)->prev = *tail;
//        }
//    }
//}
//    
//    
//
//
//void deleteCircularDouble(node **head, node **tail) {
//    int data;
//    printf("삭제데이터 : ");
//    scanf("%d", &data);
//
//        
//    // 이게 말이되는건지? 왜냐면 마지막 노드 삭제하고도 헤드는 그대로 값을 가지고 있을 수 있으니까 .. ??????
//    if (*head == NULL)
//        return;
//    
//    node *p, *temp;
//    
//    
//    //    맨앞
//    if ((*head)->data == data) {
//        temp = *head;
//        *head = (*head)->next;
//        (*head)->prev = *tail;
//        (*tail)->next = *head;
//        free(temp);
//    }
//    //    맨뒤
//    else if ((*tail)->data == data){
//        temp = *tail;
//        *tail = (*tail)->prev;
//        (*tail)->next = *head;
//        (*head)->prev = *tail;
//        free(temp);
//    }
//    //    중간
//    else {
//        temp = (*head)->next;
//        while ((temp->data != data)) {
//            temp = temp -> next;
//            // checking if the name is in the linked list
//            if (temp == NULL ) {
//                printf("리스트에 데이터가 존재하지 않습니다\n");
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
//void display(node *head)
//{
//    node *p=head;
//    for (; p->next!=head; p=p->next) {
//        printf("%d - ", p->data);
//    }
//    printf("%d - ", p->data);
//    printf("\n");
//}
//
//void displayBackward(node *tail)
//{
//    node *temp=tail;
//    for (; temp->prev!=tail; temp=temp->prev) {
//        printf("%d - ", temp->data);
//    }
//    printf("%d - ", temp->data);
//    printf("\n");
//}
//
//void selectedPrint(node *head)
//{
//    int data;
//    printf("어디서부터 출력할까요? : ");
//    scanf("%d", &data);
//    
//    
//    node *p, *tmp;
//    p = head;
//    while (p->data != data) {
//        p = p->next;
//    }
//    
//    
//    tmp = p;
//    for ( ; p->next!=tmp ; p= p->next) {
//        printf("%d - ", p->data);
//    }
//    printf("%d - ", p->data);
//    printf("\n");
//
//};
//
//
//
//int main()
//{
//    node *head,*tail;
//    head=tail=NULL;
//    int input;
//
//
//    while (1) {
//        printf("1.입력  ");
//        printf("2.리스트출력  ");
//        printf("3.리스트역방향출력  ");
//        printf("4.선택한지점에서 출력  ");
//        printf("5.삭제  ");
//        printf("6.종료   =>");
//        scanf("%d", &input);
//        
//        if (input == 1) {
//            insertCircularDouble(&head,&tail);
//        }
//        else if (input == 2) {
//            display(head);
//        }
//        else if (input == 3) {
//            displayBackward(tail);
//        }
//        else if (input == 4) {
//            selectedPrint(head);
//        }
//        else if (input == 5) {
//            deleteCircularDouble(&head,&tail);
//        }
//        else
//            break;
//       }
//}
