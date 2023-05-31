int entrada=0;
//variables focos
//cable No.2
int sala=2;
//cable No.1
int cocina=3;
//cable No.3
int cuarto=4;
//cable No.4
int ducha=5;
//cables jumper
int piscina=6;

void setup() {

Serial.begin(9600);

//casa//
pinMode(sala,OUTPUT);
pinMode(cuarto,OUTPUT);
pinMode(ducha,OUTPUT);
pinMode(cocina, OUTPUT);
pinMode(piscina, OUTPUT);
//apagado inicial//
digitalWrite(sala,LOW);
digitalWrite(ducha,LOW);
digitalWrite(cuarto,LOW);
digitalWrite(cocina,LOW);
digitalWrite(piscina,LOW);
}

void loop() {
if( Serial.available()>0)
 {
  entrada = Serial.read();//B
 }
 
 switch (entrada)
 {
  //cocina//
  case'A': //para encender cocina//
  digitalWrite(cocina,HIGH);
 
  break;
   case'B'://apagar cocina//
  digitalWrite(cocina,LOW);
  
  break;
  //sala//
   case'C': //para encender sala//
  digitalWrite(sala,HIGH);
 
  break;
  case'D'://apagar sala//
  digitalWrite(sala,LOW);
  
  break;
  //cuarto//
   case'E'://para encender cuarto//
  digitalWrite(cuarto,HIGH);
 
  break;
  case'F'://apagar cuarto//
  digitalWrite(cuarto,LOW);

  break;
   //ducha//
  case 'G': //para encender ducha
  digitalWrite(ducha,HIGH);
 
  break;
  case 'H': //apagar ducha//
  digitalWrite(ducha,LOW);
  
  break;
   case 'K'://apagar ducha//
  digitalWrite(piscina,LOW);
  
  break;
  
   case 'L'://apagar ducha//
  digitalWrite(piscina,HIGH);
  
  break;
  case 'I'://encendido general//
  digitalWrite(ducha,HIGH);
  digitalWrite(cocina,HIGH);
  digitalWrite(cuarto,HIGH);
  digitalWrite(sala,HIGH);
  break;

   case 'J'://apagado general//
  digitalWrite(ducha,LOW);
  digitalWrite(cocina,LOW);
  digitalWrite(cuarto,LOW);
  digitalWrite(sala,LOW);
  break;
}

