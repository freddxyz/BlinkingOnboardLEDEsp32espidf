#include <stdio.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <driver/gpio.h>

#define BUILT_IN_LED 13

void blink_light()
{
    
}
void app_main(void) {
    int i = 0;
    gpio_pad_select_gpio(BUILT_IN_LED);
    gpio_set_direction(BUILT_IN_LED, GPIO_MODE_OUTPUT);

    while(1){
        printf("[%d] Hello World! \n", i);
        gpio_set_level(BUILT_IN_LED, 1);
        i++;
        vTaskDelay(5000 / portTICK_PERIOD_MS);
        gpio_set_level(BUILT_IN_LED, 0);
        printf("[%d] Hello World! \n", i);
        vTaskDelay(500);
    }

}