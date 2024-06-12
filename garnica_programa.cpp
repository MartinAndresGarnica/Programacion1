#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int menu();

int main (){
    menu();
    return 0;
}

void cargaMatriz(int matriz[3][3]);
void mostrarMatriz(int matriz[3][3]);
void buscarNumero(int matriz[3][3], int num);
void buscarMinMax(int matriz[3][3]);
void ordenarMatriz(int matriz[3][3]);

int menu (){
    int matriz[3][3];
    int opcion;
    bool salir = 1;
    bool cargada = 0;
    while (salir == 1){
        cout << "Que tarea desea realizar con la matriz?" << endl;
        cout << "1: Cargar la matriz" << endl;
        cout << "2: Mostrar los valores de la matriz" << endl;
        cout << "3: Buscar un numero especifico" << endl;
        cout << "4: Buscar valor minimo y maximo" << endl;
        cout << "5: Ordenar la matriz ascendente o descendente" << endl;
        cout << "0: Salir" << endl;
        cin >> opcion;
        cout << endl;
        // Bandera para obligar a cargar la matriz
        if (opcion == 1)
            cargada = 1;

        // Salir del bucle             
        if (opcion == 0)
            return 0;
        
        if (cargada == 1){
            switch (opcion)
            {
            // Cargar la matriz
            case 1:    
                cout << endl << "1: Cargar manualmente " << endl;
                cout << "2: Cargar con valores aleatorios del 1 al 100 \n" << endl;
                cargaMatriz(matriz);
                break;

            // Mostrar la matriz
            case 2: 
                mostrarMatriz(matriz);
                break;

            // Buscar un numero ingresado por el usuario
            case 3: 
                cout << "Numero para buscar: ";
                int numero;
                cin >> numero;
                buscarNumero(matriz, numero);
                break;

            // Devuelve el valor minimo y maximo
            case 4:
                buscarMinMax(matriz);
                break;

            // Ordenar matriz de forma ascendente o descendente
            case 5:
                cout << endl << "1: Ordenar ascendente" << endl;
                cout << "2: Ordenar descendente" << endl;
                ordenarMatriz(matriz);
                break;

            // Mensaje de error
            default:
                cout << "Error: opcion invalida \n" << endl;
                break;
            }
        }else{
            cout << "Error: debes cargar la matriz primero" << endl;
        }
    }
    return 0;
}

void cargaMatriz(int matriz[3][3]){
    int op;
    cin >> op;
    int n;
    srand(time(NULL));
    // En el caso que la opcion sea 1 se desea cargar la matriz manualmente
    if(op == 1){
        cout << "Ingrese los valores de la matriz" << endl;
        for(int i = 0; i < 3; i++){
            for(int x = 0; x < 3; x++){
                cin >> n;
                matriz[i][x] = n;
            }
        }
    }
    // En caso de ser 2 la matriz es cargada con numeros aleatorios del 1 al 100
    else if (op == 2){
        for(int i = 0; i < 3; i++){
            for(int x = 0; x < 3; x++){
                matriz[i][x] = rand() % 100 + 1;
            }
        }
    }else{
        cout << "Error: opcion invalida\n" << endl;
    }
}

void mostrarMatriz(int matriz[3][3]){
    for(int i = 0; i < 3; i++){
        for(int x = 0; x < 3; x++){
            cout << matriz[i][x] << "\t";
            }
        cout << endl;
        }
    cout << endl;
}

void buscarNumero(int matriz[3][3], int num){
    bool encontrado = 0;
    for (int i = 0; i < 3; i++){
        for(int x = 0; x < 3; x++){
            if (matriz[i][x] == num)
                encontrado = 1;            
        }
    }
    if (encontrado == 1){
        cout << "El numero se encuentra en la matriz \n" << endl;        
    }else {
        cout << "El numero no se encuentra en la matriz \n" << endl;
    }
}

void buscarMinMax(int matriz[3][3]){
    int min, max;
    min = matriz[1][1];
    max = matriz[1][1];
    for(int i = 0; i < 3; i++){
        for (int x = 0; x < 3; x++){
            if (min > matriz [i][x])
                min = matriz[i][x];
            if(max < matriz[i][x])
                max = matriz[i][x];
        }
    }
    cout << "El numero minimo es " << min << endl;
    cout << "El numero maximo es " << max << endl << endl;
}

void ordenarMatriz(int matriz[3][3]){
    int arregloTemp[9];
    int posicion = 0;
    for (int i = 0; i < 3; i++){
        for (int x = 0; x < 3; x++){
            arregloTemp[posicion] = matriz[i][x];
            posicion ++;
        }
    }
    posicion = 0;
    int op;
    cin >> op;
    if (op == 1){
        for(int i = 0; i < 9; i++){
            
        }
    }else if(op == 2){

    }else
        cout << "Error: opcion no valida" << endl;
}