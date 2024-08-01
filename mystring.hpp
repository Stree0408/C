// 헤더안에 헤더파일 불러와서 쓸 수 있음??? 

int Mystrlen(char *str1);
void Mystrreverse(char *str1);
void Mynospace(char *str1);
void myStrcat(char *ap, char *bp);
void myStrcpy(char *ap, char *bp);
void myStrncpy(char *ap, char *bp, int n);

int MyStrcmp(char *ap, char *bp);
int MyStricmp(char *ap, char *bp);
int MyStrincmp(char *ap, char *bp, int n);
void Mysearch(char *ap, char *bp);
int Mysearch2(char *ap, char *bp);
void MyStrChange(char *ap, char *bp, char *cp);
void MyStrCat(char *ap, char *bp, char*cp, char *dp);
void MyStrCalculation(char *ap, char *bp, char *cp);




// 20
void MyStrCalculation(char *ap, char *bp, char *cp)     // ap=M, bp=num1, cp=num2
{
    char *ap2=ap;   // !!!
    Mystrreverse(bp);   // 애초에 null을 건들이지않고 순서를 뒤바꿈
    Mystrreverse(cp);


    int i;
    int tmp=0;
    
    for (i=0;  ; i++)
    {
        if (*bp == '\0' && *cp=='\0')
            break;
        
        if (*bp != '\0' && *cp!='\0')
        {
            *ap++ = tmp + *bp++ - '0' + *cp++;    // tmp=반올림하는 숫자, 여기서 bp랑 cp가 늘어나서 else if를 안쓰고 if를 쓰면 다음 문장에 지장이감
        }
        
        else if (*bp == '\0' && *cp!='\0')
        {
            *ap++ = tmp + *cp++;
        }

        else if (*bp != '\0' && *cp=='\0')
        {
            *ap++ = tmp + *bp++;
        }
//        printf("%c\n", ap[-1]);
        if (ap[-1] > 57)
        {
            ap[-1] -= 10;
            tmp=1;
        }
        else
            tmp=0;
    }
    if (tmp > 0)
    {
        *ap = 48 + tmp;
    }
   Mystrreverse(ap2);   // ap++ 하니까 ap가 가지고있는 주소값이 계속 바뀜, 그러니 ap2에 미리 받아놓고 ap2 사용
}




// 19
void MyMultiStrCat(char *ap, char *bp, char*cp, char*dp)
{
    myStrcpy(ap, bp);
    myStrcat(ap, " ");      // 꼭 쌍따움표여야 됨
    myStrcat(ap, cp);
    myStrcat(ap, " ");
    myStrcat(ap, dp); 
}




// 17
void MyStrChange(char *ap, char *bp, char *cp)  // ap=M, bp=find, cp=change
{
    int i,j;
    char tmp[50]={0};
    int num=0;
    int len_change = Mystrlen(cp);
    char last[50];
    

    for (i=0;  ; i++)
    {
        if (*ap == 32 || *ap == '\0')
        {
            tmp[num] = '\0';
            int len_tmp = Mystrlen(tmp);
            if (MyStrcmp(bp, tmp) == 0)
            {
                myStrcpy(last, cp);
                myStrcat(last, ap);
                ap-= len_tmp;
                myStrcpy(ap, last);
            }
            if (*ap == '\0')
                break;
            num=0;
            ap++; continue;
        }
        tmp[num++] = *ap;
        ap++;
    }
}




// 16 
int Mysearch2(char *ap, char *bp)
{
    int i,j;
    int len_M = Mystrlen(ap);
    char tmp[]={0};
    int num=0;
    int cnt=0;
    
    for (i=0;  ; i++)
    {
        if (*ap == 32 || *ap == '\0')
        {
            tmp[num] = '\0';
//            puts(tmp);
            if (MyStrcmp(bp, tmp) == 0)
            {
                cnt++;
            }
            if (*ap == '\0')
                break;
            num=0;
            ap++; continue;
        }
        tmp[num++] = *ap;
        ap++;
    }
    return cnt; 
}



// 15
void Mysearch(char *ap, char *bp)
{
    int i,j;
    int len_M = Mystrlen(ap);
    char tmp[]={0};
    int num=0;
    
    for (i=0;  ; i++)
    {
        if (*ap == 32 || *ap == '\0')
        {
            tmp[num] = '\0';
//            puts(tmp);
            if (MyStrcmp(bp, tmp) == 0)
            {
                printf("존재합니다\n"); break;
            }
            if (*ap == '\0')
            {
                printf("%s가 존재하지 않습니다\n", bp);  break;
            }
            num=0;
            ap++; continue;
        }
        tmp[num++] = *ap;
        ap++;
    }
}





int MyStrincmp(char *ap, char *bp, int n)   // if뒤에 return이 있으면 어떤 조건에서도 return 되는게 아닐 수 있으니까 Non-void function does not return a value in all control paths 에러뜸
{
    int i;
    int r=0;
    for (i=0; i<n; i++)
    {
        char a = *(ap+i), b = *(bp+i);
        if (a>=65 && a <= 90)
            a += 32;
        if (b>=65 && b <= 90)
            b += 32;
        
        if (a > b)
        {
            r = 1; break;
        }
        if (a < b)
        {
            r = -1; break;
        }
    }
    if (i == n)
        r = 0;
    return r;
}




// 13 
int MyStricmp(char *ap, char *bp)
{
    while (1)
    {
        char a = *ap, b = *bp;
        if (a>=65 && a <= 90)
            a += 32;
        if (b>=65 && b <= 90)
            b += 32;
        
        if (a == '\0' && b== '\0')
            return 0;
        if (a > b)
            return 1;
        if (a < b)
            return -1;
        ap++; bp++;
    }
}



// 12
int MyStrcmp(char *ap, char *bp)
{
    while (1)
    {
        if (*ap == '\0' && *bp== '\0')
            return 0;
        if (*ap > *bp)
            return 1;
        if (*ap < *bp)
            return -1;
        ap++; bp++;
    }
    return 0;
}



// 10
void myStrncpy(char *ap, char *bp, int n)
{
    for (int i=0; i<n; i++)
    {
        *(ap+i) = *(bp+i);
    }
}


// 9
void myStrcpy(char *ap, char *bp)
{
    int len = Mystrlen(bp);
    for (int i=0; i<=len; i++)
    {
        *(ap+i) = *(bp+i);
    }
}



// 8
void myStrcat(char *ap, char *bp)
{
    int len1 = Mystrlen(ap);
    int len2 = Mystrlen(bp);

    for (int i=0; i<=len2; i++)    // null도 포함시키고싶음
    {
        *(ap+len1+i) = *(bp+i);     
    }
}



// 7
void Mynospace(char *str1)  
{
    int n1=0, n2=0;     // n1 = 글자갯수, n2 = 문자갯수
    int len = Mystrlen(str1);
    for (int i=0; i<=len; i++)     // null까지 포함시키려고 
    {
        if (str1[n2] != 32)     // 32 = space
        {
            str1[n1] = str1[n2];
            n1++;
        }
        n2++;
    }
}



// 6
void Mystrreverse(char *str1)
{
    int len = Mystrlen(str1);
    char tmp;
    for (int i=0; i<len/2; i++)
    {
        tmp =  *(str1+i);
        *(str1+i) = *(str1+len-1-i);
        *(str1+len-1-i) = tmp;
    }
}


// 5
int Mystrlen(char *str1)
{
    int cnt=0;
    while (str1[cnt] != '\0')
        cnt++;
    return cnt;
}
