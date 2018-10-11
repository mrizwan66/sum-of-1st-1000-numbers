#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
 int main()
{
 int arr[1000];
int s=0;
int k;
//store numbers in array
for(int i=0;i<1000;i++)
{
arr[i]=i+1;

}
int a[10][2];
for(int i=0;i<10;i++)
pipe(a[i]);
// declare variables
int id1,id2,id3,id4,id5,id6,id7,id8,id9,id10;
//for child1

id1=fork();
if(id1==0)
{
int sum1=0;
for(int i=0;i<100;i++)
{
sum1=sum1+arr[i];
}

write(a[0][1],&sum1,sizeof(sum1));
close(a[0][1]);
}

else
{
wait(NULL);

 read(a[0][0],&k,sizeof(k));
s=s+k;
close(a[0][0]);

//for child2

id2=fork();
if(id2==0)
{
int sum2=0;
for(int i=100;i<200;i++)
{
sum2=sum2+arr[i];
}

write(a[1][1],&sum2,sizeof(sum2));
close(a[1][1]);
}


else
{
wait(NULL);

read(a[1][0],&k,sizeof(k));
s=s+k;
close(a[1][0]);
//for child3

id3=fork();
if(id3==0)
{
int sum3=0;
for(int i=200;i<300;i++)
{
sum3=sum3+arr[i];
}

write(a[2][1],&sum3,sizeof(sum3));
close(a[2][1]);
}


else
{
wait(NULL);

read(a[2][0],&k,sizeof(k));
s=s+k;
close(a[2][0]);

//for child4
id4=fork();

if(id4==0)
{
int sum4=0;
for(int i=300;i<400;i++)
{
sum4=sum4+arr[i];
}

write(a[3][1],&sum4,sizeof(sum4));

close(a[3][1]);
}

else
{
wait(NULL);

read(a[3][0],&k,sizeof(k));
s=s+k;
close(a[3][0]);

//for child5
id5=fork();

if(id5==0)
{
int sum5=0;
for(int i=400;i<500;i++)
{
sum5=sum5+arr[i];
}

write(a[4][1],&sum5,sizeof(sum5));
close(a[4][1]);
}

else
{
wait(NULL);

read(a[4][0],&k,sizeof(k));
s=s+k;
close(a[4][0]);
//for child6

id6=fork();
if(id6==0)
{
int sum6=0;
for(int i=500;i<600;i++)
{
sum6=sum6+arr[i];
}
write(a[5][1],&sum6,sizeof(sum6));
close(a[5][1]);




}


else
{
wait(NULL);

read(a[5][0],&k,sizeof(k));
s=s+k;
close(a[5][0]);
//for child7

id7=fork();
if(id7==0)
{
int sum7=0;
for(int i=600;i<700;i++)
{
sum7=sum7+arr[i];
}

write(a[6][1],&sum7,sizeof(sum7));
close(a[6][1]);


}

else
{
wait(NULL);

read(a[6][0],&k,sizeof(k));
s=s+k;
close(a[6][0]);
//for child8

id8=fork();
if(id8==0)
{
int sum8=0;
for(int i=700;i<800;i++)
{
sum8=sum8+arr[i];
}

write(a[7][1],&sum8,sizeof(sum8));
close(a[7][1]);


}

else
{
wait(NULL);

read(a[7][0],&k,sizeof(k));
s=s+k;
close(a[7][0]);
//for child9

id9=fork();
if(id9==0)
{
int sum9=0;
for(int i=800;i<900;i++)
{
sum9=sum9+arr[i];
}
write(a[8][1],&sum9,sizeof(sum9));
close(a[8][1]);

}

else
{
wait(NULL);

read(a[8][0],&k,sizeof(k));
s=s+k;
close(a[8][0]);

//for child10
id10=fork();
if(id10==0)
{
int sum10=0;
for(int i=900;i<1000;i++)
{
sum10=sum10+arr[i];
}
write(a[9][1],&sum10,sizeof(sum10));
close(a[9][1]);
}

else
{
wait(NULL);
read(a[9][0],&k,sizeof(k));
s=s+k;
close(a[9][0]);

printf("Sum of 1st 1000 numbers: %d\n",s);
}
}
}
}
}
}
}
}
}
}
return 0;
}
