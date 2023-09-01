char cont = 'D';
void algorithm() {
     
        if (ultrassonicRead() < 15.5){

          stop(); delay(600); turnRightMiddleRobot(55); delay(800); // diagonal
          stop(); delay(300); forward(55); delay(700);

          stop(); delay(600); turnLeftMiddleRobot(55); delay(750); // pra frente
          stop(); delay(300); forward(55); delay(1000);

          stop(); delay(600); turnLeftMiddleRobot(55); delay(800); // diagonal
          stop(); delay(300); forward(55);

          while(!stayOnBlackLine()){}
          stop(); delay(200); cont = 'D'; turnLeft(62);
        }

        if (cont == 'D') {
                turnRight(62);
        } else if (cont == 'E') {
                turnLeft(62);
        }
    
        if (stayOnBlackLine()) {
                while(stayOnBlackLine()){}
                delay(100);
                if (cont == 'D') {
                        turnLeft(62);
                        cont = 'E';
                } else if (cont == 'E') {
                        turnRight(62);
                        cont = 'D';
                }
        }

}