#include <kipr/wombat.h>

int main()
{    
    printf("Good morning, USA ");
    enable_servos();
    set_servo_position(0,1800);
        msleep(700);
    disable_servos();
//Sensors working well
  printf("Drive until bump\n");
    while(digital(0)==0)
        {  
        motor(0,-100);
        motor(2,-100);
        }
   while(digital(2)==0)
     {
        motor(0,50);
        motor(2,-50);
        }
    while(digital(0)==0)
     {
        motor(0,-30);
        motor(2,-30);
        }
    //if-else code test successfully compiled
  /*  motor(0,-65);
    motor(2,-65);
    msleep(2500);
    while(digital(0)==0)
        if(analog(0)>1600)
        {
            motor(0,90);
            motor(2,5);
        }
    else
        {
            motor(0,5);
            motor(2,90);
        } */
    ao();
    return 0;
   
}
