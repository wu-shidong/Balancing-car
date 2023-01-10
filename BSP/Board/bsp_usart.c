#include "bsp_usart.h"
extern UART_HandleTypeDef huart1;
uint8_t USART1_RX;			           //USART1 Receive
char USART_RX_BUF[RXBUFFERSIZE];   //USART1 Receive interrupt buffer
uint8_t USART1_RX_CNT = 0;		     //Receive buffer count
/**
  * @brief          USART Init
  * @param[in]      NULL
  * @retval         none
  */
void USART_Init (void)
{
	// HAL_UART_Receive_IT(&huart1, (uint8_t *)&USART1_RX, 1);
}




#ifdef __GNUC__
  /* With GCC/RAISONANCE, small printf (option LD Linker->Libraries->Small printf
     set to 'Yes') calls __io_putchar() */
  #define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
#else
  #define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)
  #define GETCHAR_PROTOTYPE int fgetc(FILE * f)
#endif /* __GNUC__ */

/**
  * @brief  Retargets the C library printf function to the USART.
  * @param  None
  * @retval None
  */
PUTCHAR_PROTOTYPE
{
  /* Place your implementation of fputc here */
  /* e.g. write a character to the EVAL_COM1 and Loop until the end of transmission */
  HAL_UART_Transmit(&huart1, (uint8_t *)&ch, 1, 0xFFFF);
  return ch;
}
/**
  * @brief  Retargets the C library scanf function to the USART.
  * @param  None
  * @retval None
  */
GETCHAR_PROTOTYPE
{
  uint8_t ch = 0;
  HAL_UART_Receive(&huart1, (uint8_t *)&ch, 1, 0xffff);
  return ch;
}
