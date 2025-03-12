/*#include <stdio.h>
struct student {
	int num;
	char name[10];
	int computer,math,english;
	double average;
};
int main (void) {
	int i, n;
	struct student max,stu;
	printf("Input n:");
	scanf("%d",&n);
	printf("Input the student's number,name and course scores\n");
	for(i=1;i<=n;i++) {
		printf("No.%d:",i);
		scanf( "%d%s%d%d%d",&stu.num, &stu.name, &stu.computer, &stu.math, &stu.english );
		stu.average=(stu.computer+stu.math+stu.english)/3;
		if(i==1) {
			max=stu;
		} else if(max.average<stu.average) {
			max=stu;
		}
	}
	printf("num:%d, name:%s, average:%.2lf\n",max.num,max.name,max.average);
	return 0;
}*/



//加上地址的嵌套结构如下 
/* 
#include <stdio.h>

struct address {
    char city[10];
    char street[10];
    int code;
    int zip;
};

struct student {
    int num;
    char name[10];
    struct address addr;
    int computer, math, english;
    double average;
};

int main(void) {
    int i, n;
    struct student max, stu;

    printf("Input n: ");
    scanf("%d", &n);

    printf("Input the student's number, name and course scores\n");
    printf("Input the student's city, street, code, zip\n");

    for (i = 1; i <= n; i++) {
        printf("No.%d:\n", i);
        scanf("%d %s %d %d %d %s %s %d %d",
              &stu.num, stu.name, &stu.computer, &stu.math, &stu.english,
              stu.addr.city, stu.addr.street, &stu.addr.code, &stu.addr.zip);

        stu.average = (double)(stu.computer + stu.math + stu.english) / 3;

        if (i == 1 || max.average < stu.average) {
            max = stu;
        }
    }

    printf("num: %d, name: %s, average: %.2lf, city: %s, street: %s, code: %d, zip: %d\n",
           max.num, max.name, max.average, max.addr.city, max.addr.street, max.addr.code, max.addr.zip);

    return 0;
}*/


//运用选择排序法的学生成绩排序如下(结构数组） 
 
/* #include<stdio.h>
 struct student {
 	int num;
 	char name[10];
 	int computer,english,math;
 	double average;
 };
 int main (void) {
 	int i,j,index,n;
 	struct student students[50],temp;
 	printf("Input n:");
 	scanf("%d",&n);
 	for (i=0;i<n;i++) {
 		printf("No.%d",i+1);
 		printf("number:");
 		scanf("%d",&students[i].num);
 		printf("name:");
 		scanf("%s",students[i].name);
 		printf("computer,english,math:");
 		scanf("%d %d %d",&students[i].computer,&students[i].english,&students[i].math);
 		students[i].average=(students[i].computer + students[i].math + students[i].english) / 3;
 		
	 }
	 for (i=0;i<n-1;i++) {
	 	index=i;
	 	for(j=i+1;j<n;j++) {
	 		if(students[j].average>students[index].average) {
	 			index=j;
			 }
		 }
		 temp=students[index];
		 students[index]=students[i];
		 students[i]=temp;
		 
	 }
	 printf("num\t name\t average\n");
	 for (i=0;i<n;i++) {
	 	printf("%d\t %s\t %.2lf\n",students[i].num,students[i].name,students[i].average);
	 }
	 return 0;
 }*/
 
 
 //修改学生成绩如下（结构指针）
/* #include<stdio.h>
 struct student {
 	int num;
 	char name[10];
 	int computer,english,math;
 	double average;
 };
 int update_score(struct student *p, int n, int num,int course,int score);
 int main(void) {
 struct student students[50];
 int course,i,n,num,pos,score;
    printf("Input n:");
 	scanf("%d",&n);
 	for (i=0;i<n;i++) {
 		printf("No.%d",i+1);
 		printf("number:");
 		scanf("%d",&students[i].num);
 		printf("name:");
 		scanf("%s",students[i].name);
 		printf("computer,english,math:");
 		scanf("%d %d %d",&students[i].computer,&students[i].english,&students[i].math);		
	 }
	 
	 printf("Input the number of the students to be updated:");
	 scanf("%d",&num);
	 printf("choice the course:1.math 2.english 3.computer:");
	 scanf("%d",&course);
	 printf("Input the new score:");
	 scanf("%d",&score);
	 
	 pos=update_score( students,  n,  num,course, score);
	 
	 if (pos==-1) {
	 	printf("Not found!\n");
	 } else {
	 	printf("After update:\n");
	 	printf("num\t math\t english\t computer\n");
	 	printf("%d\t %d\t %d\t %d\n",students[pos].num,students[pos].math,students[pos].english,students[pos].computer);
	 }
	 return 0;
	 
}

int update_score(struct student *p,int n,int num,int course,int score) {
	int i,pos;
	for(i=0;i<n;i++,p++) {
		if(p->num==num)break;
	}
	if(i<n) {
		switch(course) {
			case 1:p->math=score;break;
			case 2:p->english=score;break;
			case 3:p->computer=score;break;
		}
		pos=i;
	} else {
		pos=-1;
	}
	return pos;
}*/
 //分界线 
 
/* #include <stdio.h>

struct student {
    int num;
    char name[10];
    int computer, english, math;
    double average;
};

int update_score(struct student *p, int n, int num, int course, int score);

int main(void) {
    struct student students[50];
    int course, i, n, num, pos, score;
    
    printf("Input n: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("No.%d\n", i + 1);
        printf("number: ");
        scanf("%d", &students[i].num);
        
        printf("name: ");
        scanf("%s", students[i].name);
        
        printf("computer, english, math: ");
        scanf("%d %d %d", &students[i].computer, &students[i].english, &students[i].math);        
    }

    printf("Input the number of the student to be updated: ");
    scanf("%d", &num);

    printf("Choose the course: 1.math 2.english 3.computer: ");
    scanf("%d", &course);

    printf("Input the new score: ");
    scanf("%d", &score);

    pos = update_score(students, n, num, course, score);

    if (pos == -1) {
        printf("Not found!\n");
    } else {
        printf("After update:\n");
        printf("num\tmath\tenglish\tcomputer\n");
        printf("%d\t%d\t%d\t%d\n", students[pos].num, students[pos].math, students[pos].english, students[pos].computer);
    }

    return 0;
}

int update_score(struct student *p, int n, int num, int course, int score) {
    int i, pos = -1;

    for (i = 0; i < n; i++, p++) {
        if (p->num == num) {
            switch (course) {
                case 1: p->math = score; break;
                case 2: p->english = score; break;
                case 3: p->computer = score; break;
                default: printf("Invalid course!\n"); return -1;
            }
            pos = i;
            break;
        }
    }

    return pos;
}
*/

/*#include <stdio.h>
struct students {
	char names[20];
	int average_score;
	int class_score;
	char cadre;
	char west_province;
	int paper;
	int money;	
};
int main (void) {
	int N , i;
	struct students students[100], max;
	int total=0;
	printf("Input N:");
	scanf("%d",&N);
	for (i=0;i<N;i++) {
		printf("Input the student'name,average final score and class score:\n");
        printf("If is a cadre/from west provinces or not:\n");
        printf("Input the number of papers:\n");
        scanf("%s %d %d %c %c %d",students[i].names,&students[i].average_score,&students[i].class_score,&students[i].cadre,&students[i].west_province,&students[i].paper);
        students[i].money=0;
        if (students[i].average_score>80 && students[i].paper>=1) {
        	students[i].money+=8000;
		}
		if (students[i].average_score>85 && students[i].class_score>80) {
			students[i].money+=4000;
		}
		if (students[i].average_score>90) {
			students[i].money+=2000;
		}
		if (students[i].average_score>85 && students[i].west_province=='Y') {
			students[i].money+=1000;
		}
		if (students[i].class_score>80 && students[i].cadre=='Y') {
			students[i].money+=850;
		}
		if (i == 0 || max.money < students[i].money) {
                       max = students[i];
               }
		total+=students[i].money;
	}
    printf("%s\n",max.names);
    printf("%d\n",max.money);
    printf("%d\n",total);
    return 0;
}*/
//求最小公倍数 
/*#include <stdio.h>
	int hahaha(int a, int b) {
		while (b != 0) {
			int c=b;
			b=a%b;
			a=c;
		}
		return a;
	}
int main () {
	int x,y;
	while(scanf("%d %d" , &x,&y)!=EOF) {
		printf("%d",(x*y)/hahaha(x, y));
	}
	return 0;
}*/
//废段 
/*#include <stdio.h>
int main () {
	int n,i,sum;
    scanf("%d",n);
    char *a[n];
    for(i=0;i<n;i++) {
	  scanf("%d",a[i]);
    }
    sum=0;
    
}
int hahaha(int n) {
	int lalala;
	char *a[n];
	if(n==1) {
		lalala=0
	} else {
		lalala=a[n]+lalala(a[n-1]);
	}
	return lalala;
}*/
//求数两两相乘的积的和 
#include <stdio.h>
int main () {
    int n,i,a;
    long S;
    scanf("%d",&n);
    long sum1=0,sum2=0;
    for (i=0;i<n;i++) {
    	scanf("%d",&a);
    	sum1+=a*a;
    	sum2+=a;
	}
	S=(sum2*sum2-sum1)/2;
	printf("%ld\n",S);
	return 0;
}

/*#include <stdio.h>
int main ()
{
	int x;
	scanf("%d",&x);
	int mask=1;
	int t = x; 
	while (t>9) {
		t/=10;
		mask *=10;
	} 
		int d=x/mask;
		printf("%d",d);
		x %=mask;
	printf("\n");
	return 0;
}*/

/*#include <stdio.h>
int fan_si_le (int x) {
	int mask=1;
	int t = x; 
	while (t>9) {
		t/=10;
		mask *=10;
	} 
		int d=x/mask;
		return d;
}
int main () {
	int n, i, max;
	int a[20];
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
		max=fan_si_le(a[0]);
		if (max<fan_si_le(a[i])) {
			max=fan_si_le(a[i]);
		}
	}
  return 0;	
}*/
/* 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_N 20      // 最大的数字个数
#define MAX_LEN 11    // 单个数字的最大长度，10^9 最多有 10 位

// 自定义比较函数，用于实现 n+m > m+n 的排序规则
int compare(const void *a, const void *b) {
    char ab[MAX_LEN * 2], ba[MAX_LEN * 2];
    // 拼接 a+b 和 b+a
    sprintf(ab, "%s%s", (char *)a, (char *)b);
    sprintf(ba, "%s%s", (char *)b, (char *)a);
    // 比较 ab 和 ba 的字典序，逆序排序
    return strcmp(ba, ab);
}

int main() {
    int n;
    char numbers[MAX_N][MAX_LEN];  // 用于存储每个数字的字符串形式

    // 读入数字个数
    scanf("%d", &n);

    // 读入每个数字并存储为字符串
    int i;
    for ( i = 0; i < n; i++) {
        scanf("%s", numbers[i]);
    }

    // 使用 qsort 函数进行排序
    qsort(numbers, n, sizeof(numbers[0]), compare);

    // 输出排序后的字符串拼接结果
    for (i = 0; i < n; i++) {
        printf("%s", numbers[i]);
    }
    printf("\n");

    return 0;
}*/






