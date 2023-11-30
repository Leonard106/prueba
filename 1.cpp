#include <iostream>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    srand(time(NULL));
    
    int respuesta=0;
    int respuestaAleatorea=2+rand()%3;
    int golesPrimera=rand()%60;
    int golesSegunda=rand()%100;
    int golesTercera=rand()%110;
    int golesCuarta=rand()%100;
    int golesQuinta=rand()%70;
    int golesFinal=0;
    int sueldo=0;
    int bono=0;
    int oferta=0;
    int gananciaPrimera=0;
    int gananciaSegunda=0;
    int gananciaTercera=0;
    int gananciaCuarta=0;
    int gananciaQuinta=0;
        cout<<"----------Soccer Player Career 2023 ----------"<<endl<<endl;
        cout<<"Bienvenido a SPC23"<<endl<<endl;
        cout<<"Seleccione una opción para continuar"<<endl<<endl;
        cout<<"1.Salir"<<endl;
        cout<<"2.Jugar"<<endl;
        cout<<"3.Controles"<<endl;
        cout<<"4.Sobre el juego"<<endl;
        cin>>respuesta;
	switch (respuesta)
	{
		case 2:
			cout<<"2023 en algun lugar de Mexico. Eres un joven mexicano de 18 aÃƒÂ±os que por mucho tiempo haz estado jugando futbol en clubes juveniles, como delantero, y por fin llego el dia en que hubo una visoria. En ella haz mostrado tu gran talento y tus goles por ello tres clubes han querido contratarte escoge uno para continuar"<<endl<<endl;
            cout<<"1.Salir del juego"<<endl;
            cout<<"2. Pumas. Condiciones: 3 temporadas de contrato, 10000 pesos mensuales y 2000 pesos de bono por cada gol"<<endl;
            cout<<"3. Mazatlan. Condiciones: 2 temporadas de contrato, 20000 pesos mensuales y 3000 pesos de bono por cada gol"<<endl;
            cout<<"4. Necaxa. Condiciones: 2 temporadas, 12000 pesos mensuales y 2500 pesos de bono por cada gol"<<endl;
            cout<<"5. Inicio aleatorio"<<endl<<endl;
            cin>>respuesta;
            if (respuesta==5)
            {
                respuesta=respuestaAleatorea;
            }
            switch (respuesta)
            {
            	
            	
            	
            	case 2:
            		cout<<"Jugaste 3 temporadas para Pumas en donde obtuviste"<<endl;
            		sueldo=10000*12*3;
            		bono=2000*golesPrimera;
           		 	cout<<"Goles:"<<golesPrimera<<endl;
            		cout<<"Sueldo: $"<<sueldo<<endl;
            		cout<<"Bonos: $"<<bono<<endl<<endl;
            		gananciaPrimera=sueldo+bono;
            		cout<<"Ganancia economica: $"<<gananciaPrimera<<endl;
            		if (golesPrimera==0)
	        		{
	        			cout<<"Tuviste una pesima etapa en cuanto a goles, no marcaste  ninguno"<<endl<<endl;
	        			oferta=10000;
	        		}else if(golesPrimera>0 && golesPrimera<=20)
	        		{
	        			cout<<"Tuviste una mala etapa en cuanto a goles"<<endl<<endl;
	        			oferta=15000;
	        		}else if(golesPrimera>20 && golesPrimera<=40)
	        		{
	        			cout<<"Tuviste una buena etapa en cuanto a goles"<<endl<<endl;
	        			oferta=20000;
	        		}else if (golesPrimera>40)
	        		{
	        			cout<<"Tuviste una exelente etapa en cuanto a goles"<<endl<<endl;
	        			oferta=25000;
	        		}
    		        cout<<"Debido al rendimiento que has tenido y a la situación de los clubes, te han llegado las siguentes ofertas"<<endl;
            		cout<<"1.Salir del juego"<<endl;
            		cout<<"2. Pumas. Condiciones: 5 temporadas de contrato,"<< oferta <<" pesos mensuales y 3000 pesos de bono por cada gol"<<endl;
            		cout<<"3. Cruz Azul. Condiciones: 5 temporadas de contrato,"<< oferta <<" pesos mensuales y 3000 pesos de bono por cada gol"<<endl;
            		cout<<"4. Guadalajara. Condiciones: 5 temporadas de contrato,"<< oferta <<" pesos mensuales y 3000 pesos de bono por cada gol"<<endl;
            		cin>>respuesta;
            		switch (respuesta)
					{
						case 2:
			        	    cout<<"Jugaste 5 temporadas para Pumas en donde obtuviste"<<endl;
            				sueldo=oferta*12*5;
          	  				bono=3000*golesSegunda;
            				cout<<"Goles:"<<golesSegunda<<endl;
	            			cout<<"Sueldo: $"<<sueldo<<endl;
    	        			cout<<"Bonos: $"<<bono<<endl<<endl;
        	    			gananciaSegunda=sueldo+bono;
            				cout<<"Ganancia economica: $"<<gananciaSegunda<<endl;
            				if (golesSegunda==0)
	        				{
	        					cout<<"Tuviste una pesima etapa en cuanto a goles, no marcaste  ninguno"<<endl<<endl;
	        					oferta=15000;
	        				}else if(golesSegunda>0 && golesSegunda<=30)
	        				{
	        					cout<<"Tuviste una mala etapa en cuanto a goles"<<endl<<endl;
	        					oferta=20000;
	        				}else if(golesSegunda>30 && golesSegunda<=70)
	        				{
						        cout<<"Tuviste una buena etapa en cuanto a goles"<<endl<<endl;
						        oferta=30000;
					        }else if (golesSegunda>70)
					        {
					        	cout<<"Tuviste una exelente etapa en cuanto a goles"<<endl<<endl;
					        	oferta=50000;
					        }
					        cout<<"Debido al rendimiento que has tenido y a la situación de los clubes, te han llegado las siguentes ofertas"<<endl;
				            cout<<"1.Salir del juego"<<endl;
				            cout<<"2. Pumas. Condiciones: 5 temporadas de contrato,"<< oferta <<" pesos mensuales y 5000 pesos de bono por cada gol"<<endl;
				            cout<<"3. Tigres. Condiciones: 5 temporadas de contrato,"<< oferta <<" pesos mensuales y 5000 pesos de bono por cada gol"<<endl;
				            cout<<"4. Real Betis. Condiciones: 5 temporadas de contrato,"<< oferta <<" pesos mensuales y 5000 pesos de bono por cada gol"<<endl;
				            cin>>respuesta;
						break;
						case 3:
			        	    cout<<"Jugaste 5 temporadas para Cruz Azul en donde obtuviste"<<endl;
            				sueldo=oferta*12*5;
          	  				bono=3000*golesSegunda;
            				cout<<"Goles:"<<golesSegunda<<endl;
	            			cout<<"Sueldo: $"<<sueldo<<endl;
    	        			cout<<"Bonos: $"<<bono<<endl<<endl;
        	    			gananciaSegunda=sueldo+bono;
            				cout<<"Ganancia economica: $"<<gananciaSegunda<<endl;
            				if (golesSegunda==0)
	        				{
	        					cout<<"Tuviste una pesima etapa en cuanto a goles, no marcaste  ninguno"<<endl<<endl;
	        					oferta=15000;
	        				}else if(golesSegunda>0 && golesSegunda<=30)
	        				{
	        					cout<<"Tuviste una mala etapa en cuanto a goles"<<endl<<endl;
	        					oferta=20000;
	        				}else if(golesSegunda>30 && golesSegunda<=70)
	        				{
						        cout<<"Tuviste una buena etapa en cuanto a goles"<<endl<<endl;
						        oferta=30000;
					        }else if (golesSegunda>70)
					        {
					        	cout<<"Tuviste una exelente etapa en cuanto a goles"<<endl<<endl;
					        	oferta=50000;
					        }
					        cout<<"Debido al rendimiento que has tenido y a la situación de los clubes, te han llegado las siguentes ofertas"<<endl;
				            cout<<"1.Salir del juego"<<endl;
				            cout<<"2. Cruz Azul. Condiciones: 5 temporadas de contrato,"<< oferta <<" pesos mensuales y 5000 pesos de bono por cada gol"<<endl;
				            cout<<"3. Tigres. Condiciones: 5 temporadas de contrato,"<< oferta <<" pesos mensuales y 5000 pesos de bono por cada gol"<<endl;
				            cout<<"4. Real Betis. Condiciones: 5 temporadas de contrato,"<< oferta <<" pesos mensuales y 5000 pesos de bono por cada gol"<<endl;
				            cin>>respuesta;		
						break;
						case 4:
			        	    cout<<"Jugaste 5 temporadas para Guadalajara en donde obtuviste"<<endl;
            				sueldo=oferta*12*5;
          	  				bono=3000*golesSegunda;
            				cout<<"Goles:"<<golesSegunda<<endl;
	            			cout<<"Sueldo: $"<<sueldo<<endl;
    	        			cout<<"Bonos: $"<<bono<<endl<<endl;
        	    			gananciaSegunda=sueldo+bono;
            				cout<<"Ganancia economica: $"<<gananciaSegunda<<endl;
            				if (golesSegunda==0)
	        				{
	        					cout<<"Tuviste una pesima etapa en cuanto a goles, no marcaste  ninguno"<<endl<<endl;
	        					oferta=15000;
	        				}else if(golesSegunda>0 && golesSegunda<=30)
	        				{
	        					cout<<"Tuviste una mala etapa en cuanto a goles"<<endl<<endl;
	        					oferta=20000;
	        				}else if(golesSegunda>30 && golesSegunda<=70)
	        				{
						        cout<<"Tuviste una buena etapa en cuanto a goles"<<endl<<endl;
						        oferta=30000;
					        }else if (golesSegunda>70)
					        {
					        	cout<<"Tuviste una exelente etapa en cuanto a goles"<<endl<<endl;
					        	oferta=50000;
					        }
					        cout<<"Debido al rendimiento que has tenido y a la situación de los clubes, te han llegado las siguentes ofertas"<<endl;
				            cout<<"1.Salir del juego"<<endl;
				            cout<<"2. Guadalajara. Condiciones: 5 temporadas de contrato,"<< oferta <<" pesos mensuales y 5000 pesos de bono por cada gol"<<endl;
				            cout<<"3. Tigres. Condiciones: 5 temporadas de contrato,"<< oferta <<" pesos mensuales y 5000 pesos de bono por cada gol"<<endl;
				            cout<<"4. Real Betis. Condiciones: 5 temporadas de contrato,"<< oferta <<" pesos mensuales y 5000 pesos de bono por cada gol"<<endl;
				            cin>>respuesta;		
						break;
						case 1:
							cout << "Saliendo del programa." << endl;
        					return 0;
        					break;
        					default:
        					cout << "Te equivocaste" <<endl<<endl;
        					cout << "Game over" <<endl<<endl;
					}
				break;
            	
            	
            	
				case 3:
            		cout<<"Jugaste 3 temporadas para Mazatlan en donde obtuviste"<<endl;
            		sueldo=10000*12*3;
            		bono=2000*golesPrimera;
           		 	cout<<"Goles:"<<golesPrimera<<endl;
            		cout<<"Sueldo: $"<<sueldo<<endl;
            		cout<<"Bonos: $"<<bono<<endl<<endl;
            		gananciaPrimera=sueldo+bono;
            		cout<<"Ganancia economica: $"<<gananciaPrimera<<endl;
            		if (golesPrimera==0)
	        		{
	        			cout<<"Tuviste una pesima etapa en cuanto a goles, no marcaste  ninguno"<<endl<<endl;
	        			oferta=10000;
	        		}else if(golesPrimera>0 && golesPrimera<=20)
	        		{
	        			cout<<"Tuviste una mala etapa en cuanto a goles"<<endl<<endl;
	        			oferta=15000;
	        		}else if(golesPrimera>20 && golesPrimera<=40)
	        		{
	        			cout<<"Tuviste una buena etapa en cuanto a goles"<<endl<<endl;
	        			oferta=20000;
	        		}else if (golesPrimera>40)
	        		{
	        			cout<<"Tuviste una exelente etapa en cuanto a goles"<<endl<<endl;
	        			oferta=25000;
	        		}
    		        cout<<"Debido al rendimiento que has tenido y a la situación de los clubes, te han llegado las siguentes ofertas"<<endl;
            		cout<<"1.Salir del juego"<<endl;
            		cout<<"2. Mazatlan. Condiciones: 5 temporadas de contrato,"<< oferta <<" pesos mensuales y 3000 pesos de bono por cada gol"<<endl;
            		cout<<"3. Cruz Azul. Condiciones: 5 temporadas de contrato,"<< oferta <<" pesos mensuales y 3000 pesos de bono por cada gol"<<endl;
            		cout<<"4. Guadalajara. Condiciones: 5 temporadas de contrato,"<< oferta <<" pesos mensuales y 3000 pesos de bono por cada gol"<<endl;
            		cin>>respuesta;
					 switch (respuesta)
					{
						case 2:
		
						break;
						case 3:
		
						break;
						case 4:
		
						break;
						case 1:
							cout << "Saliendo del programa." << endl;
        					return 0;
        					break;
        					default:
        					cout << "Te equivocaste" <<endl<<endl;
        					cout << "Game over" <<endl<<endl;
					}           		
            	break;
				
				
				
				case 4:
            		cout<<"Jugaste 3 temporadas para Necaxa en donde obtuviste"<<endl;
            		sueldo=10000*12*3;
            		bono=2000*golesPrimera;
           		 	cout<<"Goles:"<<golesPrimera<<endl;
            		cout<<"Sueldo: $"<<sueldo<<endl;
            		cout<<"Bonos: $"<<bono<<endl<<endl;
            		gananciaPrimera=sueldo+bono;
            		cout<<"Ganancia economica: $"<<gananciaPrimera<<endl;
            		if (golesPrimera==0)
	        		{
	        			cout<<"Tuviste una pesima etapa en cuanto a goles, no marcaste  ninguno"<<endl<<endl;
	        			oferta=10000;
	        		}else if(golesPrimera>0 && golesPrimera<=20)
	        		{
	        			cout<<"Tuviste una mala etapa en cuanto a goles"<<endl<<endl;
	        			oferta=15000;
	        		}else if(golesPrimera>20 && golesPrimera<=40)
	        		{
	        			cout<<"Tuviste una buena etapa en cuanto a goles"<<endl<<endl;
	        			oferta=20000;
	        		}else if (golesPrimera>40)
	        		{
	        			cout<<"Tuviste una exelente etapa en cuanto a goles"<<endl<<endl;
	        			oferta=25000;
	        		}
    		        cout<<"Debido al rendimiento que has tenido y a la situación de los clubes, te han llegado las siguentes ofertas"<<endl;
            		cout<<"1.Salir del juego"<<endl;
            		cout<<"2. Necaxa. Condiciones: 5 temporadas de contrato,"<< oferta <<" pesos mensuales y 3000 pesos de bono por cada gol"<<endl;
            		cout<<"3. Cruz Azul. Condiciones: 5 temporadas de contrato,"<< oferta <<" pesos mensuales y 3000 pesos de bono por cada gol"<<endl;
            		cout<<"4. Guadalajara. Condiciones: 5 temporadas de contrato,"<< oferta <<" pesos mensuales y 3000 pesos de bono por cada gol"<<endl;
            		cin>>respuesta; 
					switch (respuesta)
					{
						case 2:
		
						break;
						case 3:
		
						break;
						case 4:
		
						break;
						case 1:
							cout << "Saliendo del programa." << endl;
        					return 0;
        					break;
        					default:
        					cout << "Te equivocaste" <<endl<<endl;
        					cout << "Game over" <<endl<<endl;
					}           		
            	break;
				
				
				
				case 1:
            		cout << "Saliendo del programa." << endl;
            		return 0;  // Sale del programa
            	break;	
					default:
            		cout << "Te equivocaste" <<endl<<endl;
            		cout << "Game over" <<endl<<endl;	
			}
		break;
		case 3:
			cout<<"----Controles----"<<endl;
            cout<<"Para salir del juego en cualquier momento solo debes pulsar el numero 1+Enter"<<endl;
            cout<<"Para seleccionar la primer ación debes pulsar el numero numero 2+Enter"<<endl;
            cout<<"Para seleccionar la primer ación debes pulsar el numero numero 3+Enter"<<endl;
            cout<<"Para seleccionar la primer ación debes pulsar el numero numero 4+Enter"<<endl;
            cout<<"No te equivoques ya que el juego terminara ;)"<<endl;
            cout<<"Ademas en todo momento se mostrara el numero que debes pulsar antes de la opcion"<<endl<<endl;
            cout<<"1. Salir del juego"<<endl<<endl;
            cout<<"2. Regresar al menu"<<endl<<endl;//repetir todo el codigo
            cin>>respuesta;
            switch(respuesta)
            {
                case 2:
                return main();
                break;
                case 1:
                    cout << "Saliendo del programa." << endl;
                return 0; 
                default:
                    cout << "Te equivocaste" <<endl<<endl;
                    cout << "Game over" <<endl<<endl; 
            }
				break;
		case 4:
			cout<<"Este es un juego de rol en donde podras tomar desisiones que guiaran la carrera de un jugador de fubol soccer"<<endl<<endl;
            cout<<"1. Salir del juego"<<endl<<endl;
            cout<<"2. Regresar al menu"<<endl<<endl;//repetir todo el codigo
            cin>>respuesta;
            switch(respuesta)
            {
               	case 2:
               	return main();
               	break;
               	case 1:
                cout << "Saliendo del programa." << endl;
               	return 0; 
               	break;
               	default:
                cout << "Te equivocaste" <<endl<<endl;
                cout << "Game over" <<endl<<endl; 
            }
		break;
		case 1:
		    cout << "Saliendo del programa." << endl;
            return 0;
            break;
            default:
            cout << "Te equivocaste" <<endl<<endl;
            cout << "Game over" <<endl<<endl; 
	}
return 0;
}
