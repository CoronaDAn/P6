void menuCC (){
	int opc;
	int contador=0;
	struct autos regis[MAX];
	struct nodo *head=NULL;
	struct nodo *tail=NULL;
		do {
        printf("--Menu cola--\n");
        printf("1) Encolar\n");
        printf("2) Desencolar\n");
        printf("3) Mostrar la cola circular\n");
        printf("4) volver a menu principal\n");
        printf("Opcion a ejecutar:");
        scanf("%d", &opc);
        switch (opc){
        	case 1:
        		encolar(regis, &head,&tail,&contador);
        		break;
        	case 2:
        		desencolar(regis, &head,&tail,&contador);
       			break;
       		case 3:
        		showColaCircular(head,&contador);
				break;
			case 4:
                printf("\n");
				break;
        	default:
        		printf("opcion invalida \n");
		}
	}while (opc!=4);
}
