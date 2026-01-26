#include <studio.h>

int main(){
    float x1 = 2.5;
    float y1 = 4.5;
    float x2 = 5.2;
    float y2 = 1.5;
    float xp, yp, d1, d2;

    printf("Ingresa la coordenada X del pasajero:");
    scanf("%f", &xp)
    printf("Ingresa la coordenada Y del pasajero");
    scanf("%f", &yp)
    
    d1 = sqrt(((x2-xp)*(x2-xp))+((y2-yp)*(y2-yp)));
    d2 = sqrt(((x2-xp)*(x2-xp))+((y2-yp)*(y2-yp)));

    print("La distacia al primer uber es: %f", d1);
    print("La distacia al segundo uber es: %f", d2);

    if(d1<d2){
        print("El pasajero esta mas cerca del Uber 1");
    } else {
        print("El pasajero esta mas cerca del Uber 2");
    }
}