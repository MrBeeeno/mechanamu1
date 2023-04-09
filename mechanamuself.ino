const int m11 = 32;
const int m12 = 33;
const int m21 = 25;
const int m22 = 26;
const int m31 = 2;
const int m32 = 25;
const int m41 = 0;
const int m42 = 4;




int num = 250;

void setup() {
  /*
  int motor[] = {m11, m12, m21, m22, m31, m32, m41, m42};
  
  for(int i=0;i<8;i++){
    ledcSetup(i,495,8);
    ledcAttachPin(motor[i],i);    
  }
  */
  ledcSetup(0,5000,8);
  ledcSetup(1,5000,8);
  ledcSetup(2,5000,8);
  ledcSetup(3,5000,8);
  ledcSetup(4,5000,8);
  ledcSetup(5,5000,8);
  ledcSetup(6,5000,8);
  ledcSetup(7,5000,8);
  ledcAttachPin(A4,0);
  ledcAttachPin(A5,1);
  ledcAttachPin(25,2);
  ledcAttachPin(26,3);
  ledcAttachPin(A12,4);
  ledcAttachPin(A13,5);
  ledcAttachPin(A10,6);
  ledcAttachPin(A11,7);
}

void loop() {
  delay(1000);
  ledcWrite(0,num);
  ledcWrite(1,0);
  ledcWrite(2,num);
  ledcWrite(3,0);
  ledcWrite(4,num);
  ledcWrite(5,0);
  ledcWrite(6,num);
  ledcWrite(7,0);
  delay(1000);
  ledcWrite(0,0);
  ledcWrite(1,0);
  ledcWrite(2,0);
  ledcWrite(3,0);
  ledcWrite(4,0);
  ledcWrite(5,0);
  ledcWrite(6,0);
  ledcWrite(7,0);
  delay(3000);
  


  
}
