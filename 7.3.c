//凯撒密码
/* 
#include<stdio.h>
int main(){
	char str[80];
	int offset,i=0;
	printf("Input the string:");
	while((str[i]=getchar())!='\n'){
		i++;
	}
	str[i]='\0';
	printf("Input the offset:");
	scanf("%d",&offset);
	if(offset>=26){
		offset%=26;
	}
	for(i=0;str[i]!='\0';i++){
		if(str[i]>='A'&&str[i]<='Z'){
			if(str[i]-'A'+offset<26){
				str[i]=str[i]+offset;
			}else{
				str[i]=str[i]+offset-26;
			}
		}else if(str[i]>='a'&&str[i]<='z'){
			if(str[i]-'a'+offset<26){
				str[i]=str[i]+offset;
			}else{
				str[i]=str[i]+offset-26;
			}
		}
	}
	for(i=0;str[i]!='\0';i++){
		putchar(str[i]);
	}
	printf("\n");
	return 0;
}
*/

//凯撒密码加大小写转换 
/*
#include<stdio.h>
int main(){
    int i=0;
    char str[1000];
    while((str[i]=getchar())!='\n'){
        i++;
    }
    str[i]='\0';
    for(i=0;str[i]!='\0';i++){
        if(str[i]>='A'&&str[i]<='Z'){
            str[i]=str[i]+'a'-'A';
            if(str[i]-'a'+1<26){
                str[i]=str[i]+1;
            }else{
                str[i]=str[i]+1-26;
            }
        }else if(str[i]>='a'&&str[i]<='z'){
            str[i]=str[i]-'a'+'A';
            if(str[i]-'A'+1<26){
                str[i]=str[i]+1;
            }else{
                str[i]=str[i]+1-26;
            }
        }
    }
    for(i=0;str[i]!='\0';i++){
        putchar(str[i]);
    }
    return 0;
}
*/

/*
#include <stdio.h>  
#include <ctype.h>  

int main() {  
    char str[1000]; // 定义一个足够大的字符数组来存储输入字符串  
    fgets(str, sizeof(str), stdin); // 读取一行输入  

    int i = 0;  
    int inWord = 0; // 标记是否在单词中  

    while (str[i] != '\0') {  
        // 如果当前字符是字母并且不在单词中，则标记为在单词中并将其转为大写  
        if (isalpha(str[i])) {  
            if (!inWord) {  
                str[i] = toupper(str[i]); // 首字母大写  
                inWord = 1; // 更新状态为在单词中  
            }  
        } else {  
            inWord = 0; // 遇到非字母字符，更新状态为不在单词中  
        }  
        i++;  
    }  

    printf("%s", str); // 输出处理后的字符串  
    return 0;  
}



#include <stdio.h>  

int main() {  
    char str[100]; // 假设输入的字符最多为99个，加上结束符  
    int i = 0;  

    // 读入一行字符  
    fgets(str, sizeof(str), stdin);  

    // 处理每个字符  
    while (str[i]) {  
        // 检查是否是第一个字符或前一个字符是空格  
        if (i == 0 || str[i - 1] == ' ') {  
            // 将首字母转换为大写  
            if (str[i] >= 'a' && str[i] <= 'z') {  
                str[i] = str[i] - 'a' + 'A';  
            }  
        }  
        i++;  
    }  

    // 输出结果  
    printf("%s", str);  

    return 0;  
}

*/


#include<stdio.h>
int main(){
    char str[1000];
    int i=0;
     fgets(str, sizeof(str), stdin);
    while(str[i]){
        if(i==0||str[i-1]==' '){
            if(str[i]>='a'&&str[i]<='z'){
                str[i]=str[i]-'a'+'A';
            }
        }
        i++;
    }
    printf("%s",str);
    return 0;
}

//实现fgets(str, sizeof(str), stdin);整行输入 

#include <stdio.h>  

void my_fgets(char *str, int size, FILE *stream) {  
    int ch;  
    int i = 0;  

    // 读取字符，直到达到指定大小或遇到换行符或文件结束符  
    while (i < size - 1 && (ch = fgetc(stream)) != EOF) {  
        str[i++] = (char)ch;  // 将读取的字符存入字符串  

        // 如果遇到换行符，停止读取  
        if (ch == '\n') {  
            break;  
        }  
    }  

    // 如果读取了字符，添加字符串结束符  
    if (i < size) {  
        str[i] = '\0';  
    } else {  
        // 如果字符串已满，没有空间添加结束符  
        str[size - 1] = '\0';  
    }  
}  

int main() {  
    char buffer[100];  
    
    printf("请输入一个字符串: ");  
    my_fgets(buffer, sizeof(buffer), stdin);  
    
    printf("您输入的字符串是: %s", buffer);  
    
    return 0;  
}




