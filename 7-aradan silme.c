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
