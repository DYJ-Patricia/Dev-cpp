//ָ�������������ַ��� 
/*#include<stdio.h>
#include<string.h>
void fsort(const char*color[],int n);
int main() {
	int i;
	const char*pcolor[5]={"red","blue","yellow","green","black"};
	fsort(pcolor,5);
	for(i=0;i<5;i++){
		printf("%s",pcolor[i]);
		printf(" ");
	}
	return 0;
}
void fsort(const char*color[],int n){
	int k,j;
	const char*temp;
	for(k=1;k<n;k++){
		for(j=0;j<n-k;j++){
			if(strcmp(color[j],color[j+1])>0){
				temp=color[j];
				color[j]=color[j+1];
				color[j+1]=temp;
			}
		}
	}
}

//���������
#include<stdio.h>
void fsort(int a[],int n);
int main(){
	int i;
	int a[5]={6,5,2,8,1};
	fsort(a,5);
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	return 0;
} 
void fsort(int a[],int n){
	int k,j;
	int temp;
	for(k=1;k<n;k++){
		for(j=0;j<n-k;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}


//Ӣ�Ĳ�ͷʫ 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int i,n=0;
	char *poem[20],str[80],mean[20];
	gets(str);
	while(str[0]!='#'){
		poem[n]=(char *)malloc(sizeof(char)*(strlen(str)+1));
		strcpy(poem[n],str);
		n++;
		gets(str);
	}
	for(i=0;i<n;i++){
		mean[i]=*poem[i];
		free(poem[i]);
	}
	mean[i]='\0';
	puts(mean);
	return 0;
}
*/

//ָ���������
 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct card{
	int suit;  // ��ɫ��0-3 ��Ӧ Hearts, Diamonds, Clubs, Spades��
    int face;  // ������0-12 ��Ӧ A, K, Q, ..., 2��
};
void deal(struct card *wdeck) {
    int i, m, t;
    static int temp[52] = {0}; // ��¼�Ƿ��Ѿ��������
    srand(time(NULL)); // ��ʼ�����������

    for (i = 0; i < 52; i++) {
        // ����һ��0-51���������ȷ��ÿ�η��������Ψһ��
        while (1) {
            m = rand() % 52;
            if (temp[m] == 0) { // ��������ƻ�û�б�����
                break; // �˳�ѭ������������������
            }
        }
        temp[m] = 1; // ����������ѷ���

        // ���㽫�����Ʒ��䵽 `wdeck` ��λ��
        t = (i % 4) * 13 + (i / 4); // ����˳��Ϊÿ��������ηֵ�13����
        wdeck[t].suit = m / 13; // ��ɫ��0-3��
        wdeck[t].face = m % 13; // ������0-12��
    }
}
int main(void) {
    int i;
    struct card deck[52]; // ����һ������52���Ƶ�����
    const char *suit[] = {"Heart", "Diamond", "Club", "Spade"}; // ��ɫ����
    const char *face[] = {"A", "K", "Q", "J", "10", "9", "8", "7", "6", "5", "4", "3", "2"}; // ��������

    deal(deck); // ���ú�����52���Ʒ����4�����

    // ��ӡÿ����ҵ���
    for (i = 0; i < 52; i++) {
        if (i % 13 == 0) { // ÿ13�����л�����һ�����
            printf("player %d:\n", i / 13 + 1);
        }
        // ��ӡ�Ƶĵ����ͻ�ɫ
        printf("%s of %s\n", face[deck[i].face], suit[deck[i].suit]);
    }
    return 0;
}













