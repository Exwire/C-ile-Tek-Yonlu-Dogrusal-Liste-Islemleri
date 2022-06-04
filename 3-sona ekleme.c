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
