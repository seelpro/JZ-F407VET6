/*
Продавец MI YU KOUNG Official Store
https://aliexpress.ru/item/1005001620616382.html?_ga=2.4368499.1347388189.1662655870-781822799.1621020684&sku_id=12000016843280467&spm=a2g39.buyer_reviews.tabs.4.75ec4aa6AA8shl
Примерно 2000р
*/

#define LED1_OFF() HAL_GPIO_WritePin(GPIOE, GPIO_PIN_13, GPIO_PIN_SET)
#define LED2_OFF() HAL_GPIO_WritePin(GPIOE, GPIO_PIN_14, GPIO_PIN_SET)
#define LED3_OFF() HAL_GPIO_WritePin(GPIOE, GPIO_PIN_15, GPIO_PIN_SET)

#define LED1_ON() HAL_GPIO_WritePin(GPIOE, GPIO_PIN_13, GPIO_PIN_RESET)
#define LED2_ON() HAL_GPIO_WritePin(GPIOE, GPIO_PIN_14, GPIO_PIN_RESET)
#define LED3_ON() HAL_GPIO_WritePin(GPIOE, GPIO_PIN_15, GPIO_PIN_RESET)

//#define K1_BUTTON_STATE() (HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0) == GPIO_PIN_SET)

osDelay(500);
taskENTER_CRITICAL();
taskEXIT_CRITICAL();

uint32_t millis(void) //Arduino function.
{
	return HAL_GetTick();
}