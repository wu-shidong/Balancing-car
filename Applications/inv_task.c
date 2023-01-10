#include "inv_task.h"
#include "cmsis_os.h"
#include "main.h"
#include "mpu6050.h"
#include "inv_mpu.h"
#include "inv_mpu_dmp_motion_driver.h"
/**
  * @brief          inv task
  * @param[in]      argument: NULL
  * @retval         none
  */
float pitch,roll,yaw; 
short aacx,aacy,aacz;		
short gyrox,gyroy,gyroz;	
void inv_task(void const * argument)
{
  /* USER CODE BEGIN inv_task */
  /* Infinite loop */

  while(1)
  {
		if(mpu_dmp_get_data(&pitch,&roll,&yaw)==0)
		{								
			MPU_Get_Accelerometer(&aacx,&aacy,&aacz);	
			MPU_Get_Gyroscope(&gyrox,&gyroy,&gyroz);	
		}
		osDelay(1);
  }
  /* USER CODE END inv_task */
}

