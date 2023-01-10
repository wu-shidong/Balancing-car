#include "default_task.h"

#include "cmsis_os.h"
#include "main.h"


/**
  * @brief          default task
  * @param[in]      argument: NULL
  * @retval         none
  */


void StartDefaultTask(void const * argument)
{
  /* USER CODE BEGIN StartDefaultTask */
  /* Infinite loop */
  while(1)
  {
    HAL_GPIO_TogglePin(LED_GPIO_Port,LED_Pin);
    osDelay(500);
  }
  /* USER CODE END StartDefaultTask */
}
