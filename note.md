strcmp(char *a, char *b)=0      -->相等
strncmp(char *a, char *b, n)=0  -->前n位相等
strlen(int *s)
strcpy
strncpy

int main(int argc, char *argv[]){
}

*argv --> ./a.out
*(argv+1) --> 第一个参数


FILE *fp;
char a[100];
fgets(a, 100, fp);

fputs(string, fp); (自己写\n和\0)


ch = fgetc(fp);

int ptr[10];
fwrite(ptr, sizeof(int), 10, fp); //将数组的10个整型数写入到文件中

!feof(fp) --> 结尾时候返回1
!!!
fclose(fp);

w只写 r只读 a尾部追加

十六进制长整型
scanf("%#lx");
