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
