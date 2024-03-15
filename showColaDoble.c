enum boolean showColaDoble (struct nodo *head){
	if (head == NULL) {
        printf("No hay autos en garaje\n");
        return falso;
    }
    else
    {
    printf("\n---Autos en garaje---\n");
    while (head != NULL) {
        printf("Marca: %s\n", head->desee.marca);
        printf("Color: %s\n", head->desee.color);
        printf("Precio: $%.2f\n\n", head->desee.precio);
        head= head->next; //lo movemos al siguiente
        }return verdadero;
  }return verdadero;
}
