//指针数组操作多个字符串 
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

//简单数组对照
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


//英文藏头诗 
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

//指针随机发牌
 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct card{
	int suit;  // 花色（0-3 对应 Hearts, Diamonds, Clubs, Spades）
    int face;  // 点数（0-12 对应 A, K, Q, ..., 2）
};
void deal(struct card *wdeck) {
    int i, m, t;
    static int temp[52] = {0}; // 记录是否已经分配该牌
    srand(time(NULL)); // 初始化随机数种子

    for (i = 0; i < 52; i++) {
        // 生成一个0-51的随机数，确保每次分配的牌是唯一的
        while (1) {
            m = rand() % 52;
            if (temp[m] == 0) { // 如果这张牌还没有被分配
                break; // 退出循环，继续分配这张牌
            }
        }
        temp[m] = 1; // 标记这张牌已分配

        // 计算将这张牌分配到 `wdeck` 的位置
        t = (i % 4) * 13 + (i / 4); // 分配顺序为每个玩家依次分到13张牌
        wdeck[t].suit = m / 13; // 花色（0-3）
        wdeck[t].face = m % 13; // 点数（0-12）
    }
}
int main(void) {
    int i;
    struct card deck[52]; // 定义一个包含52张牌的数组
    const char *suit[] = {"Heart", "Diamond", "Club", "Spade"}; // 花色数组
    const char *face[] = {"A", "K", "Q", "J", "10", "9", "8", "7", "6", "5", "4", "3", "2"}; // 点数数组

    deal(deck); // 调用函数将52张牌分配给4个玩家

    // 打印每个玩家的牌
    for (i = 0; i < 52; i++) {
        if (i % 13 == 0) { // 每13张牌切换到下一个玩家
            printf("player %d:\n", i / 13 + 1);
        }
        // 打印牌的点数和花色
        printf("%s of %s\n", face[deck[i].face], suit[deck[i].suit]);
    }
    return 0;
}













