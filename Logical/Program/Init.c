
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	/*//Мотор Brush DC Motors 16C18 115.67
	dt = 0.002;
	fb_motor1.dt = dt;
	fb_motor2.dt = dt;
	//fb_regulator1.k_i = 0.16;
	//fb_regulator1.k_p = 0.0064;
	//pwm_period=200;
	ke = 0.087;
	Tm = 0.063;
	fb_motor1.Tm = Tm;
	fb_motor2.Tm = Tm;
	fb_motor1.ke = ke;
	fb_motor2.ke = ke;
	fb_motor1.u = 0;
	fb_motor2.u = 0;
	
	Tj = dt*3;
	fb_regulator1.k_i = ke/Tj;
	fb_regulator1.k_p = ke*Tm/Tj;
	fb_regulator1.max_abs_value = 20.0;
	speed = 50;
	enable = 1;
	time = 0;
	
	fb_regulator1.dt = dt;
	fb_regulator1.integrator.dt = dt;

	fb_motor1.integrator.dt = dt;
	fb_motor2.integrator.dt = dt;*/
	
	
	//Мотор Brush DC Motors 16C18 115.67
	dt = 0.1;
	Tj = 0.2*dt;
	Tm = 0.063;
	ke = 0.087;
	
	fb_regulator1.dt = dt;
	fb_regulator1.integrator.dt = dt;
	fb_regulator1.max_abs_value = 24.0;
	fb_regulator1.k_p = ke*Tm/Tj ;
	fb_regulator1.k_i = ke/Tj;
	fb_motor1.dt = dt;
	fb_motor1.integrator.dt = dt;
	fb_motor1.Tm = Tm;
	fb_motor1.ke = ke;
	fb_motor1.u = 0;
	fb_motor2.dt = dt;
	fb_motor2.integrator.dt = dt;
	fb_motor2.Tm = Tm;
	fb_motor2.ke = ke;
	fb_motor2.u = 0;
	counter = 0;
	speed = 0;
	enable = 1;
	flag = 0;
	
	




	

	
}
