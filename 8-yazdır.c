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
