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
