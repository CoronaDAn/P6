enum boolean showColaCircular(struct nodo *head, int *contador){
	if (head == NULL) {
        printf("No hay autos en garaje\n");
        return falso;
    }
    else
    {
    printf("\n---Autos en garaje---\n");
    while (head != NULL) {
        struct nodo *temp = head; //---
    do{
        printf("Marca: %s\n", temp->desee.marca);
        printf("Color: %s\n", temp->desee.color);
        printf("Precio: $%.2f\n\n", temp->desee.precio);
        temp= temp->next; //lo movemos al siguiente
        }while(temp->next != head);
    if((*contador)>1){
    printf("Marca: %s\n", temp->desee.marca);
    printf("Color: %s\n", temp->desee.color);
    printf("Precio: $%.2f\n\n", temp->desee.precio);
    }return verdadero;
    }return verdadero;
  }return verdadero;
}
