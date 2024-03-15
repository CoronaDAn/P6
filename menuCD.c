void menuCD (){
        int opc;
        int contador=0;
        int ch=MAX;
        int ct=0;
        struct autos regis[MAX];
        struct nodo *head=NULL;
        struct nodo *tail=NULL;
		do{
        printf("--Menu cola coble--\n");
        printf("1) Insertar\n");
        printf("2) Eliminar\n");
        printf("3) Mostrar la cola doble\n");
        printf("4) volver a menu principal\n");
        printf("Opcion a ejecutar:");
        scanf("%d", &opc);
        switch (opc){
        	case 1:
        		encolardoble(regis, &head,&tail,&ch,&ct);   //push(regis, &t,&contador);
        		break;
        	case 2:
        		desencolardoble(regis, &head,&tail,&ch,&ct);    //pop(regis, &t,&contador);
       			break;
       		case 3:
                 showColaDoble(head); //showPila(t);
				break;
			case 4:
			    printf("\n");
				return;
				break;
        	default:
        		printf("opcion invalida \n");
		}
	}while (opc!=4);
}
