//SIMULADOR DE TRIFASICO A PARTIR DE UNA FASE
//SE TOMA LA SEÑAL PATRON DEL COLECTOR DE UN FOTOTRANSISTOR (75% HIGH,25%LOW) 



int buttonState = 0;

void setup() {

  pinMode(7, INPUT);    //entrada   PIN QUE SENSA LA FASE R
  pinMode(8, OUTPUT);   //salida    PIN QUE GENERA  LA FASE S
  pinMode(9, OUTPUT);   //salida    PIN QUE GENERA LA FASE T
  digitalWrite(8, HIGH);  //COLOCAR PIN S EN INACTIVO
  digitalWrite(9, HIGH);  //COLOCAR PIN T EN INACTIVO
}

// the loop function runs over and over again forever
void loop() {

  buttonState = digitalRead(7);   //LEER EL ESTADO DE LA FASE R

if (buttonState == LOW) {   //FASE S ACTIVA? SI ACTIVA ,TRANSISTOR CON COLECTOR A MASA OSEA LOW
  delay(6);                 //ESPERAR DEFASAJE
  digitalWrite(8, LOW);     //ACCIONAR S
  delay(6);                 //DURACION DE ACTIVIDAD DE S Y DEFASAJE DE T
  digitalWrite(9, LOW);     //ACCIONAR T
  digitalWrite(8, HIGH);    //DESHABILITAR S
  delay(6);                 //DURACION DE ACTIVIDAD DE T Y DEFASAJE DE R   
  digitalWrite(9, HIGH);    //DESHABILITAR T  
                         

}



}
