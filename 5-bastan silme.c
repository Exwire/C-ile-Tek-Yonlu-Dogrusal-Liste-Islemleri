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
