int led_start = 2;
int led_second = 3;
int led_third = 4;
int led_fourth = 5;
int led_fifth = 9;
int ldr = A0;
int ir_start = A1;
int ir_second = A2;
int ir_third = A3;
int ir_fourth = A4;
int ir_fifth = A5;


void setup() {
pinMode(led_start,OUTPUT);
pinMode(led_second,OUTPUT);
pinMode(led_third,OUTPUT);
pinMode(led_fourth,OUTPUT);
pinMode(led_fifth,OUTPUT);
pinMode(ir_start,INPUT);
pinMode(ir_second,INPUT);
pinMode(ir_third,INPUT);
pinMode(ir_fourth,INPUT);
pinMode(ir_fifth,INPUT);
pinMode(ldr,INPUT);
Serial.begin(9600);
}

void loop() {
int ir_status_start = analogRead(ir_start);
int ir_status_second = analogRead(ir_second);
int ir_status_third = analogRead(ir_third);
int ir_status_fourth = analogRead(ir_fourth);
int ir_status_fifth = analogRead(ir_fifth);
//initial states of all LED's
// first LED will always be on but at a medium intensity
int ldr_status = analogRead(ldr);
 Serial.println(ldr_status);
 if(ldr_status > 1000){
  digitalWrite(led_start,LOW);
 digitalWrite(led_second,LOW);
 digitalWrite(led_third,LOW);
 digitalWrite(led_fourth,LOW);
 digitalWrite(led_fifth,LOW);
 }
 else{
if(ir_status_start < 500){
 digitalWrite(led_start,HIGH);
 digitalWrite(led_second,128);
 digitalWrite(led_third,LOW);
 digitalWrite(led_fourth,LOW);
 digitalWrite(led_fifth,LOW);
  }

if(ir_status_second < 500){
 digitalWrite(led_start,HIGH);
 digitalWrite(led_second,HIGH);
 analogWrite(led_third,128);
 digitalWrite(led_fourth,LOW);
 digitalWrite(led_fifth,LOW);
  }

  if(ir_status_second > 500){
 digitalWrite(led_start,HIGH);
 digitalWrite(led_second,LOW);
 analogWrite(led_third,LOW);
 digitalWrite(led_fourth,LOW);
 digitalWrite(led_fifth,LOW);
  }

  if(ir_status_third < 500){
 digitalWrite(led_start,HIGH);
 digitalWrite(led_second,LOW);
 digitalWrite(led_third,HIGH);
 digitalWrite(led_fourth,128);
 digitalWrite(led_fifth,LOW);
  }

  if(ir_status_third > 500){
 digitalWrite(led_start,HIGH);
 digitalWrite(led_second,LOW);
 analogWrite(led_third,LOW);
 digitalWrite(led_fourth,LOW);
 digitalWrite(led_fifth,LOW);
  }

  
  if(ir_status_fourth < 500){
 digitalWrite(led_start,HIGH);
 digitalWrite(led_second,LOW);
 digitalWrite(led_third,LOW);
 digitalWrite(led_fourth,HIGH);
 digitalWrite(led_fifth,HIGH);
  }

  if(ir_status_fourth > 500){
 digitalWrite(led_start,HIGH);
 digitalWrite(led_second,LOW);
 digitalWrite(led_third,LOW);
 digitalWrite(led_fourth,LOW);
 digitalWrite(led_fifth,LOW);
  }

  if(ir_status_fifth < 500){
 digitalWrite(led_start,HIGH);
 digitalWrite(led_second,LOW);
 digitalWrite(led_third,LOW);
 digitalWrite(led_fourth,LOW);
 analogWrite(led_fifth,1023);
  }

  if(ir_status_fifth > 500){
 digitalWrite(led_start,HIGH);
 digitalWrite(led_second,LOW);
 digitalWrite(led_third,LOW);
 digitalWrite(led_fourth,LOW);
 digitalWrite(led_fifth,LOW);}

}
}
