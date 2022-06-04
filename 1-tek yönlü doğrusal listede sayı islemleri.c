#include<stdio.h>
#include<stdlib.h>
//Üzerinde sayý deðeri saklayan tek yönlü baðlý liste elemanlarýnýn
//toplam degerini hesaplayan programin akis diyagramini cizerek kodlayiniz.
struct node{
	
	int data;
	struct node * next;
};

struct node * head = NULL;
struct node * gecici = NULL;

void yazdir(){
	
	gecici = head;
	int toplam = 0;
	
	system("cls");
	
	if(head == NULL)
	{
			printf("Liste Bos!!");
	}
	else
	{
		printf("Tek yonlu dogrusal liste elemanlari =  ");
		while(gecici->next!=NULL)
		{
			printf("%d  ",gecici->data);
			toplam += gecici->data;
			gecici = gecici->next;
		}
		
		printf("%d  ",gecici->data);
		toplam += gecici->data;
		
		printf("\nTek yonlu dogrusal liste elemanlari toplami =  %d\n\n",toplam);
	}	
	
}

void sonaEkle(int sayi){
	
	struct node * eleman = (struct node *) malloc(sizeof(struct node));
	eleman->data = sayi;
	eleman->next = NULL;
	
	system("cls");
	
	if(head == NULL)
	{
		head = eleman;
	}
	else
	{
		gecici = head;
		while(gecici->next != NULL)
		{
			gecici = gecici->next;
		}
	 	gecici->next = eleman;
	}
}

void basaEkle(int sayi){
	
	struct node * eleman = (struct node *) malloc(sizeof(struct node));
	eleman->data = sayi;
	
	system("cls");
		
	if(head == NULL)
	{
		eleman->next = NULL;
		head = eleman;
		
	}
	else
	{
		eleman->next = head;
		head = eleman;
	}
}

void arayaEkle(int sira , int sayi){
	
	struct node * eleman = (struct node *) malloc(sizeof(struct node));
	eleman->data = sayi;
	
	system("cls");
	
	if(head == NULL)
	{
		eleman->next = NULL;
		head = eleman;
	}
	else
	{
		gecici = head;
		while(gecici->next->data != sira)
		{
			gecici = gecici->next;
		}
		eleman->next = gecici->next;
		gecici->next = eleman;
		
	}
	
}

void bastanSilme(){
	
	struct node * temp = (struct node *) malloc(sizeof(struct node));
	
	system("cls");
	
	if(head == NULL)
	{
		printf("Liste Bos!\n");
	}
	
	if ( head->next == NULL)
	{
		free(head);
		printf("Listede eleman kalmadi.\n");
	}
	else
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	
	yazdir();
	
}

void sondanSilme(){
	
	system("cls");
	
	gecici = head;
	if(head->next != NULL)
	{
		while(gecici->next->next != NULL)
		{
			gecici = gecici->next;
		}
		
		free(gecici->next);
		gecici->next = NULL;	
	}
	else
	{
		bastanSilme();
	}
	
	yazdir();
}

void aradanSilme(int sira){
	
	struct node * temp = (struct node *) malloc(sizeof(struct node));
	gecici = head;
	
	system("cls");
	
	while(gecici->next->next->data != sira)
	{
		gecici = gecici->next;
	}
	
	temp = gecici->next;
	gecici->next = temp->next;
	free(temp);
	
	yazdir();
}

int main(){
	
	int secim,sayi,sira;
	
	while(1)
	{
		printf("1-Basa eleman ekleme\n");
		printf("2-Sona eleman ekleme\n");
		printf("3-Araya eleman ekleme\n");
		printf("4-Bastaki elemani silme\n");
		printf("5-Sondaki elemani silme\n");
		printf("6-Aradan eleman silme\n");
		printf("7-Yazdir\n");
		printf("0-Cikis\n");
		printf("Seciminizi giriniz.[0-7]\n");
		
		scanf("%d",&secim);
		
		switch(secim)
		{
			case 1 :
				printf("Bir sayi giriniz.\n"); 
				scanf("%d",&sayi);
				basaEkle(sayi);
				break;
			case 2 :
				printf("Bir sayi giriniz.\n"); 
				scanf("%d",&sayi);
				sonaEkle(sayi);
				break;
			case 3 :
				yazdir();
				printf("Bir sayi giriniz.\n"); 
				scanf("%d",&sayi);
				printf("Elemani hangi sayidan once girmek istersiniz.\n"); 
				scanf("%d",&sira);
				arayaEkle(sira,sayi);
				break;
			case 4 :
				bastanSilme();
				break;
			case 5 :
				sondanSilme();
				break;
			case 6 :
				yazdir(0);
				printf("Hangi sayidan onceki elemani silmek istersiniz.\n"); 
				scanf("%d",&sira);
				aradanSilme(sira);
				break;
			case 7 :
				yazdir();
				break;
			case 0 :
				exit(0);
			default : 
				printf("Hatali secim!!\n");
		}
		
	}
}
