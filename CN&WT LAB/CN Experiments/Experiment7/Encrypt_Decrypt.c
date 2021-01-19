#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int a,b,n,t,f,e[100],d[100],temp[100],i,j,pt,ct,k,len;
char m[100],en[100],msg[100];
int isPrime(long int n) {
    j = sqrt(n);
	for (int i = 2;i <= sqrt(n);i++) {
		if(n % i == 0)
		    return 0;
	}
	return 1;
}

int cd(int x) {
	int k = 1;
	while(1) {
		k = k + t;
		if(k % x == 0)
		    return(k / x);
	}
}

void ce() {
	int k;
	k = 0;
	for(int i = 2;i < t;i++) {
		if(t % i == 0)
		    continue;
		f = isPrime(i);
		if(f == 1 && i != a && i != b) {
			e[k] = i;
			f = cd(e[k]);
			if(f > 0) {
				d[k] = f;
				k++;
			}
			if(k == 99)
                break;
		}
	}
}


void main() {
	printf("Enter first prime number\n");
	scanf("%d",&a);
	f = isPrime(a);
	if(f == 0) {
		printf("Wrong Input\n");
		exit(1);
	}
	printf("Enter another prime number\n");
	scanf("%d",&b);
	f = isPrime(b);
	if(f == 0 || a == b) {
		printf("Wrong Input\n");
		exit(1);
	}
	printf("Enter the message\n");
	scanf("%s",msg);
	for(int i = 0;msg[i] != '\0';i++)
	m[i] = msg[i];
	n = a * b;
	t = (a - 1) * (b - 1);
	ce();
	printf("Possible values of a and e are\n");
	for(int i = 0;i < j-1;i++){
	printf("%d  %d\n",e[i],d[i]);}
	int key = e[0];
	i = 0;
	while(i != strlen(msg)) {
		pt = m[i];
		pt = pt - 96;
		k = 1;
		for(j = 0;j < key;j++) {
			k = k * pt;
			k = k % n;
		}
		temp[i] = k;
		ct = k + 96;
		en[i] = ct;
		i++;
	}
	en[i] = -1;
	printf("\nThe Encrypted message is\n");
	for(i = 0;en[i] != -1;i++)
		printf("%c",en[i]);
	i = 0;
	while(en[i] != -1) {
		ct = temp[i];
		k = 1;
		for(j = 0;j < key;j++) {
			k = k * ct;
			k = k % n;
		}
		pt = k + 96;
		m[i] = pt;
		i++;
	}
	m[i] = -1;
	printf("\nThe Decrypted Message is\n");
	for(i = 0;m[i] != -1;i++)
		printf("%c",m[i]);
	printf("\n");
}
