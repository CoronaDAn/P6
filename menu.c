void menu(){
	int opc;
	do{
	    printf("##################\n");
        printf("####AutosCorona###\n");
		printf("##################\n");
		printf("--Menu--\n");
        printf("1) Cola circular\n");
        printf("2) Cola doble\n");
        printf("3) Salir\n");
        printf("Dijite la estructura que quiera ejecutar:");
        scanf("%d", &opc);
        switch (opc){
        	case 1:
        		menuCC();   //menuP();
        		break;
        	case 2:
        		menuCD();  //menucola();
       			break;
       		case 3:
        		return;
				break;
        	default:
        		printf("La opcion seleccionada no es valida \n");
		}
	}while (opc!=3);
}
