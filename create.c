#include <kipr/wombat.h>
#test
int main()
{
    create3_connect();
    //the robot will drive to the pool noodle to catch it
    create3_drive_straight(0.58,0.46);
    create3_rotate_degrees(-30,45);
    create3_drive_straight(0.04,0.4);
    enable_servos();
    set_servo_position(0,900);
    set_servo_position(1,900);
    msleep(500);
    set_servo_position(0,600);
    set_servo_position(1,600);
    msleep(500);
    disable_servos();
    //the create will drop the pool noodle in the pipe
    create3_rotate_degrees(30,45);
    create3_drive_straight(0.85,0.45);
    create3_rotate_degrees(-20,40);
    create3_wait();
    return 0;

}
