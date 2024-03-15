enum boolean encolardoble (struct autos regis[MAX],struct nodo **head,struct nodo **tail, int *ch, int *ct){
	int opcion;
    printf("Desea encolar\n");
    printf("1) Al inicio\n");
    printf("2) Al final\n");
    scanf ("%d",&opcion);
    switch (opcion) {
    case 1:
        if (*ch>0){ //es el primer elemento
        struct nodo *n = (struct nodo *)malloc(sizeof(struct nodo)); //creamos nodo
        n->next=NULL; //siguiente de nodo creado a null por ser el primer
        n->back=NULL; //anterior de nodo creado a null por ser el primer
        printf("\nIngrese:\n");
        printf("Marca de auto:");
        scanf("%s", n->desee.marca); //datos
        printf("Color del auto:");
        scanf("%s", n->desee.color);
        printf("Precio del auto:$");
        scanf("%f", &n->desee.precio);
        printf("\n");

        //n->id=*id;
        //*id+=1;
        //if (*id==20){*id=1;}

        if (*head==NULL){ //que es el primer elemento
           (*head)=n; //apuntamos head al nuevo nodo
            (*tail)=n; //apuntamos tail al nuevo nodo
            *ch=0;
        }else{
        (*head)->back=n; //anterior del que apunta head apunta al nuevo
        n->next=(*head); //el nuevo apunta a head
        (*head)=n;
        *ch-=1;
        } *ct+=1;
        return verdadero;
        }else{
         printf("accion imposible de ejecutar\n");
        return falso;
        }
        break;
    case 2:
        if (*ct<MAX){
        struct nodo *n = (struct nodo *)malloc(sizeof(struct nodo)); //creamos nodo
        n->next=NULL; //siguiente de nodo creado a null por ser el primer
        n->back=NULL; //anterior de nodo creado a null por ser el primer
        printf("\nIngrese:\n");
            printf("Marca de auto:");
            scanf("%s", n->desee.marca);
            printf("Color del auto:");
            scanf("%s", n->desee.color);
            printf("Precio del auto:$");
            scanf("%f", &n->desee.precio);
            printf("\n");

        //n->id=*id;
        //*id+=1;
        //if (*id==20){*id=1;}

        if (*head==NULL){ //primer nodo
            (*head)=n;
            (*tail)=n;
            *ch=0;
        }else{
        (*tail)->next=n; //el siguiente de lo que apunta tail apunta a nuevo
        n->back=(*tail); //el anterior del nuevo apunta a tail
        (*tail)=n; //apuntamos tail al nuevo
        }*ct+=1; //aumentamos contador de tail
        return verdadero;
        }else{
            printf("accion imposible de ejecutar\n");
            return falso;
        }
        break;
        default:
        printf("la opcion seleccionada es incorrecta\n");

    }return verdadero;

}
