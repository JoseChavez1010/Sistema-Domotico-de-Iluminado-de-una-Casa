int cocinaPing = 1;
int dormitorioUnoPing = 2;
int dormitorioDosPing = 3;
int dormitorioTresPing = 4;
int salaPing = 5;
String encendido = "on";
String apagado = "off";


void setup(){
    pinMode(cocinaPing, OUTPUT);

}
void loop(){
    digitalWrite(cocinaPing, HIGH);
}
