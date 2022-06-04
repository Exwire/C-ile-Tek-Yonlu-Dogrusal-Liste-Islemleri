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
