enum boolean encolar (struct autos regis[MAX],struct nodo **head,struct nodo **tail, int *contador){
	int maxcant=MAX;
	if(*contador==MAX){
		printf("ya no queda mas espacio para autos :(\n");
		return falso;
	}
	if (*contador<maxcant){
		struct nodo *n = (struct nodo *)malloc(sizeof(struct nodo));
		printf("\nIngrese:\n");
		printf("Marca de auto:");
   		scanf("%s", n->desee.marca);
    	printf("Color del auto:");
    	scanf("%s", n->desee.color);
   		printf("Precio del auto:$");
   		scanf("%f", &n->desee.precio);
   		printf("\n");
   		//n->next= NULL;
   		if (*head==NULL){ //si la cola esta vacia
   			(*tail)=n; //Apuntamos tail al nuevo
			(*head)=n; //apuntamos head al nuevo
             n->next=(*head); //apuntamos el siguiente de nuevo a head
			(*contador)++;
		}else{
   			(*tail)->next= n; //Siguiente de tail apunta al nuevo
   			(*tail)=n;  //tail lo movemos a el nuevo
             n->next=(*head); //colocamos el siguiente del nuevo a head
   			(*contador)++;
		}
		return verdadero;
	}
	return verdadero;
}
