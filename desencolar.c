struct nodo *desencolar (struct autos regis[MAX],struct nodo **head,struct nodo **tail,int *contador){
	if (*head==NULL){
		printf("El garaje se encuentra vacio\n");
		return NULL;
	}else{
		struct nodo *temp = *head; //creamos temporal
		if(*head == *tail){   //
				(*head)=NULL;
				(*tail)=NULL;
				(*contador)=0;
		}else{
			if (*head != NULL){
   			*head= temp->next;  //head lo mandamos al nodo que sigue
   			(*tail)->next=*head;
   			//tail->next=(*head);      //el siguiente de tail apunte a cabeza
   			//temp->next=NULL;   //mandamos tmeporal a tierra
   			(*contador)--;
   			return temp;
			}

		}
		temp->next=NULL;
		return temp;
	}
}
