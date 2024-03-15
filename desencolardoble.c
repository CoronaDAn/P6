struct nodo* desencolardoble (struct autos regis[MAX],struct nodo **head,struct nodo **tail, int *ch, int *ct){
	if (*head==NULL){ //no hay nada en carrito
    printf("No hay autos en el garaje\n");
    return NULL;
}else{
    int opcion;
     struct nodo*temp = NULL;
    printf("Desea eliminar\n");
    printf("1) Al inicio\n");
    printf("2) Al final\n");
    scanf("%d", &opcion);
    switch(opcion){
        case 1: //eliminar por head
     temp = *head; //temporal de ayuda
    if (*head==*tail){ //si es el ultimo que queda
    (*head)=NULL;
    (*tail)=NULL;
    *ch=MAX;
    *ct=0; //volvemos a condiciones iniciales
    }else{ //ya hay elementos
     (*head)=temp->next; //apuntamos head al siguiente
     (*head)->back=NULL; //el anterior de head lo apuntamos a null
     temp->next=NULL; //el siguiente de tmeporal a null
     *ch+=1; //contaodor ++
    }
        break;
        case 2: //eliminar por tail
     temp = *tail; //apuntamos el temporal a tail
    if (*head==*tail){ //si es el ultimo
    (*head)=NULL;
    (*tail)=NULL;
    *ch=MAX;
    *ct=0; //condiciones iniciales
    }else{ //si hay mas
    (*tail)=temp->back; //apuntamos tail al anterior de el con el temporal
     (*tail)->next=NULL; //siguiente de tail lo mandamos a null
     temp->back=NULL; //temporal anterior lo mandamos a null
     *ct-=1; //contador-
    }
        break;
        default:
        printf("opcion no valida\n");

    }return temp;

    }
}
