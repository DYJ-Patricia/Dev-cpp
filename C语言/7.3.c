//��������
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

//��������Ӵ�Сдת�� 
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
    char str[1000]; // ����һ���㹻����ַ��������洢�����ַ���  
    fgets(str, sizeof(str), stdin); // ��ȡһ������  

    int i = 0;  
    int inWord = 0; // ����Ƿ��ڵ�����  

    while (str[i] != '\0') {  
        // �����ǰ�ַ�����ĸ���Ҳ��ڵ����У�����Ϊ�ڵ����в�����תΪ��д  
        if (isalpha(str[i])) {  
            if (!inWord) {  
                str[i] = toupper(str[i]); // ����ĸ��д  
                inWord = 1; // ����״̬Ϊ�ڵ�����  
            }  
        } else {  
            inWord = 0; // ��������ĸ�ַ�������״̬Ϊ���ڵ�����  
        }  
        i++;  
    }  

    printf("%s", str); // ����������ַ���  
    return 0;  
}



#include <stdio.h>  

int main() {  
    char str[100]; // ����������ַ����Ϊ99�������Ͻ�����  
    int i = 0;  

    // ����һ���ַ�  
    fgets(str, sizeof(str), stdin);  

    // ����ÿ���ַ�  
    while (str[i]) {  
        // ����Ƿ��ǵ�һ���ַ���ǰһ���ַ��ǿո�  
        if (i == 0 || str[i - 1] == ' ') {  
            // ������ĸת��Ϊ��д  
            if (str[i] >= 'a' && str[i] <= 'z') {  
                str[i] = str[i] - 'a' + 'A';  
            }  
        }  
        i++;  
    }  

    // ������  
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

//ʵ��fgets(str, sizeof(str), stdin);�������� 

#include <stdio.h>  

void my_fgets(char *str, int size, FILE *stream) {  
    int ch;  
    int i = 0;  

    // ��ȡ�ַ���ֱ���ﵽָ����С���������з����ļ�������  
    while (i < size - 1 && (ch = fgetc(stream)) != EOF) {  
        str[i++] = (char)ch;  // ����ȡ���ַ������ַ���  

        // ����������з���ֹͣ��ȡ  
        if (ch == '\n') {  
            break;  
        }  
    }  

    // �����ȡ���ַ�������ַ���������  
    if (i < size) {  
        str[i] = '\0';  
    } else {  
        // ����ַ���������û�пռ���ӽ�����  
        str[size - 1] = '\0';  
    }  
}  

int main() {  
    char buffer[100];  
    
    printf("������һ���ַ���: ");  
    my_fgets(buffer, sizeof(buffer), stdin);  
    
    printf("��������ַ�����: %s", buffer);  
    
    return 0;  
}




