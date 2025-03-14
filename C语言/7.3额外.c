//½Ì²ÄP180 

#include<stdio.h>
int main(){
	char str[10];
	char _new[10];
	int i=0,j=0;
	while((str[i]=getchar())!='#'){
		i++;
	}
	str[i]='\0';
	i=0;
	while(str[i]!='\0'){
		if((str[i]>='0'&&str[i]<='9')||(str[i]>='a'&&str[i]<='f')||(str[i]>='A'&&str[i]<='F')){
			_new[j]=str[i];
			j++;
		}
		i++;
	}
	 _new[j] = '\0'; 
	for(j=0;_new[j]!='\0';j++){
        putchar(_new[j]);
    }
    printf("\n");
	int num=0;
	for(i=0;str[i]!='\0';i++){
		if (_new[i] >= '0' && _new[i] <= '9') {  
            num = num * 16 + (_new[i] - '0');  
        } else if (_new[i] >= 'a' && _new[i] <= 'f') {  
            num = num * 16 + (_new[i] - 'a' + 10);  
        } else if (_new[i] >= 'A' && _new[i] <= 'F') {  
            num = num * 16 + (_new[i] - 'A' + 10);  
        }  
	}
	printf("number=%d",num);
	return 0;
}
