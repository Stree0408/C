void MyUpper(char *str1);
int Mystrlen(char *str1);
void Mystrreverse(char *str1);




//void Mystrreverse(char *str1)
//{
//    int len = Mystrlen(str1);
//}



int Mystrlen(char *str1)
{
    int cnt=0;
    while (*str1 != '\0')
    {
        cnt++; str1++;
    }
    return cnt;
}



void MyUpper(char *str1)
{
    if (*str1 >= 97 && *str1 <= 122)
    {
        *str1 -= 32;
    }
}




